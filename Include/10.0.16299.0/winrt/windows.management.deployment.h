/* Header file automatically generated from windows.management.deployment.idl */
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
#ifndef __windows2Emanagement2Edeployment_h__
#define __windows2Emanagement2Edeployment_h__
#ifndef __windows2Emanagement2Edeployment_p_h__
#define __windows2Emanagement2Edeployment_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IDeploymentResult;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult ABI::Windows::Management::Deployment::IDeploymentResult

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IDeploymentResult2;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 ABI::Windows::Management::Deployment::IDeploymentResult2

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManager;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager ABI::Windows::Management::Deployment::IPackageManager

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManager2;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 ABI::Windows::Management::Deployment::IPackageManager2

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManager3;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 ABI::Windows::Management::Deployment::IPackageManager3

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManager4;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 ABI::Windows::Management::Deployment::IPackageManager4

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManager5;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 ABI::Windows::Management::Deployment::IPackageManager5

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManager6;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 ABI::Windows::Management::Deployment::IPackageManager6

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageManagerDebugSettings;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings ABI::Windows::Management::Deployment::IPackageManagerDebugSettings

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageUserInformation;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation ABI::Windows::Management::Deployment::IPackageUserInformation

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageVolume;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume ABI::Windows::Management::Deployment::IPackageVolume

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                interface IPackageVolume2;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 ABI::Windows::Management::Deployment::IPackageVolume2

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                class PackageUserInformation;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_USE
#define DEF___FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("75660566-ae43-5858-ada6-d57ddae90277"))
IIterator<ABI::Windows::Management::Deployment::PackageUserInformation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageUserInformation*, ABI::Windows::Management::Deployment::IPackageUserInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Management.Deployment.PackageUserInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Management::Deployment::PackageUserInformation*> __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_t;
#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Management::Deployment::IPackageUserInformation*>
//#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Management::Deployment::IPackageUserInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_USE
#define DEF___FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("341348b9-52c8-5b57-9e91-f19f2a05b188"))
IIterable<ABI::Windows::Management::Deployment::PackageUserInformation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageUserInformation*, ABI::Windows::Management::Deployment::IPackageUserInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Management.Deployment.PackageUserInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Management::Deployment::PackageUserInformation*> __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_t;
#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Management::Deployment::IPackageUserInformation*>
//#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Management::Deployment::IPackageUserInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                class PackageVolume;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a8d5b736-4e68-5ef1-9f07-f06837988c73"))
IIterator<ABI::Windows::Management::Deployment::PackageVolume*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageVolume*, ABI::Windows::Management::Deployment::IPackageVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Management.Deployment.PackageVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Management::Deployment::PackageVolume*> __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Management::Deployment::IPackageVolume*>
//#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Management::Deployment::IPackageVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a6199162-b163-56a1-9980-db0c3f4e9284"))
IIterable<ABI::Windows::Management::Deployment::PackageVolume*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageVolume*, ABI::Windows::Management::Deployment::IPackageVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Management.Deployment.PackageVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Management::Deployment::PackageVolume*> __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Management::Deployment::IPackageVolume*>
//#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Management::Deployment::IPackageVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("50b5715a-f077-53d1-896d-b132c48701f4"))
IVectorView<ABI::Windows::Management::Deployment::PackageVolume*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageVolume*, ABI::Windows::Management::Deployment::IPackageVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Management.Deployment.PackageVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Management::Deployment::PackageVolume*> __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::Deployment::IPackageVolume*>
//#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::Deployment::IPackageVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                class DeploymentResult;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                struct DeploymentProgress;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1b926d1-1796-597a-9bea-6c6449d03eef"))
IAsyncOperationProgressHandler<ABI::Windows::Management::Deployment::DeploymentResult*,struct ABI::Windows::Management::Deployment::DeploymentProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::DeploymentResult*, ABI::Windows::Management::Deployment::IDeploymentResult*>,struct ABI::Windows::Management::Deployment::DeploymentProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Management.Deployment.DeploymentResult, Windows.Management.Deployment.DeploymentProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Management::Deployment::DeploymentResult*,struct ABI::Windows::Management::Deployment::DeploymentProgress> __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Management::Deployment::IDeploymentResult*,ABI::Windows::Management::Deployment::DeploymentProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Management::Deployment::IDeploymentResult*,ABI::Windows::Management::Deployment::DeploymentProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6e1c7129-61e0-5d88-9fd4-f3ce65a05719"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Management::Deployment::DeploymentResult*,struct ABI::Windows::Management::Deployment::DeploymentProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::DeploymentResult*, ABI::Windows::Management::Deployment::IDeploymentResult*>,struct ABI::Windows::Management::Deployment::DeploymentProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Management.Deployment.DeploymentResult, Windows.Management.Deployment.DeploymentProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Management::Deployment::DeploymentResult*,struct ABI::Windows::Management::Deployment::DeploymentProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Management::Deployment::IDeploymentResult*,ABI::Windows::Management::Deployment::DeploymentProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Management::Deployment::IDeploymentResult*,ABI::Windows::Management::Deployment::DeploymentProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5a97aab7-b6ea-55ac-a5dc-d5b164d94e94"))
IAsyncOperationWithProgress<ABI::Windows::Management::Deployment::DeploymentResult*,struct ABI::Windows::Management::Deployment::DeploymentProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::DeploymentResult*, ABI::Windows::Management::Deployment::IDeploymentResult*>,struct ABI::Windows::Management::Deployment::DeploymentProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Management.Deployment.DeploymentResult, Windows.Management.Deployment.DeploymentProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Management::Deployment::DeploymentResult*,struct ABI::Windows::Management::Deployment::DeploymentProgress> __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Management::Deployment::IDeploymentResult*,ABI::Windows::Management::Deployment::DeploymentProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Management::Deployment::IDeploymentResult*,ABI::Windows::Management::Deployment::DeploymentProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("721241c2-0b83-594a-9b61-ce7f1492c415"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Management.Deployment.PackageVolume>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::Deployment::IPackageVolume*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::Deployment::IPackageVolume*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1e357e07-d337-5c07-ae06-900c1b9a77c1"))
IAsyncOperation<__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Management.Deployment.PackageVolume>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume*> __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::Deployment::IPackageVolume*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::Deployment::IPackageVolume*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("35fee361-6cea-5e5c-8eda-34b3f22df4e7"))
IAsyncOperationCompletedHandler<ABI::Windows::Management::Deployment::PackageVolume*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageVolume*, ABI::Windows::Management::Deployment::IPackageVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Management.Deployment.PackageVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Management::Deployment::PackageVolume*> __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Management::Deployment::IPackageVolume*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Management::Deployment::IPackageVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#define DEF___FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0315edb6-dc58-51cc-a519-44901ad2cf15"))
IAsyncOperation<ABI::Windows::Management::Deployment::PackageVolume*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::Deployment::PackageVolume*, ABI::Windows::Management::Deployment::IPackageVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Management.Deployment.PackageVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Management::Deployment::PackageVolume*> __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_t;
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Management::Deployment::IPackageVolume*>
//#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Management::Deployment::IPackageVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CFoundation__CUri_USE
#define DEF___FIIterator_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1c157d0f-5efe-5cec-bbd6-0c6ce9af07a5"))
IIterator<ABI::Windows::Foundation::Uri*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Foundation::Uri*> __FIIterator_1_Windows__CFoundation__CUri_t;
#define __FIIterator_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIIterator_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CFoundation__CUri_USE
#define DEF___FIIterable_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b0d63b78-78ad-5e31-b6d8-e32a0e16c447"))
IIterable<ABI::Windows::Foundation::Uri*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Foundation::Uri*> __FIIterable_1_Windows__CFoundation__CUri_t;
#define __FIIterable_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIIterable_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class Package;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage ABI::Windows::ApplicationModel::IPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0217f069-025c-5ee6-a87f-e782e3b623ae"))
IIterator<ABI::Windows::ApplicationModel::Package*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Package*> __FIIterator_1_Windows__CApplicationModel__CPackage_t;
#define __FIIterator_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIIterator_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("69ad6aa7-0c49-5f27-a5eb-ef4d59467b6d"))
IIterable<ABI::Windows::ApplicationModel::Package*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Package*> __FIIterable_1_Windows__CApplicationModel__CPackage_t;
#define __FIIterable_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIIterable_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPackage_USE */


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




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0263c4d4-195c-5dc5-a7ca-6806ceca420b"))
IVectorView<ABI::Windows::ApplicationModel::Package*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Package*> __FIVectorView_1_Windows__CApplicationModel__CPackage_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d1bb509e-6989-5c69-b1ff-d1702fe8aca3"))
IVector<ABI::Windows::ApplicationModel::Package*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::Package*> __FIVector_1_Windows__CApplicationModel__CPackage_t;
#define __FIVector_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIVector_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_UINT64_USE
#define DEF___FIAsyncOperationCompletedHandler_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ee8aeb02-fb00-51fa-8f57-32583ea241f9"))
IAsyncOperationCompletedHandler<UINT64> : IAsyncOperationCompletedHandler_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<UINT64> __FIAsyncOperationCompletedHandler_1_UINT64_t;
#define __FIAsyncOperationCompletedHandler_1_UINT64 ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_UINT64 ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT64>
//#define __FIAsyncOperationCompletedHandler_1_UINT64_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_UINT64_USE */




#ifndef DEF___FIAsyncOperation_1_UINT64_USE
#define DEF___FIAsyncOperation_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2a70d630-0767-5f0a-a1c2-deb08126e26e"))
IAsyncOperation<UINT64> : IAsyncOperation_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<UINT64> __FIAsyncOperation_1_UINT64_t;
#define __FIAsyncOperation_1_UINT64 ABI::Windows::Foundation::__FIAsyncOperation_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_UINT64 ABI::Windows::Foundation::IAsyncOperation<UINT64>
//#define __FIAsyncOperation_1_UINT64_t ABI::Windows::Foundation::IAsyncOperation<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_UINT64_USE */






namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            
            typedef enum PackageContentGroupState : int PackageContentGroupState;
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */



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
        namespace Management {
            namespace Deployment {
                
                typedef enum AddPackageByAppInstallerOptions : unsigned int AddPackageByAppInstallerOptions;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum DeploymentOptions : unsigned int DeploymentOptions;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum DeploymentProgressState : int DeploymentProgressState;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum PackageInstallState : int PackageInstallState;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum PackageState : int PackageState;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum PackageStatus : unsigned int PackageStatus;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum PackageTypes : unsigned int PackageTypes;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef enum RemovalOptions : unsigned int RemovalOptions;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                
                typedef struct DeploymentProgress DeploymentProgress;
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */














namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                class PackageManager;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                class PackageManagerDebugSettings;
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */












/*
 *
 * Struct Windows.Management.Deployment.AddPackageByAppInstallerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, flags, contract] */
                enum AddPackageByAppInstallerOptions : unsigned int
                {
                    AddPackageByAppInstallerOptions_None = 0,
                    AddPackageByAppInstallerOptions_InstallAllResources = 0x20,
                    AddPackageByAppInstallerOptions_ForceTargetAppShutdown = 0x40,
                    AddPackageByAppInstallerOptions_RequiredContentGroupOnly = 0x100,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(AddPackageByAppInstallerOptions)
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Management.Deployment.DeploymentOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, flags, contract] */
                enum DeploymentOptions : unsigned int
                {
                    DeploymentOptions_None = 0,
                    DeploymentOptions_ForceApplicationShutdown = 0x1,
                    DeploymentOptions_DevelopmentMode = 0x2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    DeploymentOptions_InstallAllResources = 0x20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    DeploymentOptions_ForceTargetApplicationShutdown = 0x40,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    DeploymentOptions_RequiredContentGroupOnly = 0x100,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(DeploymentOptions)
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.DeploymentProgressState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum DeploymentProgressState : int
                {
                    DeploymentProgressState_Queued = 0,
                    DeploymentProgressState_Processing = 1,
                };
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageInstallState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum PackageInstallState : int
                {
                    PackageInstallState_NotInstalled = 0,
                    PackageInstallState_Staged = 1,
                    PackageInstallState_Installed = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                    PackageInstallState_Paused = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
                    
                };
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, contract] */
                enum PackageState : int
                {
                    PackageState_Normal = 0,
                    PackageState_LicenseInvalid = 1,
                    PackageState_Modified = 2,
                    PackageState_Tampered = 3,
                };
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, flags, contract] */
                enum PackageStatus : unsigned int
                {
                    PackageStatus_OK = 0,
                    PackageStatus_LicenseIssue = 0x1,
                    PackageStatus_Modified = 0x2,
                    PackageStatus_Tampered = 0x4,
                    PackageStatus_Disabled = 0x8,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(PackageStatus)
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, flags, contract] */
                enum PackageTypes : unsigned int
                {
                    PackageTypes_None = 0,
                    PackageTypes_Main = 0x1,
                    PackageTypes_Framework = 0x2,
                    PackageTypes_Resource = 0x4,
                    PackageTypes_Bundle = 0x8,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    PackageTypes_Xap = 0x10,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    PackageTypes_Optional = 0x20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(PackageTypes)
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.RemovalOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [v1_enum, flags, contract] */
                enum RemovalOptions : unsigned int
                {
                    RemovalOptions_None = 0,
                    RemovalOptions_PreserveApplicationData = 0x1000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(RemovalOptions)
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.DeploymentProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [contract] */
                struct DeploymentProgress
                {
                    ABI::Windows::Management::Deployment::DeploymentProgressState state;
                    UINT32 percentage;
                };
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IDeploymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.DeploymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IDeploymentResult[] = L"Windows.Management.Deployment.IDeploymentResult";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("2563B9AE-B77D-4C1F-8A7B-20E6AD515EF3"), exclusiveto, contract] */
                MIDL_INTERFACE("2563B9AE-B77D-4C1F-8A7B-20E6AD515EF3")
                IDeploymentResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedErrorCode(
                        /* [retval, out] */__RPC__out HRESULT * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeploymentResult=_uuidof(IDeploymentResult);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IDeploymentResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.DeploymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IDeploymentResult2[] = L"Windows.Management.Deployment.IDeploymentResult2";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("FC0E715C-5A01-4BD7-BCF1-381C8C82E04A"), exclusiveto, contract] */
                MIDL_INTERFACE("FC0E715C-5A01-4BD7-BCF1-381C8C82E04A")
                IDeploymentResult2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRegistered(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDeploymentResult2=_uuidof(IDeploymentResult2);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager[] = L"Windows.Management.Deployment.IPackageManager";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("9A7D4B65-5E8F-4FC7-A2E5-7F6925CB8B53"), exclusiveto, contract] */
                MIDL_INTERFACE("9A7D4B65-5E8F-4FC7-A2E5-7F6925CB8B53")
                IPackageManager : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPackageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdatePackageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemovePackageAsync(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StagePackageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterPackageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * manifestUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackages(
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityId(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByNamePublisher(
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdNamePublisher(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindUsers(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * * users
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPackageState(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [in] */ABI::Windows::Management::Deployment::PackageState packageState
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackageByPackageFullName(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * packageInformation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CleanupPackageForUserAsync(
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByPackageFamilyName(
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdPackageFamilyName(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackageByUserSecurityIdPackageFullName(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * packageInformation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManager=_uuidof(IPackageManager);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager2[] = L"Windows.Management.Deployment.IPackageManager2";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("F7AAD08D-0840-46F2-B5D8-CAD47693A095"), exclusiveto, contract] */
                MIDL_INTERFACE("F7AAD08D-0840-46F2-B5D8-CAD47693A095")
                IPackageManager2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RemovePackageWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [in] */ABI::Windows::Management::Deployment::RemovalOptions removalOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StagePackageWithOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RegisterPackageByFullNameAsync(
                        /* [in] */__RPC__in HSTRING mainPackageFullName,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * dependencyPackageFullNames,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesWithPackageTypes(
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdWithPackageTypes(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByNamePublisherWithPackageTypes(
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByPackageFamilyNameWithPackageTypes(
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StageUserDataAsync(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManager2=_uuidof(IPackageManager2);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager3[] = L"Windows.Management.Deployment.IPackageManager3";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("DAAD9948-36F1-41A7-9188-BC263E0DCB72"), exclusiveto, contract] */
                MIDL_INTERFACE("DAAD9948-36F1-41A7-9188-BC263E0DCB72")
                IPackageManager3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddPackageVolumeAsync(
                        /* [in] */__RPC__in HSTRING packageStorePath,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * * packageVolume
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPackageToVolumeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearPackageStatus(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [in] */ABI::Windows::Management::Deployment::PackageStatus status
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterPackageWithAppDataVolumeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * manifestUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * appDataVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackageVolumeByName(
                        /* [in] */__RPC__in HSTRING volumeName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::Deployment::IPackageVolume * * volume
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindPackageVolumes(
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * * volumeCollection
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultPackageVolume(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::Deployment::IPackageVolume * * volume
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MovePackageToVolumeAsync(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemovePackageVolumeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * volume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDefaultPackageVolume(
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * volume
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPackageStatus(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [in] */ABI::Windows::Management::Deployment::PackageStatus status
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPackageVolumeOfflineAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * packageVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPackageVolumeOnlineAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * packageVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StagePackageToVolumeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StageUserDataWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManager3=_uuidof(IPackageManager3);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager4[] = L"Windows.Management.Deployment.IPackageManager4";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("3C719963-BAB6-46BF-8FF7-DA4719230AE6"), exclusiveto, contract] */
                MIDL_INTERFACE("3C719963-BAB6-46BF-8FF7-DA4719230AE6")
                IPackageManager4 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPackageVolumesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManager4=_uuidof(IPackageManager4);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager5[] = L"Windows.Management.Deployment.IPackageManager5";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("711F3117-1AFD-4313-978C-9BB6E1B864A7"), exclusiveto, contract] */
                MIDL_INTERFACE("711F3117-1AFD-4313-978C-9BB6E1B864A7")
                IPackageManager5 : IInspectable
                {
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE AddPackageToVolumeAndOptionalPackagesAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * externalPackageUris,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE StagePackageToVolumeAndOptionalPackagesAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * externalPackageUris,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterPackageByFamilyNameAndOptionalPackagesAsync(
                        /* [in] */__RPC__in HSTRING mainPackageFamilyName,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * dependencyPackageFamilyNames,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * appDataVolume,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DebugSettings(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::Deployment::IPackageManagerDebugSettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManager5=_uuidof(IPackageManager5);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager6
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager6[] = L"Windows.Management.Deployment.IPackageManager6";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("0847E909-53CD-4E4F-832E-57D180F6E447"), exclusiveto, contract] */
                MIDL_INTERFACE("0847E909-53CD-4E4F-832E-57D180F6E447")
                IPackageManager6 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ProvisionPackageForAllUsersAsync(
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddPackageByAppInstallerFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * appInstallerFileUri,
                        /* [in] */ABI::Windows::Management::Deployment::AddPackageByAppInstallerOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAddPackageByAppInstallerFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * appInstallerFileUri,
                        /* [in] */ABI::Windows::Management::Deployment::AddPackageByAppInstallerOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPackageToVolumeAndRelatedSetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StagePackageToVolumeAndRelatedSetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAddPackageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * packageUri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
                        /* [in] */ABI::Windows::Management::Deployment::DeploymentOptions deploymentOptions,
                        /* [in] */__RPC__in_opt ABI::Windows::Management::Deployment::IPackageVolume * targetVolume,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManager6=_uuidof(IPackageManager6);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManagerDebugSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManagerDebugSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManagerDebugSettings[] = L"Windows.Management.Deployment.IPackageManagerDebugSettings";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("1A611683-A988-4FCF-8F0F-CE175898E8EB"), exclusiveto, contract] */
                MIDL_INTERFACE("1A611683-A988-4FCF-8F0F-CE175898E8EB")
                IPackageManagerDebugSettings : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetContentGroupStateAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::IPackage * package,
                        /* [in] */__RPC__in HSTRING contentGroupName,
                        /* [in] */ABI::Windows::ApplicationModel::PackageContentGroupState state,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetContentGroupStateWithPercentageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::IPackage * package,
                        /* [in] */__RPC__in HSTRING contentGroupName,
                        /* [in] */ABI::Windows::ApplicationModel::PackageContentGroupState state,
                        /* [in] */DOUBLE completionPercentage,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageManagerDebugSettings=_uuidof(IPackageManagerDebugSettings);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Deployment.IPackageUserInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageUserInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageUserInformation[] = L"Windows.Management.Deployment.IPackageUserInformation";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("F6383423-FA09-4CBC-9055-15CA275E2E7E"), exclusiveto, contract] */
                MIDL_INTERFACE("F6383423-FA09-4CBC-9055-15CA275E2E7E")
                IPackageUserInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserSecurityId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallState(
                        /* [retval, out] */__RPC__out ABI::Windows::Management::Deployment::PackageInstallState * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageUserInformation=_uuidof(IPackageUserInformation);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageVolume[] = L"Windows.Management.Deployment.IPackageVolume";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("CF2672C3-1A40-4450-9739-2ACE2E898853"), exclusiveto, contract] */
                MIDL_INTERFACE("CF2672C3-1A40-4450-9739-2ACE2E898853")
                IPackageVolume : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOffline(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSystemVolume(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MountPoint(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageStorePath(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportsHardLinks(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByNamePublisher(
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByPackageFamilyName(
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesWithPackageTypes(
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByNamePublisherWithPackagesTypes(
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByPackageFamilyNameWithPackageTypes(
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackageByPackageFullName(
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityId(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdNamePublisher(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdPackageFamilyName(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdWithPackageTypes(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [in] */__RPC__in HSTRING packageName,
                        /* [in] */__RPC__in HSTRING packagePublisher,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */ABI::Windows::Management::Deployment::PackageTypes packageTypes,
                        /* [in] */__RPC__in HSTRING packageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindPackageByUserSecurityIdPackageFullName(
                        /* [in] */__RPC__in HSTRING userSecurityId,
                        /* [in] */__RPC__in HSTRING packageFullName,
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageVolume=_uuidof(IPackageVolume);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageVolume2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageVolume2[] = L"Windows.Management.Deployment.IPackageVolume2";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                /* [object, uuid("46ABCF2E-9DD4-47A2-AB8C-C6408349BCD8"), exclusiveto, contract] */
                MIDL_INTERFACE("46ABCF2E-9DD4-47A2-AB8C-C6408349BCD8")
                IPackageVolume2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsFullTrustPackageSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAppxInstallSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAvailableSpaceAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT64 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPackageVolume2=_uuidof(IPackageVolume2);
                
            } /* Windows */
        } /* Management */
    } /* Deployment */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Management.Deployment.DeploymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IDeploymentResult ** Default Interface **
 *    Windows.Management.Deployment.IDeploymentResult2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_DeploymentResult_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_DeploymentResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_DeploymentResult[] = L"Windows.Management.Deployment.DeploymentResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.PackageManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageManager ** Default Interface **
 *    Windows.Management.Deployment.IPackageManager2
 *    Windows.Management.Deployment.IPackageManager3
 *    Windows.Management.Deployment.IPackageManager4
 *    Windows.Management.Deployment.IPackageManager5
 *    Windows.Management.Deployment.IPackageManager6
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageManager_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageManager[] = L"Windows.Management.Deployment.PackageManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.PackageManagerDebugSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageManagerDebugSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageManagerDebugSettings_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageManagerDebugSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageManagerDebugSettings[] = L"Windows.Management.Deployment.PackageManagerDebugSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.Deployment.PackageUserInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageUserInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageUserInformation_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageUserInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageUserInformation[] = L"Windows.Management.Deployment.PackageUserInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.PackageVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageVolume ** Default Interface **
 *    Windows.Management.Deployment.IPackageVolume2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageVolume_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageVolume_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageVolume[] = L"Windows.Management.Deployment.PackageVolume";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation;

typedef struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl;

interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation;

typedef  struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CDeployment__CPackageUserInformation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl;

interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef  struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CDeployment__CPackageVolume **first);

    END_INTERFACE
} __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef struct __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
            /* [in] */ __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume;

typedef struct __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CManagement__CDeployment__CPackageVolume **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl;

interface __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;

typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;

interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CUri_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;

typedef  struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);

    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;

interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CUri_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPackage __FIIterator_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPackage;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPackage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPackage __FIIterable_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPackage;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPackage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPackage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

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



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPackage __FIVectorView_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPackage;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CIPackage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CPackage __FIVector_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CPackage;

typedef struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIPackage * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIVector_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_UINT64 __FIAsyncOperationCompletedHandler_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT64;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_UINT64 __FIAsyncOperation_1_UINT64;

typedef struct __FIAsyncOperationCompletedHandler_1_UINT64Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT64 * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT64Vtbl;

interface __FIAsyncOperationCompletedHandler_1_UINT64
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_UINT64 __FIAsyncOperation_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_UINT64;

typedef struct __FIAsyncOperation_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT64 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT64 * This, /* [retval][out] */ __RPC__out __int64 *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT64Vtbl;

interface __FIAsyncOperation_1_UINT64
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT64_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_UINT64_INTERFACE_DEFINED__





typedef enum __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState;



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageState __x_ABI_CWindows_CManagement_CDeployment_CPackageState;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes;


typedef enum __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions;


typedef struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress;


























/*
 *
 * Struct Windows.Management.Deployment.AddPackageByAppInstallerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions
{
    AddPackageByAppInstallerOptions_None = 0,
    AddPackageByAppInstallerOptions_InstallAllResources = 0x20,
    AddPackageByAppInstallerOptions_ForceTargetAppShutdown = 0x40,
    AddPackageByAppInstallerOptions_RequiredContentGroupOnly = 0x100,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Management.Deployment.DeploymentOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions
{
    DeploymentOptions_None = 0,
    DeploymentOptions_ForceApplicationShutdown = 0x1,
    DeploymentOptions_DevelopmentMode = 0x2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    DeploymentOptions_InstallAllResources = 0x20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    DeploymentOptions_ForceTargetApplicationShutdown = 0x40,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    DeploymentOptions_RequiredContentGroupOnly = 0x100,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.DeploymentProgressState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState
{
    DeploymentProgressState_Queued = 0,
    DeploymentProgressState_Processing = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageInstallState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState
{
    PackageInstallState_NotInstalled = 0,
    PackageInstallState_Staged = 1,
    PackageInstallState_Installed = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
    PackageInstallState_Paused = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageState
{
    PackageState_Normal = 0,
    PackageState_LicenseInvalid = 1,
    PackageState_Modified = 2,
    PackageState_Tampered = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageStatus
{
    PackageStatus_OK = 0,
    PackageStatus_LicenseIssue = 0x1,
    PackageStatus_Modified = 0x2,
    PackageStatus_Tampered = 0x4,
    PackageStatus_Disabled = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.PackageTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CPackageTypes
{
    PackageTypes_None = 0,
    PackageTypes_Main = 0x1,
    PackageTypes_Framework = 0x2,
    PackageTypes_Resource = 0x4,
    PackageTypes_Bundle = 0x8,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    PackageTypes_Xap = 0x10,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    PackageTypes_Optional = 0x20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.RemovalOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions
{
    RemovalOptions_None = 0,
    RemovalOptions_PreserveApplicationData = 0x1000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Management.Deployment.DeploymentProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgress
{
    __x_ABI_CWindows_CManagement_CDeployment_CDeploymentProgressState state;
    UINT32 percentage;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IDeploymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.DeploymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IDeploymentResult[] = L"Windows.Management.Deployment.IDeploymentResult";
/* [object, uuid("2563B9AE-B77D-4C1F-8A7B-20E6AD515EF3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorText )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedErrorCode )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResultVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_get_ErrorText(This,value) \
    ( (This)->lpVtbl->get_ErrorText(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_get_ExtendedErrorCode(This,value) \
    ( (This)->lpVtbl->get_ExtendedErrorCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IDeploymentResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.DeploymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IDeploymentResult2[] = L"Windows.Management.Deployment.IDeploymentResult2";
/* [object, uuid("FC0E715C-5A01-4BD7-BCF1-381C8C82E04A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRegistered )(
        __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_get_IsRegistered(This,value) \
    ( (This)->lpVtbl->get_IsRegistered(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIDeploymentResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager[] = L"Windows.Management.Deployment.IPackageManager";
/* [object, uuid("9A7D4B65-5E8F-4FC7-A2E5-7F6925CB8B53"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdatePackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RemovePackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *StagePackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterPackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * manifestUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackages )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    HRESULT ( STDMETHODCALLTYPE *FindUsers )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CManagement__CDeployment__CPackageUserInformation * * users
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageState )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageState packageState
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackageByPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * packageInformation
        );
    HRESULT ( STDMETHODCALLTYPE *CleanupPackageForUserAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackageByUserSecurityIdPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * packageInformation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_AddPackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) \
    ( (This)->lpVtbl->AddPackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_UpdatePackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) \
    ( (This)->lpVtbl->UpdatePackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_RemovePackageAsync(This,packageFullName,deploymentOperation) \
    ( (This)->lpVtbl->RemovePackageAsync(This,packageFullName,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_StagePackageAsync(This,packageUri,dependencyPackageUris,deploymentOperation) \
    ( (This)->lpVtbl->StagePackageAsync(This,packageUri,dependencyPackageUris,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_RegisterPackageAsync(This,manifestUri,dependencyPackageUris,deploymentOptions,deploymentOperation) \
    ( (This)->lpVtbl->RegisterPackageAsync(This,manifestUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackages(This,packageCollection) \
    ( (This)->lpVtbl->FindPackages(This,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackagesByUserSecurityId(This,userSecurityId,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityId(This,userSecurityId,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackagesByNamePublisher(This,packageName,packagePublisher,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByNamePublisher(This,packageName,packagePublisher,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackagesByUserSecurityIdNamePublisher(This,userSecurityId,packageName,packagePublisher,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisher(This,userSecurityId,packageName,packagePublisher,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindUsers(This,packageFullName,users) \
    ( (This)->lpVtbl->FindUsers(This,packageFullName,users) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_SetPackageState(This,packageFullName,packageState) \
    ( (This)->lpVtbl->SetPackageState(This,packageFullName,packageState) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackageByPackageFullName(This,packageFullName,packageInformation) \
    ( (This)->lpVtbl->FindPackageByPackageFullName(This,packageFullName,packageInformation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_CleanupPackageForUserAsync(This,packageName,userSecurityId,deploymentOperation) \
    ( (This)->lpVtbl->CleanupPackageForUserAsync(This,packageName,userSecurityId,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackagesByPackageFamilyName(This,packageFamilyName,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByPackageFamilyName(This,packageFamilyName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackagesByUserSecurityIdPackageFamilyName(This,userSecurityId,packageFamilyName,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyName(This,userSecurityId,packageFamilyName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_FindPackageByUserSecurityIdPackageFullName(This,userSecurityId,packageFullName,packageInformation) \
    ( (This)->lpVtbl->FindPackageByUserSecurityIdPackageFullName(This,userSecurityId,packageFullName,packageInformation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager2[] = L"Windows.Management.Deployment.IPackageManager2";
/* [object, uuid("F7AAD08D-0840-46F2-B5D8-CAD47693A095"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RemovePackageWithOptionsAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CRemovalOptions removalOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StagePackageWithOptionsAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterPackageByFullNameAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING mainPackageFullName,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * dependencyPackageFullNames,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisherWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisherWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyNameWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StageUserDataAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2 * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_RemovePackageWithOptionsAsync(This,packageFullName,removalOptions,deploymentOperation) \
    ( (This)->lpVtbl->RemovePackageWithOptionsAsync(This,packageFullName,removalOptions,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_StagePackageWithOptionsAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) \
    ( (This)->lpVtbl->StagePackageWithOptionsAsync(This,packageUri,dependencyPackageUris,deploymentOptions,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_RegisterPackageByFullNameAsync(This,mainPackageFullName,dependencyPackageFullNames,deploymentOptions,deploymentOperation) \
    ( (This)->lpVtbl->RegisterPackageByFullNameAsync(This,mainPackageFullName,dependencyPackageFullNames,deploymentOptions,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FindPackagesWithPackageTypes(This,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesWithPackageTypes(This,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FindPackagesByUserSecurityIdWithPackageTypes(This,userSecurityId,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdWithPackageTypes(This,userSecurityId,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FindPackagesByNamePublisherWithPackageTypes(This,packageName,packagePublisher,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByNamePublisherWithPackageTypes(This,packageName,packagePublisher,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(This,userSecurityId,packageName,packagePublisher,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(This,userSecurityId,packageName,packagePublisher,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FindPackagesByPackageFamilyNameWithPackageTypes(This,packageFamilyName,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByPackageFamilyNameWithPackageTypes(This,packageFamilyName,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(This,userSecurityId,packageFamilyName,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(This,userSecurityId,packageFamilyName,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_StageUserDataAsync(This,packageFullName,deploymentOperation) \
    ( (This)->lpVtbl->StageUserDataAsync(This,packageFullName,deploymentOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager3[] = L"Windows.Management.Deployment.IPackageManager3";
/* [object, uuid("DAAD9948-36F1-41A7-9188-BC263E0DCB72"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddPackageVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in HSTRING packageStorePath,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CManagement__CDeployment__CPackageVolume * * packageVolume
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPackageToVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPackageStatus )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageStatus status
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterPackageWithAppDataVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * manifestUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * appDataVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackageVolumeByName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in HSTRING volumeName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * * volume
        );
    HRESULT ( STDMETHODCALLTYPE *FindPackageVolumes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CManagement__CDeployment__CPackageVolume * * volumeCollection
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultPackageVolume )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * * volume
        );
    HRESULT ( STDMETHODCALLTYPE *MovePackageToVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RemovePackageVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * volume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultPackageVolume )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * volume
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageStatus )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageStatus status
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageVolumeOfflineAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * packageVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    HRESULT ( STDMETHODCALLTYPE *SetPackageVolumeOnlineAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * packageVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StagePackageToVolumeAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StageUserDataWithOptionsAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3 * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_AddPackageVolumeAsync(This,packageStorePath,packageVolume) \
    ( (This)->lpVtbl->AddPackageVolumeAsync(This,packageStorePath,packageVolume) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_AddPackageToVolumeAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,deploymentOperation) \
    ( (This)->lpVtbl->AddPackageToVolumeAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_ClearPackageStatus(This,packageFullName,status) \
    ( (This)->lpVtbl->ClearPackageStatus(This,packageFullName,status) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_RegisterPackageWithAppDataVolumeAsync(This,manifestUri,dependencyPackageUris,deploymentOptions,appDataVolume,deploymentOperation) \
    ( (This)->lpVtbl->RegisterPackageWithAppDataVolumeAsync(This,manifestUri,dependencyPackageUris,deploymentOptions,appDataVolume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FindPackageVolumeByName(This,volumeName,volume) \
    ( (This)->lpVtbl->FindPackageVolumeByName(This,volumeName,volume) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_FindPackageVolumes(This,volumeCollection) \
    ( (This)->lpVtbl->FindPackageVolumes(This,volumeCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_GetDefaultPackageVolume(This,volume) \
    ( (This)->lpVtbl->GetDefaultPackageVolume(This,volume) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_MovePackageToVolumeAsync(This,packageFullName,deploymentOptions,targetVolume,deploymentOperation) \
    ( (This)->lpVtbl->MovePackageToVolumeAsync(This,packageFullName,deploymentOptions,targetVolume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_RemovePackageVolumeAsync(This,volume,deploymentOperation) \
    ( (This)->lpVtbl->RemovePackageVolumeAsync(This,volume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_SetDefaultPackageVolume(This,volume) \
    ( (This)->lpVtbl->SetDefaultPackageVolume(This,volume) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_SetPackageStatus(This,packageFullName,status) \
    ( (This)->lpVtbl->SetPackageStatus(This,packageFullName,status) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_SetPackageVolumeOfflineAsync(This,packageVolume,deploymentOperation) \
    ( (This)->lpVtbl->SetPackageVolumeOfflineAsync(This,packageVolume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_SetPackageVolumeOnlineAsync(This,packageVolume,deploymentOperation) \
    ( (This)->lpVtbl->SetPackageVolumeOnlineAsync(This,packageVolume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_StagePackageToVolumeAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,deploymentOperation) \
    ( (This)->lpVtbl->StagePackageToVolumeAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_StageUserDataWithOptionsAsync(This,packageFullName,deploymentOptions,deploymentOperation) \
    ( (This)->lpVtbl->StageUserDataWithOptionsAsync(This,packageFullName,deploymentOptions,deploymentOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager4[] = L"Windows.Management.Deployment.IPackageManager4";
/* [object, uuid("3C719963-BAB6-46BF-8FF7-DA4719230AE6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPackageVolumesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CManagement__CDeployment__CPackageVolume * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_GetPackageVolumesAsync(This,operation) \
    ( (This)->lpVtbl->GetPackageVolumesAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager5[] = L"Windows.Management.Deployment.IPackageManager5";
/* [object, uuid("711F3117-1AFD-4313-978C-9BB6E1B864A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *AddPackageToVolumeAndOptionalPackagesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * externalPackageUris,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *StagePackageToVolumeAndOptionalPackagesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * externalPackageUris,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterPackageByFamilyNameAndOptionalPackagesAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
        /* [in] */__RPC__in HSTRING mainPackageFamilyName,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * dependencyPackageFamilyNames,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * appDataVolume,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * deploymentOperation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DebugSettings )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_AddPackageToVolumeAndOptionalPackagesAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,externalPackageUris,deploymentOperation) \
    ( (This)->lpVtbl->AddPackageToVolumeAndOptionalPackagesAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,externalPackageUris,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_StagePackageToVolumeAndOptionalPackagesAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,externalPackageUris,deploymentOperation) \
    ( (This)->lpVtbl->StagePackageToVolumeAndOptionalPackagesAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,externalPackageUris,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_RegisterPackageByFamilyNameAndOptionalPackagesAsync(This,mainPackageFamilyName,dependencyPackageFamilyNames,deploymentOptions,appDataVolume,optionalPackageFamilyNames,deploymentOperation) \
    ( (This)->lpVtbl->RegisterPackageByFamilyNameAndOptionalPackagesAsync(This,mainPackageFamilyName,dependencyPackageFamilyNames,deploymentOptions,appDataVolume,optionalPackageFamilyNames,deploymentOperation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_get_DebugSettings(This,value) \
    ( (This)->lpVtbl->get_DebugSettings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManager6
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManager6[] = L"Windows.Management.Deployment.IPackageManager6";
/* [object, uuid("0847E909-53CD-4E4F-832E-57D180F6E447"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProvisionPackageForAllUsersAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AddPackageByAppInstallerFileAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * appInstallerFileUri,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAddPackageByAppInstallerFileAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * appInstallerFileUri,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CAddPackageByAppInstallerOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPackageToVolumeAndRelatedSetAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StagePackageToVolumeAndRelatedSetAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * packageUrisToInstall,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAddPackageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * packageUri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * dependencyPackageUris,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CDeploymentOptions deploymentOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * targetVolume,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * relatedPackageUris,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CManagement__CDeployment__CDeploymentResult_Windows__CManagement__CDeployment__CDeploymentProgress * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_ProvisionPackageForAllUsersAsync(This,packageFamilyName,operation) \
    ( (This)->lpVtbl->ProvisionPackageForAllUsersAsync(This,packageFamilyName,operation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_AddPackageByAppInstallerFileAsync(This,appInstallerFileUri,options,targetVolume,operation) \
    ( (This)->lpVtbl->AddPackageByAppInstallerFileAsync(This,appInstallerFileUri,options,targetVolume,operation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_RequestAddPackageByAppInstallerFileAsync(This,appInstallerFileUri,options,targetVolume,operation) \
    ( (This)->lpVtbl->RequestAddPackageByAppInstallerFileAsync(This,appInstallerFileUri,options,targetVolume,operation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_AddPackageToVolumeAndRelatedSetAsync(This,packageUri,dependencyPackageUris,options,targetVolume,optionalPackageFamilyNames,packageUrisToInstall,relatedPackageUris,operation) \
    ( (This)->lpVtbl->AddPackageToVolumeAndRelatedSetAsync(This,packageUri,dependencyPackageUris,options,targetVolume,optionalPackageFamilyNames,packageUrisToInstall,relatedPackageUris,operation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_StagePackageToVolumeAndRelatedSetAsync(This,packageUri,dependencyPackageUris,options,targetVolume,optionalPackageFamilyNames,packageUrisToInstall,relatedPackageUris,operation) \
    ( (This)->lpVtbl->StagePackageToVolumeAndRelatedSetAsync(This,packageUri,dependencyPackageUris,options,targetVolume,optionalPackageFamilyNames,packageUrisToInstall,relatedPackageUris,operation) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_RequestAddPackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,relatedPackageUris,operation) \
    ( (This)->lpVtbl->RequestAddPackageAsync(This,packageUri,dependencyPackageUris,deploymentOptions,targetVolume,optionalPackageFamilyNames,relatedPackageUris,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManager6_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Management.Deployment.IPackageManagerDebugSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageManagerDebugSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageManagerDebugSettings[] = L"Windows.Management.Deployment.IPackageManagerDebugSettings";
/* [object, uuid("1A611683-A988-4FCF-8F0F-CE175898E8EB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SetContentGroupStateAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
        /* [in] */__RPC__in HSTRING contentGroupName,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPackageContentGroupState state,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetContentGroupStateWithPercentageAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackage * package,
        /* [in] */__RPC__in HSTRING contentGroupName,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPackageContentGroupState state,
        /* [in] */DOUBLE completionPercentage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettingsVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_SetContentGroupStateAsync(This,package,contentGroupName,state,action) \
    ( (This)->lpVtbl->SetContentGroupStateAsync(This,package,contentGroupName,state,action) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_SetContentGroupStateWithPercentageAsync(This,package,contentGroupName,state,completionPercentage,action) \
    ( (This)->lpVtbl->SetContentGroupStateWithPercentageAsync(This,package,contentGroupName,state,completionPercentage,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageManagerDebugSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.Deployment.IPackageUserInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageUserInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageUserInformation[] = L"Windows.Management.Deployment.IPackageUserInformation";
/* [object, uuid("F6383423-FA09-4CBC-9055-15CA275E2E7E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserSecurityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallState )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CManagement_CDeployment_CPackageInstallState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformationVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_get_UserSecurityId(This,value) \
    ( (This)->lpVtbl->get_UserSecurityId(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_get_InstallState(This,value) \
    ( (This)->lpVtbl->get_InstallState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageUserInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageVolume[] = L"Windows.Management.Deployment.IPackageVolume";
/* [object, uuid("CF2672C3-1A40-4450-9739-2ACE2E898853"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOffline )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSystemVolume )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MountPoint )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageStorePath )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportsHardLinks )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackages )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByNamePublisherWithPackagesTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByPackageFamilyNameWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackageByPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityId )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisher )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdNamePublisherWithPackageTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__RPC__in HSTRING packagePublisher,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__x_ABI_CWindows_CManagement_CDeployment_CPackageTypes packageTypes,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindPackageByUserSecurityIdPackageFullName )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume * This,
        /* [in] */__RPC__in HSTRING userSecurityId,
        /* [in] */__RPC__in HSTRING packageFullName,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CPackage * * packageCollection
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolumeVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_get_IsOffline(This,value) \
    ( (This)->lpVtbl->get_IsOffline(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_get_IsSystemVolume(This,value) \
    ( (This)->lpVtbl->get_IsSystemVolume(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_get_MountPoint(This,value) \
    ( (This)->lpVtbl->get_MountPoint(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_get_PackageStorePath(This,value) \
    ( (This)->lpVtbl->get_PackageStorePath(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_get_SupportsHardLinks(This,value) \
    ( (This)->lpVtbl->get_SupportsHardLinks(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackages(This,packageCollection) \
    ( (This)->lpVtbl->FindPackages(This,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByNamePublisher(This,packageName,packagePublisher,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByNamePublisher(This,packageName,packagePublisher,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByPackageFamilyName(This,packageFamilyName,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByPackageFamilyName(This,packageFamilyName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesWithPackageTypes(This,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesWithPackageTypes(This,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByNamePublisherWithPackagesTypes(This,packageTypes,packageName,packagePublisher,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByNamePublisherWithPackagesTypes(This,packageTypes,packageName,packagePublisher,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByPackageFamilyNameWithPackageTypes(This,packageTypes,packageFamilyName,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByPackageFamilyNameWithPackageTypes(This,packageTypes,packageFamilyName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackageByPackageFullName(This,packageFullName,packageCollection) \
    ( (This)->lpVtbl->FindPackageByPackageFullName(This,packageFullName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByUserSecurityId(This,userSecurityId,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityId(This,userSecurityId,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByUserSecurityIdNamePublisher(This,userSecurityId,packageName,packagePublisher,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisher(This,userSecurityId,packageName,packagePublisher,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByUserSecurityIdPackageFamilyName(This,userSecurityId,packageFamilyName,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyName(This,userSecurityId,packageFamilyName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByUserSecurityIdWithPackageTypes(This,userSecurityId,packageTypes,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdWithPackageTypes(This,userSecurityId,packageTypes,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(This,userSecurityId,packageTypes,packageName,packagePublisher,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(This,userSecurityId,packageTypes,packageName,packagePublisher,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(This,userSecurityId,packageTypes,packageFamilyName,packageCollection) \
    ( (This)->lpVtbl->FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(This,userSecurityId,packageTypes,packageFamilyName,packageCollection) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_FindPackageByUserSecurityIdPackageFullName(This,userSecurityId,packageFullName,packageCollection) \
    ( (This)->lpVtbl->FindPackageByUserSecurityIdPackageFullName(This,userSecurityId,packageFullName,packageCollection) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.IPackageVolume2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.PackageVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_IPackageVolume2[] = L"Windows.Management.Deployment.IPackageVolume2";
/* [object, uuid("46ABCF2E-9DD4-47A2-AB8C-C6408349BCD8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsFullTrustPackageSupported )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAppxInstallSupported )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAvailableSpaceAsync )(
        __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT64 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2Vtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_get_IsFullTrustPackageSupported(This,value) \
    ( (This)->lpVtbl->get_IsFullTrustPackageSupported(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_get_IsAppxInstallSupported(This,value) \
    ( (This)->lpVtbl->get_IsAppxInstallSupported(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_GetAvailableSpaceAsync(This,operation) \
    ( (This)->lpVtbl->GetAvailableSpaceAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CIPackageVolume2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Management.Deployment.DeploymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IDeploymentResult ** Default Interface **
 *    Windows.Management.Deployment.IDeploymentResult2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_DeploymentResult_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_DeploymentResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_DeploymentResult[] = L"Windows.Management.Deployment.DeploymentResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.PackageManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageManager ** Default Interface **
 *    Windows.Management.Deployment.IPackageManager2
 *    Windows.Management.Deployment.IPackageManager3
 *    Windows.Management.Deployment.IPackageManager4
 *    Windows.Management.Deployment.IPackageManager5
 *    Windows.Management.Deployment.IPackageManager6
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageManager_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageManager[] = L"Windows.Management.Deployment.PackageManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.PackageManagerDebugSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageManagerDebugSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageManagerDebugSettings_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageManagerDebugSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageManagerDebugSettings[] = L"Windows.Management.Deployment.PackageManagerDebugSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.Deployment.PackageUserInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageUserInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageUserInformation_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageUserInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageUserInformation[] = L"Windows.Management.Deployment.PackageUserInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.PackageVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.IPackageVolume ** Default Interface **
 *    Windows.Management.Deployment.IPackageVolume2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_PackageVolume_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_PackageVolume_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_PackageVolume[] = L"Windows.Management.Deployment.PackageVolume";
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
#endif // __windows2Emanagement2Edeployment_p_h__

#endif // __windows2Emanagement2Edeployment_h__
