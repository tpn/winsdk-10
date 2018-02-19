/* Header file automatically generated from windows.applicationmodel.datatransfer.dragdrop.core.idl */
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
#ifndef __windows2Eapplicationmodel2Edatatransfer2Edragdrop2Ecore_h__
#define __windows2Eapplicationmodel2Edatatransfer2Edragdrop2Ecore_h__
#ifndef __windows2Eapplicationmodel2Edatatransfer2Edragdrop2Ecore_p_h__
#define __windows2Eapplicationmodel2Edatatransfer2Edragdrop2Ecore_p_h__


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
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.h"
#include "Windows.Graphics.Imaging.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragDropManager;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragDropManagerStatics;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragInfo;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragInfo2;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragOperation;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragOperation2;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDragUIOverride;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDropOperationTarget;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        interface ICoreDropOperationTargetRequestedEventArgs;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        class CoreDragDropManager;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        class CoreDropOperationTargetRequestedEventArgs;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a4c3b1c1-b8ad-58cb-acc0-8ef37eae4ed4"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager*,ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager*, ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs*, ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager, Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager*,ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager*,ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager*,ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                enum DataPackageOperation : unsigned int;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("add21d46-17df-5a43-a685-3262fce84643"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.DataTransfer.DataPackageOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8b98aea9-64f0-5672-b30e-dfd9c2e4f6fe"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.DataTransfer.DataPackageOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackage;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackage;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage ABI::Windows::ApplicationModel::DataTransfer::IDataPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                
                typedef enum DataPackageOperation : unsigned int DataPackageOperation;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackageView;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackageView;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    
                    typedef enum DragDropModifiers : unsigned int DragDropModifiers;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* DataTransfer */
    } /* DragDrop */} /* ABI */





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
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class SoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap ABI::Windows::Graphics::Imaging::ISoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        
                        typedef enum CoreDragUIContentMode : unsigned int CoreDragUIContentMode;
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        class CoreDragInfo;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        class CoreDragOperation;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        class CoreDragUIOverride;
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */















/*
 *
 * Struct Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIContentMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [v1_enum, flags, contract] */
                        enum CoreDragUIContentMode : unsigned int
                        {
                            CoreDragUIContentMode_Auto = 0,
                            CoreDragUIContentMode_Deferred = 0x1,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(CoreDragUIContentMode)
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("7D56D344-8464-4FAF-AA49-37EA6E2D7BD1"), exclusiveto, contract] */
                        MIDL_INTERFACE("7D56D344-8464-4FAF-AA49-37EA6E2D7BD1")
                        ICoreDragDropManager : IInspectable
                        {
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TargetRequested(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * value,
                                /* [retval, out] */__RPC__out EventRegistrationToken * returnValue
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TargetRequested(
                                /* [in] */EventRegistrationToken value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreConcurrentOperationsEnabled(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreConcurrentOperationsEnabled(
                                /* [in] */boolean value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragDropManager=_uuidof(ICoreDragDropManager);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("9542FDCA-DA12-4C1C-8D06-041DB29733C3"), exclusiveto, contract] */
                        MIDL_INTERFACE("9542FDCA-DA12-4C1C-8D06-041DB29733C3")
                        ICoreDragDropManagerStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragDropManagerStatics=_uuidof(ICoreDragDropManagerStatics);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("48353A8B-CB50-464E-9575-CD4E3A7AB028"), exclusiveto, contract] */
                        MIDL_INTERFACE("48353A8B-CB50-464E-9575-CD4E3A7AB028")
                        ICoreDragInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Modifiers(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragInfo=_uuidof(ICoreDragInfo);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("C54691E5-E6FB-4D74-B4B1-8A3C17F25E9E"), exclusiveto, contract] */
                        MIDL_INTERFACE("C54691E5-E6FB-4D74-B4B1-8A3C17F25E9E")
                        ICoreDragInfo2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowedOperations(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragInfo2=_uuidof(ICoreDragInfo2);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("CC06DE4F-6DB0-4E62-AB1B-A74A02DC6D85"), exclusiveto, contract] */
                        MIDL_INTERFACE("CC06DE4F-6DB0-4E62-AB1B-A74A02DC6D85")
                        ICoreDragOperation : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackage * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetPointerId(
                                /* [in] */UINT32 pointerId
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetDragUIContentFromSoftwareBitmap(
                                /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetDragUIContentFromSoftwareBitmapWithAnchorPoint(
                                /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap,
                                /* [in] */ABI::Windows::Foundation::Point anchorPoint
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DragUIContentMode(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DragUIContentMode(
                                /* [in] */ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE StartAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragOperation=_uuidof(ICoreDragOperation);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("824B1E2C-D99A-4FC3-8507-6C182F33B46A"), exclusiveto, contract] */
                        MIDL_INTERFACE("824B1E2C-D99A-4FC3-8507-6C182F33B46A")
                        ICoreDragOperation2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowedOperations(
                                /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowedOperations(
                                /* [in] */ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragOperation2=_uuidof(ICoreDragOperation2);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("89A85064-3389-4F4F-8897-7E8A3FFB3C93"), exclusiveto, contract] */
                        MIDL_INTERFACE("89A85064-3389-4F4F-8897-7E8A3FFB3C93")
                        ICoreDragUIOverride : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetContentFromSoftwareBitmap(
                                /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetContentFromSoftwareBitmapWithAnchorPoint(
                                /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap,
                                /* [in] */ABI::Windows::Foundation::Point anchorPoint
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContentVisible(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsContentVisible(
                                /* [in] */boolean value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Caption(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Caption(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCaptionVisible(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCaptionVisible(
                                /* [in] */boolean value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGlyphVisible(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsGlyphVisible(
                                /* [in] */boolean value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDragUIOverride=_uuidof(ICoreDragUIOverride);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("D9126196-4C5B-417D-BB37-76381DEF8DB4"), contract] */
                        MIDL_INTERFACE("D9126196-4C5B-417D-BB37-76381DEF8DB4")
                        ICoreDropOperationTarget : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE EnterAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo,
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride * dragUIOverride,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE OverAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo,
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride * dragUIOverride,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE LeaveAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE DropAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo * dragInfo,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDropOperationTarget=_uuidof(ICoreDropOperationTarget);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace DragDrop {
                    namespace Core {
                        /* [object, uuid("2ACA929A-5E28-4EA6-829E-29134E665D6D"), exclusiveto, contract] */
                        MIDL_INTERFACE("2ACA929A-5E28-4EA6-829E-29134E665D6D")
                        ICoreDropOperationTargetRequestedEventArgs : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE SetTarget(
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget * target
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreDropOperationTargetRequestedEventArgs=_uuidof(ICoreDropOperationTargetRequestedEventArgs);
                        
                    } /* Windows */
                } /* ApplicationModel */
            } /* DataTransfer */
        } /* DragDrop */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers;





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;




#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode;



























/*
 *
 * Struct Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIContentMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode
{
    CoreDragUIContentMode_Auto = 0,
    CoreDragUIContentMode_Deferred = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager";
/* [object, uuid("7D56D344-8464-4FAF-AA49-37EA6E2D7BD1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TargetRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDragDropManager_Windows__CApplicationModel__CDataTransfer__CDragDrop__CCore__CCoreDropOperationTargetRequestedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * returnValue
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TargetRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
        /* [in] */EventRegistrationToken value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreConcurrentOperationsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreConcurrentOperationsEnabled )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_add_TargetRequested(This,value,returnValue) \
    ( (This)->lpVtbl->add_TargetRequested(This,value,returnValue) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_remove_TargetRequested(This,value) \
    ( (This)->lpVtbl->remove_TargetRequested(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_get_AreConcurrentOperationsEnabled(This,value) \
    ( (This)->lpVtbl->get_AreConcurrentOperationsEnabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_put_AreConcurrentOperationsEnabled(This,value) \
    ( (This)->lpVtbl->put_AreConcurrentOperationsEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics";
/* [object, uuid("9542FDCA-DA12-4C1C-8D06-041DB29733C3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_GetForCurrentView(This,value) \
    ( (This)->lpVtbl->GetForCurrentView(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragDropManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo";
/* [object, uuid("48353A8B-CB50-464E-9575-CD4E3A7AB028"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_get_Modifiers(This,value) \
    ( (This)->lpVtbl->get_Modifiers(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2";
/* [object, uuid("C54691E5-E6FB-4D74-B4B1-8A3C17F25E9E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowedOperations )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_get_AllowedOperations(This,value) \
    ( (This)->lpVtbl->get_AllowedOperations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation";
/* [object, uuid("CC06DE4F-6DB0-4E62-AB1B-A74A02DC6D85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointerId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [in] */UINT32 pointerId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetDragUIContentFromSoftwareBitmap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetDragUIContentFromSoftwareBitmapWithAnchorPoint )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DragUIContentMode )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DragUIContentMode )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CCoreDragUIContentMode value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_SetPointerId(This,pointerId) \
    ( (This)->lpVtbl->SetPointerId(This,pointerId) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_SetDragUIContentFromSoftwareBitmap(This,softwareBitmap) \
    ( (This)->lpVtbl->SetDragUIContentFromSoftwareBitmap(This,softwareBitmap) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_SetDragUIContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) \
    ( (This)->lpVtbl->SetDragUIContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_get_DragUIContentMode(This,value) \
    ( (This)->lpVtbl->get_DragUIContentMode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_put_DragUIContentMode(This,value) \
    ( (This)->lpVtbl->put_DragUIContentMode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_StartAsync(This,value) \
    ( (This)->lpVtbl->StartAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2";
/* [object, uuid("824B1E2C-D99A-4FC3-8507-6C182F33B46A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowedOperations )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowedOperations )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_get_AllowedOperations(This,value) \
    ( (This)->lpVtbl->get_AllowedOperations(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_put_AllowedOperations(This,value) \
    ( (This)->lpVtbl->put_AllowedOperations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragOperation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride";
/* [object, uuid("89A85064-3389-4F4F-8897-7E8A3FFB3C93"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverrideVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetContentFromSoftwareBitmapWithAnchorPoint )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint anchorPoint
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContentVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsContentVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Caption )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCaptionVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCaptionVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGlyphVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsGlyphVisible )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverrideVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverrideVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_SetContentFromSoftwareBitmap(This,softwareBitmap) \
    ( (This)->lpVtbl->SetContentFromSoftwareBitmap(This,softwareBitmap) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_SetContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) \
    ( (This)->lpVtbl->SetContentFromSoftwareBitmapWithAnchorPoint(This,softwareBitmap,anchorPoint) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_get_IsContentVisible(This,value) \
    ( (This)->lpVtbl->get_IsContentVisible(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_put_IsContentVisible(This,value) \
    ( (This)->lpVtbl->put_IsContentVisible(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_get_Caption(This,value) \
    ( (This)->lpVtbl->get_Caption(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_put_Caption(This,value) \
    ( (This)->lpVtbl->put_Caption(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_get_IsCaptionVisible(This,value) \
    ( (This)->lpVtbl->get_IsCaptionVisible(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_put_IsCaptionVisible(This,value) \
    ( (This)->lpVtbl->put_IsCaptionVisible(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_get_IsGlyphVisible(This,value) \
    ( (This)->lpVtbl->get_IsGlyphVisible(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_put_IsGlyphVisible(This,value) \
    ( (This)->lpVtbl->put_IsGlyphVisible(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget";
/* [object, uuid("D9126196-4C5B-417D-BB37-76381DEF8DB4"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *EnterAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * dragUIOverride,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *OverAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragUIOverride * dragUIOverride,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *LeaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *DropAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDragInfo * dragInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_EnterAsync(This,dragInfo,dragUIOverride,returnValue) \
    ( (This)->lpVtbl->EnterAsync(This,dragInfo,dragUIOverride,returnValue) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_OverAsync(This,dragInfo,dragUIOverride,returnValue) \
    ( (This)->lpVtbl->OverAsync(This,dragInfo,dragUIOverride,returnValue) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_LeaveAsync(This,dragInfo,returnValue) \
    ( (This)->lpVtbl->LeaveAsync(This,dragInfo,returnValue) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_DropAsync(This,dragInfo,returnValue) \
    ( (This)->lpVtbl->DropAsync(This,dragInfo,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs";
/* [object, uuid("2ACA929A-5E28-4EA6-829E-29134E665D6D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetTarget )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTarget * target
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_SetTarget(This,target) \
    ( (This)->lpVtbl->SetTarget(This,target) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CCore_CICoreDropOperationTargetRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragDropManager[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragInfo[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragOperation[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDragUIOverride[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DragDrop_Core_CoreDropOperationTargetRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs";
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
#endif // __windows2Eapplicationmodel2Edatatransfer2Edragdrop2Ecore_p_h__

#endif // __windows2Eapplicationmodel2Edatatransfer2Edragdrop2Ecore_h__
