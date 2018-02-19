/* Header file automatically generated from windows.media.apprecording.idl */
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
#ifndef __windows2Emedia2Eapprecording_h__
#define __windows2Emedia2Eapprecording_h__
#ifndef __windows2Emedia2Eapprecording_p_h__
#define __windows2Emedia2Eapprecording_p_h__


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

#if !defined(WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION)
#define WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION)

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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingManager;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager ABI::Windows::Media::AppRecording::IAppRecordingManager

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingManagerStatics;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics ABI::Windows::Media::AppRecording::IAppRecordingManagerStatics

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingResult;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult ABI::Windows::Media::AppRecording::IAppRecordingResult

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingSaveScreenshotResult;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingSavedScreenshotInfo;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingStatus;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus ABI::Windows::Media::AppRecording::IAppRecordingStatus

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                interface IAppRecordingStatusDetails;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails ABI::Windows::Media::AppRecording::IAppRecordingStatusDetails

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                class AppRecordingSavedScreenshotInfo;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE
#define DEF___FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3c407016-1940-5e2b-8830-c54becbbe0da"))
IIterator<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*, ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*> __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t;
#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>
//#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE
#define DEF___FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dd170424-794d-5158-a9af-6824353f91b2"))
IIterable<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*, ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*> __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t;
#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>
//#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE
#define DEF___FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43c83783-b36d-5a8e-b993-e19c823e6c1a"))
IVectorView<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*, ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo*> __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t;
#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>
//#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::AppRecording::IAppRecordingSavedScreenshotInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                class AppRecordingResult;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1f6f478f-6cab-58e5-8194-98083c72ddfc"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::AppRecordingResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingResult*, ABI::Windows::Media::AppRecording::IAppRecordingResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.AppRecording.AppRecordingResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::AppRecordingResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::IAppRecordingResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::IAppRecordingResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2c72c716-30ea-552c-aaca-51d123234ee3"))
IAsyncOperation<ABI::Windows::Media::AppRecording::AppRecordingResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingResult*, ABI::Windows::Media::AppRecording::IAppRecordingResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.AppRecording.AppRecordingResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::AppRecording::AppRecordingResult*> __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::AppRecording::IAppRecordingResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::AppRecording::IAppRecordingResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                class AppRecordingSaveScreenshotResult;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8e2047c3-4cdd-5404-9f68-529d0a35be65"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult*, ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.AppRecording.AppRecordingSaveScreenshotResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a048c53e-e624-512b-8e07-ac4e64391b2a"))
IAsyncOperation<ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult*, ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.AppRecording.AppRecordingSaveScreenshotResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult*> __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::AppRecording::IAppRecordingSaveScreenshotResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_USE */


#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */



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


namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                
                typedef enum AppRecordingSaveScreenshotOption : int AppRecordingSaveScreenshotOption;
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                class AppRecordingManager;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                class AppRecordingStatus;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                class AppRecordingStatusDetails;
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */











/*
 *
 * Struct Windows.Media.AppRecording.AppRecordingSaveScreenshotOption
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 */

#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [v1_enum, contract] */
                enum AppRecordingSaveScreenshotOption : int
                {
                    AppRecordingSaveScreenshotOption_None = 0,
                    AppRecordingSaveScreenshotOption_HdrContentVisible = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingManager
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingManager
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingManager[] = L"Windows.Media.AppRecording.IAppRecordingManager";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("E7E26076-A044-48E2-A512-3094D574C7CC"), exclusiveto, contract] */
                MIDL_INTERFACE("E7E26076-A044-48E2-A512-3094D574C7CC")
                IAppRecordingManager : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStatus(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppRecording::IAppRecordingStatus * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartRecordingToFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RecordTimeSpanToFileAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [in] */ABI::Windows::Foundation::TimeSpan duration,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedScreenshotMediaEncodingSubtypes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveScreenshotToFilesAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * folder,
                        /* [in] */__RPC__in HSTRING filenamePrefix,
                        /* [in] */ABI::Windows::Media::AppRecording::AppRecordingSaveScreenshotOption option,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedFormats,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingManager=_uuidof(IAppRecordingManager);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingManagerStatics
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingManager
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingManagerStatics[] = L"Windows.Media.AppRecording.IAppRecordingManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("50E709F7-38CE-4BD3-9DB2-E72BBE9DE11D"), exclusiveto, contract] */
                MIDL_INTERFACE("50E709F7-38CE-4BD3-9DB2-E72BBE9DE11D")
                IAppRecordingManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppRecording::IAppRecordingManager * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingManagerStatics=_uuidof(IAppRecordingManagerStatics);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingResult
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingResult[] = L"Windows.Media.AppRecording.IAppRecordingResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("3A900864-C66D-46F9-B2D9-5BC2DAD070D7"), exclusiveto, contract] */
                MIDL_INTERFACE("3A900864-C66D-46F9-B2D9-5BC2DAD070D7")
                IAppRecordingResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Succeeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                        /* [retval, out] */__RPC__out HRESULT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsFileTruncated(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingResult=_uuidof(IAppRecordingResult);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingSaveScreenshotResult
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult[] = L"Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("9C5B8D0A-0ABB-4457-AAEE-24F9C12EC778"), exclusiveto, contract] */
                MIDL_INTERFACE("9C5B8D0A-0ABB-4457-AAEE-24F9C12EC778")
                IAppRecordingSaveScreenshotResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Succeeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                        /* [retval, out] */__RPC__out HRESULT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SavedScreenshotInfos(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingSaveScreenshotResult=_uuidof(IAppRecordingSaveScreenshotResult);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo[] = L"Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("9B642D0A-189A-4D00-BF25-E1BB1249D594"), exclusiveto, contract] */
                MIDL_INTERFACE("9B642D0A-189A-4D00-BF25-E1BB1249D594")
                IAppRecordingSavedScreenshotInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaEncodingSubtype(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingSavedScreenshotInfo=_uuidof(IAppRecordingSavedScreenshotInfo);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingStatus
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingStatus
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingStatus[] = L"Windows.Media.AppRecording.IAppRecordingStatus";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("1D0CC82C-BC18-4B8A-A6EF-127EFAB3B5D9"), exclusiveto, contract] */
                MIDL_INTERFACE("1D0CC82C-BC18-4B8A-A6EF-127EFAB3B5D9")
                IAppRecordingStatus : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRecord(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRecordTimeSpan(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HistoricalBufferDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Details(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppRecording::IAppRecordingStatusDetails * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingStatus=_uuidof(IAppRecordingStatus);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingStatusDetails
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingStatusDetails
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingStatusDetails[] = L"Windows.Media.AppRecording.IAppRecordingStatusDetails";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppRecording {
                /* [object, uuid("B538A9B0-14ED-4412-AC45-6D672C9C9949"), exclusiveto, contract] */
                MIDL_INTERFACE("B538A9B0-14ED-4412-AC45-6D672C9C9949")
                IAppRecordingStatusDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAnyAppBroadcasting(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCaptureResourceUnavailable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGameStreamInProgress(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTimeSpanRecordingDisabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGpuConstrained(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAppInactive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBlockedForApp(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisabledByUser(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisabledBySystem(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppRecordingStatusDetails=_uuidof(IAppRecordingStatusDetails);
                
            } /* Windows */
        } /* Media */
    } /* AppRecording */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingManager
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.AppRecording.IAppRecordingManagerStatics interface starting with version 1.0 of the Windows.Media.AppRecording.AppRecordingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingManager_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingManager[] = L"Windows.Media.AppRecording.AppRecordingManager";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingResult_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingResult[] = L"Windows.Media.AppRecording.AppRecordingResult";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingSaveScreenshotResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult[] = L"Windows.Media.AppRecording.AppRecordingSaveScreenshotResult";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo[] = L"Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingStatus
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingStatus ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatus_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingStatus[] = L"Windows.Media.AppRecording.AppRecordingStatus";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingStatusDetails
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingStatusDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatusDetails_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatusDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingStatusDetails[] = L"Windows.Media.AppRecording.AppRecordingStatusDetails";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails;

#endif // ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;

typedef struct __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl;

interface __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;

typedef  struct __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl;

interface __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo;

typedef struct __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl;

interface __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;



#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption;























/*
 *
 * Struct Windows.Media.AppRecording.AppRecordingSaveScreenshotOption
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 */

#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption
{
    AppRecordingSaveScreenshotOption_None = 0,
    AppRecordingSaveScreenshotOption_HdrContentVisible = 1,
};
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingManager
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingManager
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingManager[] = L"Windows.Media.AppRecording.IAppRecordingManager";
/* [object, uuid("E7E26076-A044-48E2-A512-3094D574C7CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *StartRecordingToFileAsync )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RecordTimeSpanToFileAsync )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingResult * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedScreenshotMediaEncodingSubtypes )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveScreenshotToFilesAsync )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
        /* [in] */__RPC__in HSTRING filenamePrefix,
        /* [in] */__x_ABI_CWindows_CMedia_CAppRecording_CAppRecordingSaveScreenshotOption option,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedFormats,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAppRecording__CAppRecordingSaveScreenshotResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_GetStatus(This,result) \
    ( (This)->lpVtbl->GetStatus(This,result) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_StartRecordingToFileAsync(This,file,operation) \
    ( (This)->lpVtbl->StartRecordingToFileAsync(This,file,operation) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_RecordTimeSpanToFileAsync(This,startTime,duration,file,operation) \
    ( (This)->lpVtbl->RecordTimeSpanToFileAsync(This,startTime,duration,file,operation) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_get_SupportedScreenshotMediaEncodingSubtypes(This,value) \
    ( (This)->lpVtbl->get_SupportedScreenshotMediaEncodingSubtypes(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_SaveScreenshotToFilesAsync(This,folder,filenamePrefix,option,requestedFormats,operation) \
    ( (This)->lpVtbl->SaveScreenshotToFilesAsync(This,folder,filenamePrefix,option,requestedFormats,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingManagerStatics
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingManager
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingManagerStatics[] = L"Windows.Media.AppRecording.IAppRecordingManagerStatics";
/* [object, uuid("50E709F7-38CE-4BD3-9DB2-E72BBE9DE11D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManager * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingResult
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingResult[] = L"Windows.Media.AppRecording.IAppRecordingResult";
/* [object, uuid("3A900864-C66D-46F9-B2D9-5BC2DAD070D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsFileTruncated )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResultVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_get_Succeeded(This,value) \
    ( (This)->lpVtbl->get_Succeeded(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_get_IsFileTruncated(This,value) \
    ( (This)->lpVtbl->get_IsFileTruncated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingSaveScreenshotResult
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingSaveScreenshotResult[] = L"Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult";
/* [object, uuid("9C5B8D0A-0ABB-4457-AAEE-24F9C12EC778"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SavedScreenshotInfos )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAppRecording__CAppRecordingSavedScreenshotInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResultVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_get_Succeeded(This,value) \
    ( (This)->lpVtbl->get_Succeeded(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_get_SavedScreenshotInfos(This,value) \
    ( (This)->lpVtbl->get_SavedScreenshotInfos(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSaveScreenshotResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingSavedScreenshotInfo[] = L"Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo";
/* [object, uuid("9B642D0A-189A-4D00-BF25-E1BB1249D594"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaEncodingSubtype )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfoVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_get_MediaEncodingSubtype(This,value) \
    ( (This)->lpVtbl->get_MediaEncodingSubtype(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingSavedScreenshotInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingStatus
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingStatus
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingStatus[] = L"Windows.Media.AppRecording.IAppRecordingStatus";
/* [object, uuid("1D0CC82C-BC18-4B8A-A6EF-127EFAB3B5D9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRecord )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRecordTimeSpan )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HistoricalBufferDuration )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_get_CanRecord(This,value) \
    ( (This)->lpVtbl->get_CanRecord(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_get_CanRecordTimeSpan(This,value) \
    ( (This)->lpVtbl->get_CanRecordTimeSpan(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_get_HistoricalBufferDuration(This,value) \
    ( (This)->lpVtbl->get_HistoricalBufferDuration(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_get_Details(This,value) \
    ( (This)->lpVtbl->get_Details(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppRecording.IAppRecordingStatusDetails
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppRecording.AppRecordingStatusDetails
 *
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppRecording_IAppRecordingStatusDetails[] = L"Windows.Media.AppRecording.IAppRecordingStatusDetails";
/* [object, uuid("B538A9B0-14ED-4412-AC45-6D672C9C9949"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAnyAppBroadcasting )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCaptureResourceUnavailable )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGameStreamInProgress )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTimeSpanRecordingDisabled )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGpuConstrained )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAppInactive )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBlockedForApp )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisabledByUser )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisabledBySystem )(
        __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetailsVtbl;

interface __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsAnyAppBroadcasting(This,value) \
    ( (This)->lpVtbl->get_IsAnyAppBroadcasting(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsCaptureResourceUnavailable(This,value) \
    ( (This)->lpVtbl->get_IsCaptureResourceUnavailable(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsGameStreamInProgress(This,value) \
    ( (This)->lpVtbl->get_IsGameStreamInProgress(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsTimeSpanRecordingDisabled(This,value) \
    ( (This)->lpVtbl->get_IsTimeSpanRecordingDisabled(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsGpuConstrained(This,value) \
    ( (This)->lpVtbl->get_IsGpuConstrained(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsAppInactive(This,value) \
    ( (This)->lpVtbl->get_IsAppInactive(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsBlockedForApp(This,value) \
    ( (This)->lpVtbl->get_IsBlockedForApp(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsDisabledByUser(This,value) \
    ( (This)->lpVtbl->get_IsDisabledByUser(This,value) )

#define __x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_get_IsDisabledBySystem(This,value) \
    ( (This)->lpVtbl->get_IsDisabledBySystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppRecording_CIAppRecordingStatusDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingManager
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.AppRecording.IAppRecordingManagerStatics interface starting with version 1.0 of the Windows.Media.AppRecording.AppRecordingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingManager_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingManager[] = L"Windows.Media.AppRecording.AppRecordingManager";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingResult_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingResult[] = L"Windows.Media.AppRecording.AppRecordingResult";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingSaveScreenshotResult
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingSaveScreenshotResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingSaveScreenshotResult[] = L"Windows.Media.AppRecording.AppRecordingSaveScreenshotResult";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingSavedScreenshotInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingSavedScreenshotInfo[] = L"Windows.Media.AppRecording.AppRecordingSavedScreenshotInfo";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingStatus
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingStatus ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatus_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingStatus[] = L"Windows.Media.AppRecording.AppRecordingStatus";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppRecording.AppRecordingStatusDetails
 *
 * Introduced to Windows.Media.AppRecording.AppRecordingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppRecording.IAppRecordingStatusDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatusDetails_DEFINED
#define RUNTIMECLASS_Windows_Media_AppRecording_AppRecordingStatusDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppRecording_AppRecordingStatusDetails[] = L"Windows.Media.AppRecording.AppRecordingStatusDetails";
#endif
#endif // WINDOWS_MEDIA_APPRECORDING_APPRECORDINGCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emedia2Eapprecording_p_h__

#endif // __windows2Emedia2Eapprecording_h__
