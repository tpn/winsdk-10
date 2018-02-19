/* Header file automatically generated from windows.applicationmodel.resources.core.idl */
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
#ifndef __windows2Eapplicationmodel2Eresources2Ecore_h__
#define __windows2Eapplicationmodel2Eresources2Ecore_h__
#ifndef __windows2Eapplicationmodel2Eresources2Ecore_p_h__
#define __windows2Eapplicationmodel2Eresources2Ecore_p_h__


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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface INamedResource;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource ABI::Windows::ApplicationModel::Resources::Core::INamedResource

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceCandidate;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceCandidate2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate2

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceContext;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext ABI::Windows::ApplicationModel::Resources::Core::IResourceContext

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceContextStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics ABI::Windows::ApplicationModel::Resources::Core::IResourceContextStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceContextStatics2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 ABI::Windows::ApplicationModel::Resources::Core::IResourceContextStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceContextStatics3;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 ABI::Windows::ApplicationModel::Resources::Core::IResourceContextStatics3

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceManager;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager ABI::Windows::ApplicationModel::Resources::Core::IResourceManager

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceManager2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 ABI::Windows::ApplicationModel::Resources::Core::IResourceManager2

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceManagerStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics ABI::Windows::ApplicationModel::Resources::Core::IResourceManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceMap;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap ABI::Windows::ApplicationModel::Resources::Core::IResourceMap

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    interface IResourceQualifier;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class NamedResource;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0c5a605f-a7f1-5030-a179-9fd363caf3b5"))
IIterator<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*, ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Resources.Core.NamedResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e80d3d9d-96c9-579e-8e42-d550700de925"))
IIterable<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*, ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Resources.Core.NamedResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceCandidate;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e151bd8c-a286-57ab-bcea-79b7bc2687a1"))
IIterator<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*, ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Resources.Core.ResourceCandidate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*> __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t;
#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d89c9498-8869-57f8-a883-9c2dfeecb6c6"))
IIterable<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*, ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Resources.Core.ResourceCandidate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*> __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t;
#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bd4b0143-3a22-5ee2-92ed-7bc3c129e52b"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*, ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Resources.Core.NamedResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7fdcc3d7-e13e-5f76-afc6-0769c4086399"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Resources.Core.NamedResource>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bf16482e-80ed-51f0-b9c9-3a804e2d6403"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Resources.Core.NamedResource>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4825d6c4-835a-5da1-9bdd-12e97e16fb7a"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*, ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Resources.Core.NamedResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceMap;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3dedcae6-d048-5eaa-afa2-fb4a7970ef68"))
IIterator<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*, ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Resources.Core.ResourceMap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bbe1154-19aa-53e7-9d6e-dc7d358580f4"))
IIterable<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*, ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Resources.Core.ResourceMap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceQualifier;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fedb74db-e74f-597a-b9bf-704b0dadca38"))
IIterator<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*, ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Resources.Core.ResourceQualifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*> __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t;
#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>
//#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2eee68e2-687c-5f7a-a14e-588c4d3089e1"))
IIterable<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*, ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Resources.Core.ResourceQualifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*> __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t;
#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>
//#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("159782ba-798d-5ae6-85c7-c7bb551aae61"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*, ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Resources.Core.ResourceMap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("28cf8d5e-69f6-59f6-9865-bca97d59f74f"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Resources.Core.ResourceMap>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9895431e-a817-5509-91e6-d90a933ed830"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Resources.Core.ResourceMap>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d4349ade-93b1-5325-ba5c-05f35eeffc55"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*, ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Resources.Core.ResourceMap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("66c9da16-d345-5bdb-b953-d86dd9ea8409"))
IVectorView<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*, ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Core.NamedResource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Resources::Core::NamedResource*> __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t;
#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::INamedResource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e28e92f0-9ffb-5ea7-9fc9-a73bda471886"))
IVectorView<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*, ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Core.ResourceCandidate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Resources::Core::ResourceCandidate*> __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t;
#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f2656ef5-fc27-5c24-a8c2-1697e0be736f"))
IVectorView<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*, ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Core.ResourceMap>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Resources::Core::ResourceMap*> __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t;
#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::IResourceMap*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b82c58dc-1cc0-53f0-b0f4-66ef39a81cd6"))
IVectorView<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*, ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Resources.Core.ResourceQualifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifier*> __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t;
#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>
//#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Resources::Core::IResourceQualifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e521c894-2c26-5946-9e61-2b5e188d01ed"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFile*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e52f8ce-aced-5a42-95b4-f674dd84885e"))
IAsyncOperation<ABI::Windows::Storage::StorageFile*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::StorageFile*> __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFile*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("398c4183-793d-5b00-819b-4aef92485e94"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("430ecece-1418-5d19-81b2-5ddb381603cc"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMap_2_HSTRING_HSTRING_USE
#define DEF___FIMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c"))
IMap<HSTRING,HSTRING> : IMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,HSTRING> __FIMap_2_HSTRING_HSTRING_t;
#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
//#define __FIMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_HSTRING_USE */




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




#ifndef DEF___FMapChangedEventHandler_2_HSTRING_HSTRING_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2663f37-2e1b-500c-ad68-c3ed7a8f74c8"))
MapChangedEventHandler<HSTRING,HSTRING> : MapChangedEventHandler_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,HSTRING> __FMapChangedEventHandler_2_HSTRING_HSTRING_t;
#define __FMapChangedEventHandler_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,HSTRING>
//#define __FMapChangedEventHandler_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIObservableMap_2_HSTRING_HSTRING_USE
#define DEF___FIObservableMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1e036276-2f60-55f6-b7f3-f86079e6900b"))
IObservableMap<HSTRING,HSTRING> : IObservableMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,HSTRING> __FIObservableMap_2_HSTRING_HSTRING_t;
#define __FIObservableMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,HSTRING>
//#define __FIObservableMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_HSTRING_USE */




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




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CIStorageFile_USE
#define DEF___FIIterator_1_Windows__CStorage__CIStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("314d2318-74ee-535c-b361-2144dbc573a0"))
IIterator<ABI::Windows::Storage::IStorageFile*> : IIterator_impl<ABI::Windows::Storage::IStorageFile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.IStorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::IStorageFile*> __FIIterator_1_Windows__CStorage__CIStorageFile_t;
#define __FIIterator_1_Windows__CStorage__CIStorageFile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CIStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CIStorageFile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterator_1_Windows__CStorage__CIStorageFile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CIStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CIStorageFile_USE
#define DEF___FIIterable_1_Windows__CStorage__CIStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("76d43c7e-fd09-5908-a2b9-a49b4848294b"))
IIterable<ABI::Windows::Storage::IStorageFile*> : IIterable_impl<ABI::Windows::Storage::IStorageFile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.IStorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::IStorageFile*> __FIIterable_1_Windows__CStorage__CIStorageFile_t;
#define __FIIterable_1_Windows__CStorage__CIStorageFile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CIStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CIStorageFile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterable_1_Windows__CStorage__CIStorageFile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CIStorageFile_USE */


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












namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    
                    typedef enum ResourceQualifierPersistence : int ResourceQualifierPersistence;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    
                    typedef struct ResourceLayoutInfo ResourceLayoutInfo;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */















namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceCandidateVectorView;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceContext;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceContextLanguagesVectorView;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceManager;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceMapIterator;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceMapMapView;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceMapMapViewIterator;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceQualifierMapView;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceQualifierObservableMap;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    class ResourceQualifierVectorView;
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */












/*
 *
 * Struct Windows.ApplicationModel.Resources.Core.ResourceQualifierPersistence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum ResourceQualifierPersistence : int
                    {
                        ResourceQualifierPersistence_None = 0,
                        ResourceQualifierPersistence_LocalMachine = 1,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Resources.Core.ResourceLayoutInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [contract] */
                    struct ResourceLayoutInfo
                    {
                        UINT32 MajorVersion;
                        UINT32 MinorVersion;
                        UINT32 ResourceSubtreeCount;
                        UINT32 NamedResourceCount;
                        INT32 Checksum;
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.INamedResource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.NamedResource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_INamedResource[] = L"Windows.ApplicationModel.Resources.Core.INamedResource";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("1C98C219-0B13-4240-89A5-D495DC189A00"), exclusiveto, contract] */
                    MIDL_INTERFACE("1C98C219-0B13-4240-89A5-D495DC189A00")
                    INamedResource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * uri
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Candidates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("Resolve may be altered or unavailable for releases after Windows 8.1. Instead, use Resolve(ResourceContext).")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE Resolve(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ResolveForContext(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * resourceContext,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("ResolveAll may be altered or unavailable for releases after Windows 8.1. Instead, use ResolveAll(ResourceContext).")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE ResolveAll(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ResolveAllForContext(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * resourceContext,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * * instances
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INamedResource=_uuidof(INamedResource);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceCandidate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceCandidate[] = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("AF5207D9-C433-4764-B3FD-8FA6BFBCBADC"), exclusiveto, contract] */
                    MIDL_INTERFACE("AF5207D9-C433-4764-B3FD-8FA6BFBCBADC")
                    IResourceCandidate : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Qualifiers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMatch(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMatchAsDefault(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDefault(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueAsString(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetValueAsFileAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetQualifierValue(
                            /* [in] */__RPC__in HSTRING qualifierName,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceCandidate=_uuidof(IResourceCandidate);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceCandidate2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceCandidate2[] = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("69E5B468-F6FC-4013-AAA2-D53F1757D3B5"), exclusiveto, contract] */
                    MIDL_INTERFACE("69E5B468-F6FC-4013-AAA2-D53F1757D3B5")
                    IResourceCandidate2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetValueAsStreamAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceCandidate2=_uuidof(IResourceCandidate2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContext[] = L"Windows.ApplicationModel.Resources.Core.IResourceContext";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("2FA22F4B-707E-4B27-AD0D-D0D8CD468FD2"), exclusiveto, contract] */
                    MIDL_INTERFACE("2FA22F4B-707E-4B27-AD0D-D0D8CD468FD2")
                    IResourceContext : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualifierValues(
                            /* [retval, out] */__RPC__deref_out_opt __FIObservableMap_2_HSTRING_HSTRING * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE Reset(void) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ResetQualifierValues(
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * qualifierNames
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OverrideToMatch(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Clone(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * * clone
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Languages(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Languages(
                            /* [in] */__RPC__in_opt __FIVectorView_1_HSTRING * languages
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceContext=_uuidof(IResourceContext);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContextStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContextStatics[] = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("98BE9D6C-6338-4B31-99DF-B2B442F17149"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("98BE9D6C-6338-4B31-99DF-B2B442F17149")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    IResourceContextStatics : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateMatchingContext(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * result,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceContextStatics=_uuidof(IResourceContextStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContextStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2[] = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("41F752EF-12AF-41B9-AB36-B1EB4B512460"), exclusiveto, contract] */
                    MIDL_INTERFACE("41F752EF-12AF-41B9-AB36-B1EB4B512460")
                    IResourceContextStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetGlobalQualifierValue(
                            /* [in] */__RPC__in HSTRING key,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ResetGlobalQualifierValues(void) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ResetGlobalQualifierValuesForSpecifiedQualifiers(
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * qualifierNames
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetForViewIndependentUse(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * * loader
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceContextStatics2=_uuidof(IResourceContextStatics2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContextStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3[] = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("20CF492C-AF0F-450B-9DA6-106DD0C29A39"), exclusiveto, contract] */
                    MIDL_INTERFACE("20CF492C-AF0F-450B-9DA6-106DD0C29A39")
                    IResourceContextStatics3 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetGlobalQualifierValueWithPersistence(
                            /* [in] */__RPC__in HSTRING key,
                            /* [in] */__RPC__in HSTRING value,
                            /* [in] */ABI::Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence persistence
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceContextStatics3=_uuidof(IResourceContextStatics3);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceManager[] = L"Windows.ApplicationModel.Resources.Core.IResourceManager";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("F744D97B-9988-44FB-ABD6-5378844CFA8B"), exclusiveto, contract] */
                    MIDL_INTERFACE("F744D97B-9988-44FB-ABD6-5378844CFA8B")
                    IResourceManager : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MainResourceMap(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceMap * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllResourceMaps(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * * maps
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("DefaultContext may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use ResourceContext.GetForCurrentView.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_DefaultContext(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadPriFiles(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageFile * files
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UnloadPriFiles(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageFile * files
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceManager=_uuidof(IResourceManager);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceManager2[] = L"Windows.ApplicationModel.Resources.Core.IResourceManager2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("9D66FE6C-A4D7-4C23-9E85-675F304C252D"), exclusiveto, contract] */
                    MIDL_INTERFACE("9D66FE6C-A4D7-4C23-9E85-675F304C252D")
                    IResourceManager2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetAllNamedResourcesForPackage(
                            /* [in] */__RPC__in HSTRING packageName,
                            /* [in] */ABI::Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo resourceLayoutInfo,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * * table
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAllSubtreesForPackage(
                            /* [in] */__RPC__in HSTRING packageName,
                            /* [in] */ABI::Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo resourceLayoutInfo,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * * table
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceManager2=_uuidof(IResourceManager2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics[] = L"Windows.ApplicationModel.Resources.Core.IResourceManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("1CC0FDFC-69EE-4E43-9901-47F12687BAF7"), exclusiveto, contract] */
                    MIDL_INTERFACE("1CC0FDFC-69EE-4E43-9901-47F12687BAF7")
                    IResourceManagerStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceManager * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsResourceReference(
                            /* [in] */__RPC__in HSTRING resourceReference,
                            /* [retval, out] */__RPC__out boolean * isReference
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceManagerStatics=_uuidof(IResourceManagerStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceMap
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMapView_2_HSTRING,Windows.ApplicationModel.Resources.Core.NamedResource
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceMap[] = L"Windows.ApplicationModel.Resources.Core.IResourceMap";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("72284824-DB8C-42F8-B08C-53FF357DAD82"), exclusiveto, contract] */
                    MIDL_INTERFACE("72284824-DB8C-42F8-B08C-53FF357DAD82")
                    IResourceMap : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * uri
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        DEPRECATED("GetValue(string) may be altered or unavailable for releases after Windows 8.1. Instead, use GetValue(string, ResourceContext).")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE GetValue(
                            /* [in] */__RPC__in HSTRING resource,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetValueForContext(
                            /* [in] */__RPC__in HSTRING resource,
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceContext * context,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceCandidate * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSubtree(
                            /* [in] */__RPC__in HSTRING reference,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::Core::IResourceMap * * map
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceMap=_uuidof(IResourceMap);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceQualifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceQualifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceQualifier[] = L"Windows.ApplicationModel.Resources.Core.IResourceQualifier";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                namespace Core {
                    /* [object, uuid("785DA5B2-4AFD-4376-A888-C5F9A6B7A05C"), exclusiveto, contract] */
                    MIDL_INTERFACE("785DA5B2-4AFD-4376-A888-C5F9A6B7A05C")
                    IResourceQualifier : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualifierName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualifierValue(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDefault(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMatch(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Score(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IResourceQualifier=_uuidof(IResourceQualifier);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Resources */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.NamedResource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.INamedResource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_NamedResource_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_NamedResource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_NamedResource[] = L"Windows.ApplicationModel.Resources.Core.NamedResource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceCandidate ** Default Interface **
 *    Windows.ApplicationModel.Resources.Core.IResourceCandidate2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidate_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceCandidate[] = L"Windows.ApplicationModel.Resources.Core.ResourceCandidate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.ApplicationModel.Resources.Core.ResourceCandidate ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidateVectorView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidateVectorView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceCandidateVectorView[] = L"Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceContextStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceContextStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceContextStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContext_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceContext[] = L"Windows.ApplicationModel.Resources.Core.ResourceContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_HSTRING ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContextLanguagesVectorView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContextLanguagesVectorView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceContextLanguagesVectorView[] = L"Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceManager ** Default Interface **
 *    Windows.ApplicationModel.Resources.Core.IResourceManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceManager[] = L"Windows.ApplicationModel.Resources.Core.ResourceManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceMap ** Default Interface **
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,Windows.ApplicationModel.Resources.Core.NamedResource
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMap_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMap[] = L"Windows.ApplicationModel.Resources.Core.ResourceMap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMapIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapIterator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMapIterator[] = L"Windows.ApplicationModel.Resources.Core.ResourceMapIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMapMapView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,Windows.ApplicationModel.Resources.Core.ResourceMap ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMapMapView[] = L"Windows.ApplicationModel.Resources.Core.ResourceMapMapView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapViewIterator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapViewIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMapMapViewIterator[] = L"Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceQualifier ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifier_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifier[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,HSTRING ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierMapView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierMapView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifierMapView[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IObservableMap_2_HSTRING,HSTRING ** Default Interface **
 *    Windows.Foundation.Collections.IMap_2_HSTRING,HSTRING
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierObservableMap_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierObservableMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifierObservableMap[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.ApplicationModel.Resources.Core.ResourceQualifier ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.ApplicationModel.Resources.Core.ResourceQualifier
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierVectorView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierVectorView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifierVectorView[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CNamedResource **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate;

typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceMap **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier;

typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMapVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt HSTRING *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_HSTRING_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_HSTRING_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__


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


#if !defined(____FMapChangedEventHandler_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_HSTRING __FMapChangedEventHandler_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_HSTRING;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_HSTRING __FIObservableMap_2_HSTRING_HSTRING;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_HSTRING * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_HSTRING *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_HSTRINGVtbl;

interface __FMapChangedEventHandler_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_HSTRING_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIObservableMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_HSTRING __FIObservableMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_HSTRING;

typedef struct __FIObservableMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_HSTRING *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_HSTRING * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_HSTRINGVtbl;

interface __FIObservableMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_HSTRING_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_HSTRING_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__


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



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CIStorageFile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CIStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CIStorageFile __FIIterator_1_Windows__CStorage__CIStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageFile;

typedef struct __FIIterator_1_Windows__CStorage__CIStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageFile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageFileVtbl;

interface __FIIterator_1_Windows__CStorage__CIStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CIStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CIStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CIStorageFile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageFile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CIStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CIStorageFile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CIStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CIStorageFile __FIIterable_1_Windows__CStorage__CIStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageFile;

typedef  struct __FIIterable_1_Windows__CStorage__CIStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageFile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageFileVtbl;

interface __FIIterable_1_Windows__CStorage__CIStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CIStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CIStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CIStorageFile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CIStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__













typedef enum __x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceQualifierPersistence __x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceQualifierPersistence;


typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceLayoutInfo __x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceLayoutInfo;





































/*
 *
 * Struct Windows.ApplicationModel.Resources.Core.ResourceQualifierPersistence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceQualifierPersistence
{
    ResourceQualifierPersistence_None = 0,
    ResourceQualifierPersistence_LocalMachine = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Resources.Core.ResourceLayoutInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceLayoutInfo
{
    UINT32 MajorVersion;
    UINT32 MinorVersion;
    UINT32 ResourceSubtreeCount;
    UINT32 NamedResourceCount;
    INT32 Checksum;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.INamedResource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.NamedResource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_INamedResource[] = L"Windows.ApplicationModel.Resources.Core.INamedResource";
/* [object, uuid("1C98C219-0B13-4240-89A5-D495DC189A00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * uri
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Candidates )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Resolve may be altered or unavailable for releases after Windows 8.1. Instead, use Resolve(ResourceContext).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *Resolve )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ResolveForContext )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * resourceContext,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("ResolveAll may be altered or unavailable for releases after Windows 8.1. Instead, use ResolveAll(ResourceContext).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *ResolveAll )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ResolveAllForContext )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * resourceContext,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceCandidate * * instances
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResourceVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_get_Uri(This,uri) \
    ( (This)->lpVtbl->get_Uri(This,uri) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_get_Candidates(This,value) \
    ( (This)->lpVtbl->get_Candidates(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Resolve may be altered or unavailable for releases after Windows 8.1. Instead, use Resolve(ResourceContext).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_Resolve(This,result) \
    ( (This)->lpVtbl->Resolve(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_ResolveForContext(This,resourceContext,result) \
    ( (This)->lpVtbl->ResolveForContext(This,resourceContext,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ResolveAll may be altered or unavailable for releases after Windows 8.1. Instead, use ResolveAll(ResourceContext).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_ResolveAll(This,result) \
    ( (This)->lpVtbl->ResolveAll(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_ResolveAllForContext(This,resourceContext,instances) \
    ( (This)->lpVtbl->ResolveAllForContext(This,resourceContext,instances) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CINamedResource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceCandidate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceCandidate[] = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate";
/* [object, uuid("AF5207D9-C433-4764-B3FD-8FA6BFBCBADC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Qualifiers )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMatch )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMatchAsDefault )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDefault )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueAsString )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAsFileAsync )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetQualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * This,
        /* [in] */__RPC__in HSTRING qualifierName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidateVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_get_Qualifiers(This,value) \
    ( (This)->lpVtbl->get_Qualifiers(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_get_IsMatch(This,value) \
    ( (This)->lpVtbl->get_IsMatch(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_get_IsMatchAsDefault(This,value) \
    ( (This)->lpVtbl->get_IsMatchAsDefault(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_get_IsDefault(This,value) \
    ( (This)->lpVtbl->get_IsDefault(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_get_ValueAsString(This,result) \
    ( (This)->lpVtbl->get_ValueAsString(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_GetValueAsFileAsync(This,operation) \
    ( (This)->lpVtbl->GetValueAsFileAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_GetQualifierValue(This,qualifierName,value) \
    ( (This)->lpVtbl->GetQualifierValue(This,qualifierName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceCandidate2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceCandidate2[] = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate2";
/* [object, uuid("69E5B468-F6FC-4013-AAA2-D53F1757D3B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetValueAsStreamAsync )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_GetValueAsStreamAsync(This,operation) \
    ( (This)->lpVtbl->GetValueAsStreamAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContext[] = L"Windows.ApplicationModel.Resources.Core.IResourceContext";
/* [object, uuid("2FA22F4B-707E-4B27-AD0D-D0D8CD468FD2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualifierValues )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
        /* [retval, out] */__RPC__deref_out_opt __FIObservableMap_2_HSTRING_HSTRING * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ResetQualifierValues )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * qualifierNames
        );
    HRESULT ( STDMETHODCALLTYPE *OverrideToMatch )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * result
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * * clone
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Languages )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_HSTRING * languages
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_get_QualifierValues(This,value) \
    ( (This)->lpVtbl->get_QualifierValues(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_Reset(This) \
    ( (This)->lpVtbl->Reset(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_ResetQualifierValues(This,qualifierNames) \
    ( (This)->lpVtbl->ResetQualifierValues(This,qualifierNames) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_OverrideToMatch(This,result) \
    ( (This)->lpVtbl->OverrideToMatch(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_Clone(This,clone) \
    ( (This)->lpVtbl->Clone(This,clone) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_get_Languages(This,value) \
    ( (This)->lpVtbl->get_Languages(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_put_Languages(This,languages) \
    ( (This)->lpVtbl->put_Languages(This,languages) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContextStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContextStatics[] = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics";
/* [object, uuid("98BE9D6C-6338-4B31-99DF-B2B442F17149"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateMatchingContext )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CResources__CCore__CResourceQualifier * result,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_CreateMatchingContext(This,result,value) \
    ( (This)->lpVtbl->CreateMatchingContext(This,result,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContextStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2[] = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics2";
/* [object, uuid("41F752EF-12AF-41B9-AB36-B1EB4B512460"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetGlobalQualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
        /* [in] */__RPC__in HSTRING key,
        /* [in] */__RPC__in HSTRING value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ResetGlobalQualifierValues )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ResetGlobalQualifierValuesForSpecifiedQualifiers )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * qualifierNames
        );
    HRESULT ( STDMETHODCALLTYPE *GetForViewIndependentUse )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * * loader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_GetForCurrentView(This,value) \
    ( (This)->lpVtbl->GetForCurrentView(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_SetGlobalQualifierValue(This,key,value) \
    ( (This)->lpVtbl->SetGlobalQualifierValue(This,key,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_ResetGlobalQualifierValues(This) \
    ( (This)->lpVtbl->ResetGlobalQualifierValues(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_ResetGlobalQualifierValuesForSpecifiedQualifiers(This,qualifierNames) \
    ( (This)->lpVtbl->ResetGlobalQualifierValuesForSpecifiedQualifiers(This,qualifierNames) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_GetForViewIndependentUse(This,loader) \
    ( (This)->lpVtbl->GetForViewIndependentUse(This,loader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceContextStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3[] = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics3";
/* [object, uuid("20CF492C-AF0F-450B-9DA6-106DD0C29A39"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SetGlobalQualifierValueWithPersistence )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3 * This,
        /* [in] */__RPC__in HSTRING key,
        /* [in] */__RPC__in HSTRING value,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceQualifierPersistence persistence
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_SetGlobalQualifierValueWithPersistence(This,key,value,persistence) \
    ( (This)->lpVtbl->SetGlobalQualifierValueWithPersistence(This,key,value,persistence) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContextStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceManager[] = L"Windows.ApplicationModel.Resources.Core.IResourceManager";
/* [object, uuid("F744D97B-9988-44FB-ABD6-5378844CFA8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MainResourceMap )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllResourceMaps )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap * * maps
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("DefaultContext may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use ResourceContext.GetForCurrentView.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_DefaultContext )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadPriFiles )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageFile * files
        );
    HRESULT ( STDMETHODCALLTYPE *UnloadPriFiles )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageFile * files
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_get_MainResourceMap(This,value) \
    ( (This)->lpVtbl->get_MainResourceMap(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_get_AllResourceMaps(This,maps) \
    ( (This)->lpVtbl->get_AllResourceMaps(This,maps) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DefaultContext may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use ResourceContext.GetForCurrentView.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_get_DefaultContext(This,value) \
    ( (This)->lpVtbl->get_DefaultContext(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_LoadPriFiles(This,files) \
    ( (This)->lpVtbl->LoadPriFiles(This,files) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_UnloadPriFiles(This,files) \
    ( (This)->lpVtbl->UnloadPriFiles(This,files) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceManager2[] = L"Windows.ApplicationModel.Resources.Core.IResourceManager2";
/* [object, uuid("9D66FE6C-A4D7-4C23-9E85-675F304C252D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAllNamedResourcesForPackage )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceLayoutInfo resourceLayoutInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CNamedResource * * table
        );
    HRESULT ( STDMETHODCALLTYPE *GetAllSubtreesForPackage )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2 * This,
        /* [in] */__RPC__in HSTRING packageName,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CResources_CCore_CResourceLayoutInfo resourceLayoutInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CCore__CResourceMap * * table
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_GetAllNamedResourcesForPackage(This,packageName,resourceLayoutInfo,table) \
    ( (This)->lpVtbl->GetAllNamedResourcesForPackage(This,packageName,resourceLayoutInfo,table) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_GetAllSubtreesForPackage(This,packageName,resourceLayoutInfo,table) \
    ( (This)->lpVtbl->GetAllSubtreesForPackage(This,packageName,resourceLayoutInfo,table) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics[] = L"Windows.ApplicationModel.Resources.Core.IResourceManagerStatics";
/* [object, uuid("1CC0FDFC-69EE-4E43-9901-47F12687BAF7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManager * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsResourceReference )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics * This,
        /* [in] */__RPC__in HSTRING resourceReference,
        /* [retval, out] */__RPC__out boolean * isReference
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_IsResourceReference(This,resourceReference,isReference) \
    ( (This)->lpVtbl->IsResourceReference(This,resourceReference,isReference) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceMap
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMapView_2_HSTRING,Windows.ApplicationModel.Resources.Core.NamedResource
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceMap[] = L"Windows.ApplicationModel.Resources.Core.IResourceMap";
/* [object, uuid("72284824-DB8C-42F8-B08C-53FF357DAD82"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * uri
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetValue(string) may be altered or unavailable for releases after Windows 8.1. Instead, use GetValue(string, ResourceContext).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *GetValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
        /* [in] */__RPC__in HSTRING resource,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetValueForContext )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
        /* [in] */__RPC__in HSTRING resource,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceContext * context,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceCandidate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSubtree )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * This,
        /* [in] */__RPC__in HSTRING reference,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap * * map
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMapVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_get_Uri(This,uri) \
    ( (This)->lpVtbl->get_Uri(This,uri) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetValue(string) may be altered or unavailable for releases after Windows 8.1. Instead, use GetValue(string, ResourceContext).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_GetValue(This,resource,value) \
    ( (This)->lpVtbl->GetValue(This,resource,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_GetValueForContext(This,resource,context,value) \
    ( (This)->lpVtbl->GetValueForContext(This,resource,context,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_GetSubtree(This,reference,map) \
    ( (This)->lpVtbl->GetSubtree(This,reference,map) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceMap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.Core.IResourceQualifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.Core.ResourceQualifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Core_IResourceQualifier[] = L"Windows.ApplicationModel.Resources.Core.IResourceQualifier";
/* [object, uuid("785DA5B2-4AFD-4376-A888-C5F9A6B7A05C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualifierName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDefault )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMatch )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Score )(
        __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifierVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_get_QualifierName(This,value) \
    ( (This)->lpVtbl->get_QualifierName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_get_QualifierValue(This,value) \
    ( (This)->lpVtbl->get_QualifierValue(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_get_IsDefault(This,value) \
    ( (This)->lpVtbl->get_IsDefault(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_get_IsMatch(This,value) \
    ( (This)->lpVtbl->get_IsMatch(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_get_Score(This,value) \
    ( (This)->lpVtbl->get_Score(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CCore_CIResourceQualifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.NamedResource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.INamedResource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_NamedResource_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_NamedResource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_NamedResource[] = L"Windows.ApplicationModel.Resources.Core.NamedResource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceCandidate ** Default Interface **
 *    Windows.ApplicationModel.Resources.Core.IResourceCandidate2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidate_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceCandidate[] = L"Windows.ApplicationModel.Resources.Core.ResourceCandidate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.ApplicationModel.Resources.Core.ResourceCandidate ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.ApplicationModel.Resources.Core.ResourceCandidate
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidateVectorView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceCandidateVectorView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceCandidateVectorView[] = L"Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceContextStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceContextStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceContextStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContext_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceContext[] = L"Windows.ApplicationModel.Resources.Core.ResourceContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_HSTRING ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContextLanguagesVectorView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceContextLanguagesVectorView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceContextLanguagesVectorView[] = L"Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Resources.Core.IResourceManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceManager ** Default Interface **
 *    Windows.ApplicationModel.Resources.Core.IResourceManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceManager[] = L"Windows.ApplicationModel.Resources.Core.ResourceManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceMap ** Default Interface **
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,Windows.ApplicationModel.Resources.Core.NamedResource
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMap_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMap[] = L"Windows.ApplicationModel.Resources.Core.ResourceMap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMapIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CNamedResource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapIterator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMapIterator[] = L"Windows.ApplicationModel.Resources.Core.ResourceMapIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMapMapView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,Windows.ApplicationModel.Resources.Core.ResourceMap ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMapMapView[] = L"Windows.ApplicationModel.Resources.Core.ResourceMapMapView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CResources__CCore__CResourceMap ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapViewIterator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceMapMapViewIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceMapMapViewIterator[] = L"Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.Core.IResourceQualifier ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifier_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifier[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,HSTRING ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierMapView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierMapView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifierMapView[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IObservableMap_2_HSTRING,HSTRING ** Default Interface **
 *    Windows.Foundation.Collections.IMap_2_HSTRING,HSTRING
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierObservableMap_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierObservableMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifierObservableMap[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.ApplicationModel.Resources.Core.ResourceQualifier ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.ApplicationModel.Resources.Core.ResourceQualifier
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierVectorView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_Core_ResourceQualifierVectorView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceQualifierVectorView[] = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView";
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
#endif // __windows2Eapplicationmodel2Eresources2Ecore_p_h__

#endif // __windows2Eapplicationmodel2Eresources2Ecore_h__
