/* Header file automatically generated from windows.media.transcoding.idl */
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
#ifndef __windows2Emedia2Etranscoding_h__
#define __windows2Emedia2Etranscoding_h__
#ifndef __windows2Emedia2Etranscoding_p_h__
#define __windows2Emedia2Etranscoding_p_h__


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
#include "Windows.Media.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                interface IMediaTranscoder;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */
#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder ABI::Windows::Media::Transcoding::IMediaTranscoder

#endif // ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                interface IMediaTranscoder2;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */
#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 ABI::Windows::Media::Transcoding::IMediaTranscoder2

#endif // ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                interface IPrepareTranscodeResult;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */
#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult ABI::Windows::Media::Transcoding::IPrepareTranscodeResult

#endif // ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                enum TranscodeFailureReason : int;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */


#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("009c6245-0e59-53b0-9fd2-d250e45a00a3"))
IAsyncOperationProgressHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> : IAsyncOperationProgressHandler_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Media.Transcoding.TranscodeFailureReason, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE */





#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("080f1890-4fca-5165-a989-4b07da8e0b53"))
IAsyncOperationWithProgressCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> : IAsyncOperationWithProgressCompletedHandler_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Media.Transcoding.TranscodeFailureReason, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE */





#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("272eec20-4b64-5d53-a644-f9917b3d19d8"))
IAsyncOperationWithProgress<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> : IAsyncOperationWithProgress_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Transcoding.TranscodeFailureReason, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason,double> __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t;
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Transcoding::TranscodeFailureReason,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                class PrepareTranscodeResult;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a44d7d07-8f74-52ee-9f02-c2b244b4ff2a"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::PrepareTranscodeResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Transcoding::PrepareTranscodeResult*, ABI::Windows::Media::Transcoding::IPrepareTranscodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Transcoding.PrepareTranscodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::PrepareTranscodeResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::IPrepareTranscodeResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::IPrepareTranscodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f5f07c13-3047-5bab-8eb7-6e5d7d14afae"))
IAsyncOperation<ABI::Windows::Media::Transcoding::PrepareTranscodeResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Transcoding::PrepareTranscodeResult*, ABI::Windows::Media::Transcoding::IPrepareTranscodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Transcoding.PrepareTranscodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Transcoding::PrepareTranscodeResult*> __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Transcoding::IPrepareTranscodeResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Transcoding::IPrepareTranscodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c42ae2bf-e194-5179-b8ad-03b51c04e1da"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Transcoding.TranscodeFailureReason>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("02132510-3899-5257-bed9-a43e5149d28c"))
IAsyncOperation<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> : IAsyncOperation_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Transcoding.TranscodeFailureReason>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t;
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
//#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE */




#ifndef DEF___FIAsyncActionProgressHandler_1_double_USE
#define DEF___FIAsyncActionProgressHandler_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44825c7c-0da9-5691-b2b4-914f231eeced"))
IAsyncActionProgressHandler<double> : IAsyncActionProgressHandler_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionProgressHandler`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionProgressHandler<double> __FIAsyncActionProgressHandler_1_double_t;
#define __FIAsyncActionProgressHandler_1_double ABI::Windows::Foundation::__FIAsyncActionProgressHandler_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionProgressHandler_1_double ABI::Windows::Foundation::IAsyncActionProgressHandler<DOUBLE>
//#define __FIAsyncActionProgressHandler_1_double_t ABI::Windows::Foundation::IAsyncActionProgressHandler<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionProgressHandler_1_double_USE */




#ifndef DEF___FIAsyncActionWithProgressCompletedHandler_1_double_USE
#define DEF___FIAsyncActionWithProgressCompletedHandler_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("94d64ac6-4491-53ef-8be8-36481f3ff1e8"))
IAsyncActionWithProgressCompletedHandler<double> : IAsyncActionWithProgressCompletedHandler_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgressCompletedHandler<double> __FIAsyncActionWithProgressCompletedHandler_1_double_t;
#define __FIAsyncActionWithProgressCompletedHandler_1_double ABI::Windows::Foundation::__FIAsyncActionWithProgressCompletedHandler_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgressCompletedHandler_1_double ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<DOUBLE>
//#define __FIAsyncActionWithProgressCompletedHandler_1_double_t ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgressCompletedHandler_1_double_USE */




#ifndef DEF___FIAsyncActionWithProgress_1_double_USE
#define DEF___FIAsyncActionWithProgress_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4f1430a6-a825-56ca-b047-1a9bad52ba67"))
IAsyncActionWithProgress<double> : IAsyncActionWithProgress_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncActionWithProgress`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgress<double> __FIAsyncActionWithProgress_1_double_t;
#define __FIAsyncActionWithProgress_1_double ABI::Windows::Foundation::__FIAsyncActionWithProgress_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgress_1_double ABI::Windows::Foundation::IAsyncActionWithProgress<DOUBLE>
//#define __FIAsyncActionWithProgress_1_double_t ABI::Windows::Foundation::IAsyncActionWithProgress<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgress_1_double_USE */





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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IMediaSource;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIMediaSource ABI::Windows::Media::Core::IMediaSource

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile ABI::Windows::Media::MediaProperties::IMediaEncodingProfile

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__





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





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                
                typedef enum MediaVideoProcessingAlgorithm : int MediaVideoProcessingAlgorithm;
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                
                typedef enum TranscodeFailureReason : int TranscodeFailureReason;
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                class MediaTranscoder;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */











/*
 *
 * Struct Windows.Media.Transcoding.MediaVideoProcessingAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                /* [v1_enum, contract] */
                enum MediaVideoProcessingAlgorithm : int
                {
                    MediaVideoProcessingAlgorithm_Default = 0,
                    MediaVideoProcessingAlgorithm_MrfCrf444 = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Transcoding.TranscodeFailureReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                /* [v1_enum, contract] */
                enum TranscodeFailureReason : int
                {
                    TranscodeFailureReason_None = 0,
                    TranscodeFailureReason_Unknown = 1,
                    TranscodeFailureReason_InvalidProfile = 2,
                    TranscodeFailureReason_CodecNotFound = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Transcoding.IMediaTranscoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Transcoding.MediaTranscoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IMediaTranscoder[] = L"Windows.Media.Transcoding.IMediaTranscoder";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                /* [object, uuid("190C99D2-A0AA-4D34-86BC-EED1B12C2F5B"), exclusiveto, contract] */
                MIDL_INTERFACE("190C99D2-A0AA-4D34-86BC-EED1B12C2F5B")
                IMediaTranscoder : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrimStartTime(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimStartTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrimStopTime(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrimStopTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlwaysReencode(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlwaysReencode(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HardwareAccelerationEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareAccelerationEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddAudioEffect(
                        /* [in] */__RPC__in HSTRING activatableClassId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddAudioEffectWithSettings(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [in] */boolean effectRequired,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddVideoEffect(
                        /* [in] */__RPC__in HSTRING activatableClassId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddVideoEffectWithSettings(
                        /* [in] */__RPC__in HSTRING activatableClassId,
                        /* [in] */boolean effectRequired,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearEffects(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PrepareFileTranscodeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * destination,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PrepareStreamTranscodeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * destination,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaTranscoder=_uuidof(IMediaTranscoder);
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder;
#endif /* !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Transcoding.IMediaTranscoder2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Transcoding.MediaTranscoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IMediaTranscoder2[] = L"Windows.Media.Transcoding.IMediaTranscoder2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                /* [object, uuid("40531D74-35E0-4F04-8574-CA8BC4E5A082"), exclusiveto, contract] */
                MIDL_INTERFACE("40531D74-35E0-4F04-8574-CA8BC4E5A082")
                IMediaTranscoder2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE PrepareMediaStreamSourceTranscodeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Core::IMediaSource * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * destination,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * profile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VideoProcessingAlgorithm(
                        /* [in] */ABI::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoProcessingAlgorithm(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaTranscoder2=_uuidof(IMediaTranscoder2);
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Transcoding.IPrepareTranscodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Transcoding.PrepareTranscodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IPrepareTranscodeResult[] = L"Windows.Media.Transcoding.IPrepareTranscodeResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                /* [object, uuid("05F25DCE-994F-4A34-9D68-97CCCE1730D6"), exclusiveto, contract] */
                MIDL_INTERFACE("05F25DCE-994F-4A34-9D68-97CCCE1730D6")
                IPrepareTranscodeResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanTranscode(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FailureReason(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Transcoding::TranscodeFailureReason * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TranscodeAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_double * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrepareTranscodeResult=_uuidof(IPrepareTranscodeResult);
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Transcoding.MediaTranscoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Transcoding.IMediaTranscoder ** Default Interface **
 *    Windows.Media.Transcoding.IMediaTranscoder2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Transcoding_MediaTranscoder_DEFINED
#define RUNTIMECLASS_Windows_Media_Transcoding_MediaTranscoder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Transcoding_MediaTranscoder[] = L"Windows.Media.Transcoding.MediaTranscoder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Transcoding.PrepareTranscodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Transcoding.IPrepareTranscodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Transcoding_PrepareTranscodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Transcoding_PrepareTranscodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Transcoding_PrepareTranscodeResult[] = L"Windows.Media.Transcoding.PrepareTranscodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder;

#endif // ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2;

#endif // ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult;

#endif // ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__


#if !defined(____FIAsyncActionProgressHandler_1_double_INTERFACE_DEFINED__)
#define ____FIAsyncActionProgressHandler_1_double_INTERFACE_DEFINED__

typedef interface __FIAsyncActionProgressHandler_1_double __FIAsyncActionProgressHandler_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_double;

typedef interface __FIAsyncActionWithProgress_1_double __FIAsyncActionWithProgress_1_double;

typedef struct __FIAsyncActionProgressHandler_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_double * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_double * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_double *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_doubleVtbl;

interface __FIAsyncActionProgressHandler_1_double
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionProgressHandler_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionProgressHandler_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionProgressHandler_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionProgressHandler_1_double_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionProgressHandler_1_double_INTERFACE_DEFINED__


#if !defined(____FIAsyncActionWithProgressCompletedHandler_1_double_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgressCompletedHandler_1_double_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgressCompletedHandler_1_double __FIAsyncActionWithProgressCompletedHandler_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_double;

typedef interface __FIAsyncActionWithProgress_1_double __FIAsyncActionWithProgress_1_double;

typedef struct __FIAsyncActionWithProgressCompletedHandler_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_double * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_double *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_doubleVtbl;

interface __FIAsyncActionWithProgressCompletedHandler_1_double
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgressCompletedHandler_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgressCompletedHandler_1_double_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgressCompletedHandler_1_double_INTERFACE_DEFINED__


#if !defined(____FIAsyncActionWithProgress_1_double_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgress_1_double_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgress_1_double __FIAsyncActionWithProgress_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_double;

typedef struct __FIAsyncActionWithProgress_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_double * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_double * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_double * This,/* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_double * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_double * This, /* [in] */ __RPC__in_opt __FIAsyncActionProgressHandler_1_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_double **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_double * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_double * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_doubleVtbl;

interface __FIAsyncActionWithProgress_1_double
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgress_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgress_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgress_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgress_1_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncActionWithProgress_1_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncActionWithProgress_1_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncActionWithProgress_1_double_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_double_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_double_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_double_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_double_GetResults(This)	\
    ( (This)->lpVtbl -> GetResults(This) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgress_1_double_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm;


typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;














/*
 *
 * Struct Windows.Media.Transcoding.MediaVideoProcessingAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm
{
    MediaVideoProcessingAlgorithm_Default = 0,
    MediaVideoProcessingAlgorithm_MrfCrf444 = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Transcoding.TranscodeFailureReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason
{
    TranscodeFailureReason_None = 0,
    TranscodeFailureReason_Unknown = 1,
    TranscodeFailureReason_InvalidProfile = 2,
    TranscodeFailureReason_CodecNotFound = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Transcoding.IMediaTranscoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Transcoding.MediaTranscoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IMediaTranscoder[] = L"Windows.Media.Transcoding.IMediaTranscoder";
/* [object, uuid("190C99D2-A0AA-4D34-86BC-EED1B12C2F5B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrimStartTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimStartTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrimStopTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrimStopTime )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlwaysReencode )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlwaysReencode )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HardwareAccelerationEnabled )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareAccelerationEnabled )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddAudioEffect )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__RPC__in HSTRING activatableClassId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddAudioEffectWithSettings )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */boolean effectRequired,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddVideoEffect )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__RPC__in HSTRING activatableClassId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddVideoEffectWithSettings )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */boolean effectRequired,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    HRESULT ( STDMETHODCALLTYPE *ClearEffects )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareFileTranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareStreamTranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * destination,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoderVtbl;

interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_put_TrimStartTime(This,value) \
    ( (This)->lpVtbl->put_TrimStartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_get_TrimStartTime(This,value) \
    ( (This)->lpVtbl->get_TrimStartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_put_TrimStopTime(This,value) \
    ( (This)->lpVtbl->put_TrimStopTime(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_get_TrimStopTime(This,value) \
    ( (This)->lpVtbl->get_TrimStopTime(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_put_AlwaysReencode(This,value) \
    ( (This)->lpVtbl->put_AlwaysReencode(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_get_AlwaysReencode(This,value) \
    ( (This)->lpVtbl->get_AlwaysReencode(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_put_HardwareAccelerationEnabled(This,value) \
    ( (This)->lpVtbl->put_HardwareAccelerationEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_get_HardwareAccelerationEnabled(This,value) \
    ( (This)->lpVtbl->get_HardwareAccelerationEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_AddAudioEffect(This,activatableClassId) \
    ( (This)->lpVtbl->AddAudioEffect(This,activatableClassId) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_AddAudioEffectWithSettings(This,activatableClassId,effectRequired,configuration) \
    ( (This)->lpVtbl->AddAudioEffectWithSettings(This,activatableClassId,effectRequired,configuration) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_AddVideoEffect(This,activatableClassId) \
    ( (This)->lpVtbl->AddVideoEffect(This,activatableClassId) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_AddVideoEffectWithSettings(This,activatableClassId,effectRequired,configuration) \
    ( (This)->lpVtbl->AddVideoEffectWithSettings(This,activatableClassId,effectRequired,configuration) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_ClearEffects(This) \
    ( (This)->lpVtbl->ClearEffects(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_PrepareFileTranscodeAsync(This,source,destination,profile,operation) \
    ( (This)->lpVtbl->PrepareFileTranscodeAsync(This,source,destination,profile,operation) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_PrepareStreamTranscodeAsync(This,source,destination,profile,operation) \
    ( (This)->lpVtbl->PrepareStreamTranscodeAsync(This,source,destination,profile,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder;
#endif /* !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Transcoding.IMediaTranscoder2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Transcoding.MediaTranscoder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IMediaTranscoder2[] = L"Windows.Media.Transcoding.IMediaTranscoder2";
/* [object, uuid("40531D74-35E0-4F04-8574-CA8BC4E5A082"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PrepareMediaStreamSourceTranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * destination,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * profile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CPrepareTranscodeResult * * operation
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VideoProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2Vtbl;

interface __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_PrepareMediaStreamSourceTranscodeAsync(This,source,destination,profile,operation) \
    ( (This)->lpVtbl->PrepareMediaStreamSourceTranscodeAsync(This,source,destination,profile,operation) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_put_VideoProcessingAlgorithm(This,value) \
    ( (This)->lpVtbl->put_VideoProcessingAlgorithm(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_get_VideoProcessingAlgorithm(This,value) \
    ( (This)->lpVtbl->get_VideoProcessingAlgorithm(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIMediaTranscoder2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Transcoding.IPrepareTranscodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Transcoding.PrepareTranscodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Transcoding_IPrepareTranscodeResult[] = L"Windows.Media.Transcoding.IPrepareTranscodeResult";
/* [object, uuid("05F25DCE-994F-4A34-9D68-97CCCE1730D6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanTranscode )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FailureReason )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason * value
        );
    HRESULT ( STDMETHODCALLTYPE *TranscodeAsync )(
        __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_double * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResultVtbl;

interface __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_get_CanTranscode(This,value) \
    ( (This)->lpVtbl->get_CanTranscode(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_get_FailureReason(This,value) \
    ( (This)->lpVtbl->get_FailureReason(This,value) )

#define __x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_TranscodeAsync(This,operation) \
    ( (This)->lpVtbl->TranscodeAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CTranscoding_CIPrepareTranscodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Transcoding.MediaTranscoder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Transcoding.IMediaTranscoder ** Default Interface **
 *    Windows.Media.Transcoding.IMediaTranscoder2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Transcoding_MediaTranscoder_DEFINED
#define RUNTIMECLASS_Windows_Media_Transcoding_MediaTranscoder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Transcoding_MediaTranscoder[] = L"Windows.Media.Transcoding.MediaTranscoder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Transcoding.PrepareTranscodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Transcoding.IPrepareTranscodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Transcoding_PrepareTranscodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Transcoding_PrepareTranscodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Transcoding_PrepareTranscodeResult[] = L"Windows.Media.Transcoding.PrepareTranscodeResult";
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
#endif // __windows2Emedia2Etranscoding_p_h__

#endif // __windows2Emedia2Etranscoding_h__
