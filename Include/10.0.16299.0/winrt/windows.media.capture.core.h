/* Header file automatically generated from windows.media.capture.core.idl */
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
#ifndef __windows2Emedia2Ecapture2Ecore_h__
#define __windows2Emedia2Ecapture2Ecore_h__
#ifndef __windows2Emedia2Ecapture2Ecore_p_h__
#define __windows2Emedia2Ecapture2Ecore_p_h__


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
#include "Windows.Media.Capture.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    interface IVariablePhotoCapturedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs ABI::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    interface IVariablePhotoSequenceCapture;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture

#endif // ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    interface IVariablePhotoSequenceCapture2;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2

#endif // ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    class VariablePhotoSequenceCapture;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("18a55dd3-01e3-5ae5-9b5e-c84ad40cf6b7"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*, ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Core.VariablePhotoSequenceCapture>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0327c8bc-3148-53f3-8a3d-cdb12e49e132"))
IAsyncOperation<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*, ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Core.VariablePhotoSequenceCapture>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*> __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2210a640-0e7b-5e8f-a617-2cbb10314a5a"))
ITypedEventHandler<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*, ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.Core.VariablePhotoSequenceCapture, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    class VariablePhotoCapturedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bab30230-3dcd-58e2-aac5-a45f3e6f8097"))
ITypedEventHandler<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*,ABI::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*, ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs*, ABI::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.Core.VariablePhotoSequenceCapture, Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Capture::Core::VariablePhotoSequenceCapture*,ABI::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*,ABI::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture*,ABI::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */





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
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                class CapturedFrame;
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                interface ICapturedFrame;
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame ABI::Windows::Media::Capture::ICapturedFrame

#endif // ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrame_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                class CapturedFrameControlValues;
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                interface ICapturedFrameControlValues;
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues ABI::Windows::Media::Capture::ICapturedFrameControlValues

#endif // ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues_FWD_DEFINED__




















/*
 *
 * Interface Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs[] = L"Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    /* [object, uuid("D1EB4C5C-1B53-4E4A-8B5C-DB7887AC949B"), exclusiveto, contract] */
                    MIDL_INTERFACE("D1EB4C5C-1B53-4E4A-8B5C-DB7887AC949B")
                    IVariablePhotoCapturedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Frame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::ICapturedFrame * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaptureTimeOffset(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsedFrameControllerIndex(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapturedFrameControlValues(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::ICapturedFrameControlValues * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVariablePhotoCapturedEventArgs=_uuidof(IVariablePhotoCapturedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Capture.Core.IVariablePhotoSequenceCapture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Core.VariablePhotoSequenceCapture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture[] = L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    /* [object, uuid("D0112D1D-031E-4041-A6D6-BD742476A8EE"), exclusiveto, contract] */
                    MIDL_INTERFACE("D0112D1D-031E-4041-A6D6-BD742476A8EE")
                    IVariablePhotoSequenceCapture : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE StartAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StopAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FinishAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PhotoCaptured(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PhotoCaptured(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVariablePhotoSequenceCapture=_uuidof(IVariablePhotoSequenceCapture);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Core.VariablePhotoSequenceCapture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2[] = L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Core {
                    /* [object, uuid("FE2C62BC-50B0-43E3-917C-E3B92798942F"), exclusiveto, contract] */
                    MIDL_INTERFACE("FE2C62BC-50B0-43E3-917C-E3B92798942F")
                    IVariablePhotoSequenceCapture2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE UpdateSettingsAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVariablePhotoSequenceCapture2=_uuidof(IVariablePhotoSequenceCapture2);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs[] = L"Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Capture.Core.VariablePhotoSequenceCapture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Core.IVariablePhotoSequenceCapture ** Default Interface **
 *    Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoSequenceCapture_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoSequenceCapture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Core_VariablePhotoSequenceCapture[] = L"Windows.Media.Capture.Core.VariablePhotoSequenceCapture";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrame_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues_FWD_DEFINED__




















/*
 *
 * Interface Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs[] = L"Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs";
/* [object, uuid("D1EB4C5C-1B53-4E4A-8B5C-DB7887AC949B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaptureTimeOffset )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsedFrameControllerIndex )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapturedFrameControlValues )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_get_Frame(This,value) \
    ( (This)->lpVtbl->get_Frame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_get_CaptureTimeOffset(This,value) \
    ( (This)->lpVtbl->get_CaptureTimeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_get_UsedFrameControllerIndex(This,value) \
    ( (This)->lpVtbl->get_UsedFrameControllerIndex(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_get_CapturedFrameControlValues(This,value) \
    ( (This)->lpVtbl->get_CapturedFrameControlValues(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Capture.Core.IVariablePhotoSequenceCapture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Core.VariablePhotoSequenceCapture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture[] = L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture";
/* [object, uuid("D0112D1D-031E-4041-A6D6-BD742476A8EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCaptureVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCaptureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_StartAsync(This,operation) \
    ( (This)->lpVtbl->StartAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_StopAsync(This,operation) \
    ( (This)->lpVtbl->StopAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_FinishAsync(This,operation) \
    ( (This)->lpVtbl->FinishAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_add_PhotoCaptured(This,handler,token) \
    ( (This)->lpVtbl->add_PhotoCaptured(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_remove_PhotoCaptured(This,token) \
    ( (This)->lpVtbl->remove_PhotoCaptured(This,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Core.VariablePhotoSequenceCapture
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2[] = L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2";
/* [object, uuid("FE2C62BC-50B0-43E3-917C-E3B92798942F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UpdateSettingsAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2Vtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_UpdateSettingsAsync(This,operation) \
    ( (This)->lpVtbl->UpdateSettingsAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs[] = L"Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Capture.Core.VariablePhotoSequenceCapture
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Core.IVariablePhotoSequenceCapture ** Default Interface **
 *    Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoSequenceCapture_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Core_VariablePhotoSequenceCapture_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Core_VariablePhotoSequenceCapture[] = L"Windows.Media.Capture.Core.VariablePhotoSequenceCapture";
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
#endif // __windows2Emedia2Ecapture2Ecore_p_h__

#endif // __windows2Emedia2Ecapture2Ecore_h__
