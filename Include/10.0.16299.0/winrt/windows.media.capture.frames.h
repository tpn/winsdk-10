/* Header file automatically generated from windows.media.capture.frames.idl */
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
#ifndef __windows2Emedia2Ecapture2Eframes_h__
#define __windows2Emedia2Ecapture2Eframes_h__
#ifndef __windows2Emedia2Ecapture2Eframes_p_h__
#define __windows2Emedia2Ecapture2Eframes_p_h__


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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Devices.h"
#include "Windows.Media.Devices.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IBufferMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame ABI::Windows::Media::Capture::Frames::IBufferMediaFrame

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IDepthMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame ABI::Windows::Media::Capture::Frames::IDepthMediaFrame

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IDepthMediaFrame2;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 ABI::Windows::Media::Capture::Frames::IDepthMediaFrame2

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IDepthMediaFrameFormat;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat ABI::Windows::Media::Capture::Frames::IDepthMediaFrameFormat

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IInfraredMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame ABI::Windows::Media::Capture::Frames::IInfraredMediaFrame

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameArrivedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs ABI::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameFormat;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat ABI::Windows::Media::Capture::Frames::IMediaFrameFormat

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameReader;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader ABI::Windows::Media::Capture::Frames::IMediaFrameReader

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameReader2;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 ABI::Windows::Media::Capture::Frames::IMediaFrameReader2

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameReference;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference ABI::Windows::Media::Capture::Frames::IMediaFrameReference

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSource;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource ABI::Windows::Media::Capture::Frames::IMediaFrameSource

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSourceController;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController ABI::Windows::Media::Capture::Frames::IMediaFrameSourceController

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSourceController2;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 ABI::Windows::Media::Capture::Frames::IMediaFrameSourceController2

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSourceGetPropertyResult;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSourceGroup;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSourceGroupStatics;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMediaFrameSourceInfo;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMultiSourceMediaFrameArrivedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMultiSourceMediaFrameReader;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMultiSourceMediaFrameReader2;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IMultiSourceMediaFrameReference;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IVideoMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame ABI::Windows::Media::Capture::Frames::IVideoMediaFrame

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    interface IVideoMediaFrameFormat;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat ABI::Windows::Media::Capture::Frames::IVideoMediaFrameFormat

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameSource;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("29f35a95-7eae-55a7-bc19-ed87baed4869"))
IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::MediaFrameSource*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSource*, ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Media.Capture.Frames.MediaFrameSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::MediaFrameSource*> __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d8ec36b7-64eb-5675-ad81-62233e483e17"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Media.Capture.Frames.MediaFrameSource>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a038e80f-0b3d-5cd4-849d-13036e1f506e"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Media.Capture.Frames.MediaFrameSource>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameFormat;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE
#define DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("83a0cfaa-6546-5a63-8cd7-f62152a75d27"))
IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*, ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Capture.Frames.MediaFrameFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*> __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t;
#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE
#define DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1f029a27-1123-538a-9261-8a380e12bac6"))
IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*, ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Capture.Frames.MediaFrameFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*> __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t;
#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#define DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d05e53cd-bbec-5fb7-8e4e-de86115b5e88"))
IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameSource*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSource*, ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Capture.Frames.MediaFrameSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameSource*> __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t;
#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#define DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0d447be3-8c91-581d-8071-17984b8b5994"))
IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameSource*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSource*, ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Capture.Frames.MediaFrameSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameSource*> __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t;
#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameSourceGroup;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dc0c1f9a-b748-5cfa-9b42-a3a8fe37281a"))
IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d0b71deb-76e8-5833-9623-2b1e1a8e1b72"))
IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameSourceInfo;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE
#define DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("443c60d8-208e-5399-bc44-edc6fef02293"))
IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Capture.Frames.MediaFrameSourceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*> __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t;
#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>
//#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE
#define DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2e29c5b0-6aa9-50f2-91a4-5b67a5598f2e"))
IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Capture.Frames.MediaFrameSourceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*> __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t;
#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>
//#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#define DEF___FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("534ea61f-8be7-5e93-b01b-ae1f9dd242a4"))
IMapView<HSTRING,ABI::Windows::Media::Capture::Frames::MediaFrameSource*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSource*, ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Media.Capture.Frames.MediaFrameSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Media::Capture::Frames::MediaFrameSource*> __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t;
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
//#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bae2547d-3fae-55cd-b209-45c3b5b2f816"))
IVectorView<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*, ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Capture.Frames.MediaFrameFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Capture::Frames::MediaFrameFormat*> __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t;
#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>
//#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameFormat*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d01148ae-cccd-56eb-b2b4-a7d2acce14ec"))
IVectorView<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
//#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dbdb7946-9b30-51d0-9c8c-c7105af690e0"))
IVectorView<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Capture.Frames.MediaFrameSourceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Capture::Frames::MediaFrameSourceInfo*> __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t;
#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>
//#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cff78a64-bd44-5638-af2f-540c23b322e7"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a795889f-6d49-5687-aabe-f2fc6237fa1a"))
IAsyncOperation<__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup*> __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameReader;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a6214dad-b917-5c89-a068-e32c9a7037d3"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameReader*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameReader*, ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MediaFrameReader>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameReader*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a10cb14d-7935-5c87-9026-8abe792a3be5"))
IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameReader*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameReader*, ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MediaFrameReader>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameReader*> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    enum MediaFrameReaderStartStatus : int;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9f49b2e5-2f68-5c58-8d8b-12176ff6ea50"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MediaFrameReaderStartStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("db8e251a-adc6-5753-8784-c44b4d7c5b07"))
IAsyncOperation<enum ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> : IAsyncOperation_impl<enum ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MediaFrameReaderStartStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameSourceGetPropertyResult;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d0577f0d-ce46-5c47-8f7c-4ae5626cc76d"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("80003979-4986-52a7-b227-ae6be4d2b5cd"))
IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult*> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("adf10eeb-9fc5-553b-9164-294246992a2a"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f3256a87-b1cf-5943-b664-9f19367d2779"))
IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*, ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MediaFrameSourceGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameSourceGroup*> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    enum MediaFrameSourceSetPropertyStatus : int;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f613663a-c685-5dc0-b133-60d94303a6e3"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MediaFrameSourceSetPropertyStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a1507c16-5f84-586e-8ca9-224f37e0e0de"))
IAsyncOperation<enum ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> : IAsyncOperation_impl<enum ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MediaFrameSourceSetPropertyStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MultiSourceMediaFrameReader;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("69993778-a48c-50cc-a6f0-5368f58a297a"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*, ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MultiSourceMediaFrameReader>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("53d56be8-f110-5226-9ce1-a8c26a572576"))
IAsyncOperation<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*, ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MultiSourceMediaFrameReader>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    enum MultiSourceMediaFrameReaderStartStatus : int;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("18eef24a-3332-5fee-a0f0-72ceed330645"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Capture.Frames.MultiSourceMediaFrameReaderStartStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a242b952-76aa-54e5-a13b-a8707c1098e1"))
IAsyncOperation<enum ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> : IAsyncOperation_impl<enum ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Capture.Frames.MultiSourceMediaFrameReaderStartStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>
//#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_USE */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameArrivedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d3dd49cb-8d25-591a-80f7-8363d5c03ec9"))
ITypedEventHandler<ABI::Windows::Media::Capture::Frames::MediaFrameReader*,ABI::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameReader*, ABI::Windows::Media::Capture::Frames::IMediaFrameReader*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs*, ABI::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.Frames.MediaFrameReader, Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Capture::Frames::MediaFrameReader*,ABI::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameReader*,ABI::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameReader*,ABI::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c7e61aa7-4716-5514-a913-ef1796b98dbd"))
ITypedEventHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSource*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MediaFrameSource*, ABI::Windows::Media::Capture::Frames::IMediaFrameSource*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.Frames.MediaFrameSource, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Capture::Frames::MediaFrameSource*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameSource*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Frames::IMediaFrameSource*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MultiSourceMediaFrameArrivedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("82b1ad4d-9887-56f4-9a9e-3ab18b02198c"))
ITypedEventHandler<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*,ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*, ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs*, ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.Frames.MultiSourceMediaFrameReader, Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader*,ABI::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*,ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader*,ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#ifndef DEF___FIKeyValuePair_2_GUID_IInspectable_USE
#define DEF___FIKeyValuePair_2_GUID_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3bda1540-d089-5a1a-8f0d-94eba8068e58"))
IKeyValuePair<GUID,IInspectable*> : IKeyValuePair_impl<GUID,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Guid, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<GUID,IInspectable*> __FIKeyValuePair_2_GUID_IInspectable_t;
#define __FIKeyValuePair_2_GUID_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_GUID_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_GUID_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,IInspectable*>
//#define __FIKeyValuePair_2_GUID_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_GUID_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4f25059a-0b9a-5f25-9b9e-4b9f1d22ff65"))
IIterator<__FIKeyValuePair_2_GUID_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_GUID_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Guid, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_GUID_IInspectable*> __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f3b20528-e3b3-5331-b2d0-0c2623aee785"))
IIterable<__FIKeyValuePair_2_GUID_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_GUID_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Guid, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_GUID_IInspectable*> __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_USE */





#ifndef DEF___FIMapView_2_GUID_IInspectable_USE
#define DEF___FIMapView_2_GUID_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e4d2c732-bbc1-5ef4-869f-5007ceb55f6e"))
IMapView<GUID,IInspectable*> : IMapView_impl<GUID,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<Guid, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<GUID,IInspectable*> __FIMapView_2_GUID_IInspectable_t;
#define __FIMapView_2_GUID_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_GUID_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_GUID_IInspectable ABI::Windows::Foundation::Collections::IMapView<GUID,IInspectable*>
//#define __FIMapView_2_GUID_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<GUID,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_GUID_IInspectable_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800"))
IReference<struct ABI::Windows::Foundation::TimeSpan> : IReference_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::TimeSpan> __FIReference_1_Windows__CFoundation__CTimeSpan_t;
#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
//#define __FIReference_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE */




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





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





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
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DSurface;
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__






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
        namespace Media {
            namespace Capture {
                
                typedef enum MediaStreamType : int MediaStreamType;
                
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class CameraIntrinsics;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface ICameraIntrinsics;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics ABI::Windows::Media::Devices::Core::ICameraIntrinsics

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    class DepthCorrelatedCoordinateMapper;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                namespace Core {
                    interface IDepthCorrelatedCoordinateMapper;
                } /* Windows */
            } /* Media */
        } /* Devices */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper ABI::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                class VideoDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Devices {
                interface IVideoDeviceController;
            } /* Windows */
        } /* Media */
    } /* Devices */} /* ABI */
#define __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController ABI::Windows::Media::Devices::IVideoDeviceController

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaRatio;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaRatio;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio ABI::Windows::Media::MediaProperties::IMediaRatio

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            class VideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoFrame ABI::Windows::Media::IVideoFrame

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    
                    typedef enum MediaFrameReaderAcquisitionMode : int MediaFrameReaderAcquisitionMode;
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    
                    typedef enum MediaFrameReaderStartStatus : int MediaFrameReaderStartStatus;
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    
                    typedef enum MediaFrameSourceGetPropertyStatus : int MediaFrameSourceGetPropertyStatus;
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    
                    typedef enum MediaFrameSourceKind : int MediaFrameSourceKind;
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    
                    typedef enum MediaFrameSourceSetPropertyStatus : int MediaFrameSourceSetPropertyStatus;
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    
                    typedef enum MultiSourceMediaFrameReaderStartStatus : int MultiSourceMediaFrameReaderStartStatus;
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
























namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class BufferMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class DepthMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class DepthMediaFrameFormat;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class InfraredMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameReference;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MediaFrameSourceController;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class MultiSourceMediaFrameReference;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class VideoMediaFrame;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    class VideoMediaFrameFormat;
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */












/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameReaderAcquisitionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [v1_enum, contract] */
                    enum MediaFrameReaderAcquisitionMode : int
                    {
                        MediaFrameReaderAcquisitionMode_Realtime = 0,
                        MediaFrameReaderAcquisitionMode_Buffered = 1,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameReaderStartStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [v1_enum, contract] */
                    enum MediaFrameReaderStartStatus : int
                    {
                        MediaFrameReaderStartStatus_Success = 0,
                        MediaFrameReaderStartStatus_UnknownFailure = 1,
                        MediaFrameReaderStartStatus_DeviceNotAvailable = 2,
                        MediaFrameReaderStartStatus_OutputFormatNotSupported = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                        MediaFrameReaderStartStatus_ExclusiveControlNotAvailable = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [v1_enum, contract] */
                    enum MediaFrameSourceGetPropertyStatus : int
                    {
                        MediaFrameSourceGetPropertyStatus_Success = 0,
                        MediaFrameSourceGetPropertyStatus_UnknownFailure = 1,
                        MediaFrameSourceGetPropertyStatus_NotSupported = 2,
                        MediaFrameSourceGetPropertyStatus_DeviceNotAvailable = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                        MediaFrameSourceGetPropertyStatus_MaxPropertyValueSizeTooSmall = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                        MediaFrameSourceGetPropertyStatus_MaxPropertyValueSizeRequired = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameSourceKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [v1_enum, contract] */
                    enum MediaFrameSourceKind : int
                    {
                        MediaFrameSourceKind_Custom = 0,
                        MediaFrameSourceKind_Color = 1,
                        MediaFrameSourceKind_Infrared = 2,
                        MediaFrameSourceKind_Depth = 3,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameSourceSetPropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [v1_enum, contract] */
                    enum MediaFrameSourceSetPropertyStatus : int
                    {
                        MediaFrameSourceSetPropertyStatus_Success = 0,
                        MediaFrameSourceSetPropertyStatus_UnknownFailure = 1,
                        MediaFrameSourceSetPropertyStatus_NotSupported = 2,
                        MediaFrameSourceSetPropertyStatus_InvalidValue = 3,
                        MediaFrameSourceSetPropertyStatus_DeviceNotAvailable = 4,
                        MediaFrameSourceSetPropertyStatus_NotInControl = 5,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MultiSourceMediaFrameReaderStartStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [v1_enum, contract] */
                    enum MultiSourceMediaFrameReaderStartStatus : int
                    {
                        MultiSourceMediaFrameReaderStartStatus_Success = 0,
                        MultiSourceMediaFrameReaderStartStatus_NotSupported = 1,
                        MultiSourceMediaFrameReaderStartStatus_InsufficientResources = 2,
                        MultiSourceMediaFrameReaderStartStatus_DeviceNotAvailable = 3,
                        MultiSourceMediaFrameReaderStartStatus_UnknownFailure = 4,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IBufferMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.BufferMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IBufferMediaFrame[] = L"Windows.Media.Capture.Frames.IBufferMediaFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("B5B153C7-9B84-4062-B79C-A365B2596854"), exclusiveto, contract] */
                    MIDL_INTERFACE("B5B153C7-9B84-4062-B79C-A365B2596854")
                    IBufferMediaFrame : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameReference(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameReference * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Buffer(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBufferMediaFrame=_uuidof(IBufferMediaFrame);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IDepthMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.DepthMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrame[] = L"Windows.Media.Capture.Frames.IDepthMediaFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("47135E4F-8549-45C0-925B-80D35EFDB10A"), exclusiveto, contract] */
                    MIDL_INTERFACE("47135E4F-8549-45C0-925B-80D35EFDB10A")
                    IDepthMediaFrame : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameReference(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameReference * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoMediaFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IVideoMediaFrame * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepthFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IDepthMediaFrameFormat * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryCreateCoordinateMapper(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Devices::Core::ICameraIntrinsics * cameraIntrinsics,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDepthMediaFrame=_uuidof(IDepthMediaFrame);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IDepthMediaFrame2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.DepthMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrame2[] = L"Windows.Media.Capture.Frames.IDepthMediaFrame2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("6CCA473D-C4A4-4176-B0CD-33EAE3B35AA3"), exclusiveto, contract] */
                    MIDL_INTERFACE("6CCA473D-C4A4-4176-B0CD-33EAE3B35AA3")
                    IDepthMediaFrame2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxReliableDepth(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinReliableDepth(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDepthMediaFrame2=_uuidof(IDepthMediaFrame2);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IDepthMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.DepthMediaFrameFormat
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IDepthMediaFrameFormat";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("C312CF40-D729-453E-8780-2E04F140D28E"), exclusiveto, contract] */
                    MIDL_INTERFACE("C312CF40-D729-453E-8780-2E04F140D28E")
                    IDepthMediaFrameFormat : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IVideoMediaFrameFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepthScaleInMeters(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDepthMediaFrameFormat=_uuidof(IDepthMediaFrameFormat);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IInfraredMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.InfraredMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IInfraredMediaFrame[] = L"Windows.Media.Capture.Frames.IInfraredMediaFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("3FD13503-004B-4F0E-91AC-465299B41658"), exclusiveto, contract] */
                    MIDL_INTERFACE("3FD13503-004B-4F0E-91AC-465299B41658")
                    IInfraredMediaFrame : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameReference(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameReference * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoMediaFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IVideoMediaFrame * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsIlluminated(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInfraredMediaFrame=_uuidof(IInfraredMediaFrame);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("0B430ADD-A490-4435-ADA1-9AFFD55239F7"), exclusiveto, contract] */
                    MIDL_INTERFACE("0B430ADD-A490-4435-ADA1-9AFFD55239F7")
                    IMediaFrameArrivedEventArgs : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameArrivedEventArgs=_uuidof(IMediaFrameArrivedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameFormat
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IMediaFrameFormat";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("71902B4E-B279-4A97-A9DB-BD5A2FB78F39"), exclusiveto, contract] */
                    MIDL_INTERFACE("71902B4E-B279-4A97-A9DB-BD5A2FB78F39")
                    IMediaFrameFormat : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MajorType(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subtype(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameRate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IVideoMediaFrameFormat * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameFormat=_uuidof(IMediaFrameFormat);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameReader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReader[] = L"Windows.Media.Capture.Frames.IMediaFrameReader";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("E4C94395-2028-48ED-90B0-D1C1B162E24C"), exclusiveto, contract] */
                    MIDL_INTERFACE("E4C94395-2028-48ED-90B0-D1C1B162E24C")
                    IMediaFrameReader : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FrameArrived(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FrameArrived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryAcquireLatestFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameReference * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StartAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StopAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameReader=_uuidof(IMediaFrameReader);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameReader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReader2[] = L"Windows.Media.Capture.Frames.IMediaFrameReader2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("871127B3-8531-4050-87CC-A13733CF3E9B"), exclusiveto, contract] */
                    MIDL_INTERFACE("871127B3-8531-4050-87CC-A13733CF3E9B")
                    IMediaFrameReader2 : IInspectable
                    {
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AcquisitionMode(
                            /* [in] */ABI::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcquisitionMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameReader2=_uuidof(IMediaFrameReader2);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameReference
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReference[] = L"Windows.Media.Capture.Frames.IMediaFrameReference";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("F6B88641-F0DC-4044-8DC9-961CEDD05BAD"), exclusiveto, contract] */
                    MIDL_INTERFACE("F6B88641-F0DC-4044-8DC9-961CEDD05BAD")
                    IMediaFrameReference : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Capture::Frames::MediaFrameSourceKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Format(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemRelativeTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BufferMediaFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IBufferMediaFrame * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoMediaFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IVideoMediaFrame * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoordinateSystem(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameReference=_uuidof(IMediaFrameReference);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSource[] = L"Windows.Media.Capture.Frames.IMediaFrameSource";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("D6782953-90DB-46A8-8ADD-2AA884A8D253"), exclusiveto, contract] */
                    MIDL_INTERFACE("D6782953-90DB-46A8-8ADD-2AA884A8D253")
                    IMediaFrameSource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Info(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameSourceInfo * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Controller(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameSourceController * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedFormats(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameFormat * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFormatAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Capture::Frames::IMediaFrameFormat * format,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FormatChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FormatChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetCameraIntrinsics(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Capture::Frames::IMediaFrameFormat * format,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::ICameraIntrinsics * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSource=_uuidof(IMediaFrameSource);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("6D076635-316D-4B8F-B7B6-EEB04A8C6525"), exclusiveto, contract] */
                    MIDL_INTERFACE("6D076635-316D-4B8F-B7B6-EEB04A8C6525")
                    IMediaFrameSourceController : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyAsync(
                            /* [in] */__RPC__in HSTRING propertyId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyAsync(
                            /* [in] */__RPC__in HSTRING propertyId,
                            /* [in] */__RPC__in_opt IInspectable * propertyValue,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoDeviceController(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::IVideoDeviceController * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSourceController=_uuidof(IMediaFrameSourceController);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController2[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("EFC49FD4-FCF2-4A03-B4E4-AC9628739BEE"), exclusiveto, contract] */
                    MIDL_INTERFACE("EFC49FD4-FCF2-4A03-B4E4-AC9628739BEE")
                    IMediaFrameSourceController2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetPropertyByExtendedIdAsync(
                            /* [in] */UINT32 __extendedPropertyIdSize,
                            /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyByExtendedIdAsync(
                            /* [in] */UINT32 __extendedPropertyIdSize,
                            /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                            /* [in] */UINT32 __propertyValueSize,
                            /* [size_is(__propertyValueSize), in] */__RPC__in_ecount_full(__propertyValueSize) BYTE * propertyValue,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSourceController2=_uuidof(IMediaFrameSourceController2);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("088616C2-3A64-4BD5-BD2B-E7C898D2F37A"), exclusiveto, contract] */
                    MIDL_INTERFACE("088616C2-3A64-4BD5-BD2B-E7C898D2F37A")
                    IMediaFrameSourceGetPropertyResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSourceGetPropertyResult=_uuidof(IMediaFrameSourceGetPropertyResult);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGroup[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroup";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("7F605B87-4832-4B5F-AE3D-412FAAB37D34"), exclusiveto, contract] */
                    MIDL_INTERFACE("7F605B87-4832-4B5F-AE3D-412FAAB37D34")
                    IMediaFrameSourceGroup : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceInfos(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSourceGroup=_uuidof(IMediaFrameSourceGroup);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("1C48BFC5-436F-4508-94CF-D5D8B7326445"), exclusiveto, contract] */
                    MIDL_INTERFACE("1C48BFC5-436F-4508-94CF-D5D8B7326445")
                    IMediaFrameSourceGroupStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                            /* [in] */__RPC__in HSTRING id,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSourceGroupStatics=_uuidof(IMediaFrameSourceGroupStatics);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceInfo[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("87BDC9CD-4601-408F-91CF-038318CD0AF3"), exclusiveto, contract] */
                    MIDL_INTERFACE("87BDC9CD-4601-408F-91CF-038318CD0AF3")
                    IMediaFrameSourceInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaStreamType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Capture::MediaStreamType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceKind(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Capture::Frames::MediaFrameSourceKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceGroup(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameSourceGroup * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInformation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoordinateSystem(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMediaFrameSourceInfo=_uuidof(IMediaFrameSourceInfo);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("63115E01-CF51-48FD-AAB0-6D693EB48127"), exclusiveto, contract] */
                    MIDL_INTERFACE("63115E01-CF51-48FD-AAB0-6D693EB48127")
                    IMultiSourceMediaFrameArrivedEventArgs : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMultiSourceMediaFrameArrivedEventArgs=_uuidof(IMultiSourceMediaFrameArrivedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameReader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("8D144402-F763-488D-98F2-B437BCF075E7"), exclusiveto, contract] */
                    MIDL_INTERFACE("8D144402-F763-488D-98F2-B437BCF075E7")
                    IMultiSourceMediaFrameReader : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FrameArrived(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FrameArrived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryAcquireLatestFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StartAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StopAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMultiSourceMediaFrameReader=_uuidof(IMultiSourceMediaFrameReader);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("EF5C8ABD-FC5C-4C6B-9D81-3CB9CC637C26"), exclusiveto, contract] */
                    MIDL_INTERFACE("EF5C8ABD-FC5C-4C6B-9D81-3CB9CC637C26")
                    IMultiSourceMediaFrameReader2 : IInspectable
                    {
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AcquisitionMode(
                            /* [in] */ABI::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcquisitionMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMultiSourceMediaFrameReader2=_uuidof(IMultiSourceMediaFrameReader2);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameReference
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("21964B1A-7FE2-44D6-92E5-298E6D2810E9"), exclusiveto, contract] */
                    MIDL_INTERFACE("21964B1A-7FE2-44D6-92E5-298E6D2810E9")
                    IMultiSourceMediaFrameReference : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TryGetFrameReferenceBySourceId(
                            /* [in] */__RPC__in HSTRING sourceId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameReference * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMultiSourceMediaFrameReference=_uuidof(IMultiSourceMediaFrameReference);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IVideoMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.VideoMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IVideoMediaFrame[] = L"Windows.Media.Capture.Frames.IVideoMediaFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("00DD4CCB-32BD-4FE1-A013-7CC13CF5DBCF"), exclusiveto, contract] */
                    MIDL_INTERFACE("00DD4CCB-32BD-4FE1-A013-7CC13CF5DBCF")
                    IVideoMediaFrame : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameReference(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameReference * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IVideoMediaFrameFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoftwareBitmap(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direct3DSurface(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CameraIntrinsics(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Devices::Core::ICameraIntrinsics * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InfraredMediaFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IInfraredMediaFrame * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepthMediaFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IDepthMediaFrame * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVideoFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVideoMediaFrame=_uuidof(IVideoMediaFrame);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IVideoMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.VideoMediaFrameFormat
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IVideoMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IVideoMediaFrameFormat";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                namespace Frames {
                    /* [object, uuid("46027FC0-D71B-45C7-8F14-6D9A0AE604E4"), exclusiveto, contract] */
                    MIDL_INTERFACE("46027FC0-D71B-45C7-8F14-6D9A0AE604E4")
                    IVideoMediaFrameFormat : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaFrameFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IMediaFrameFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepthFormat(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Capture::Frames::IDepthMediaFrameFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Width(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Height(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVideoMediaFrameFormat=_uuidof(IVideoMediaFrameFormat);
                    
                } /* Windows */
            } /* Media */
        } /* Capture */
    } /* Frames */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.BufferMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IBufferMediaFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_BufferMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_BufferMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_BufferMediaFrame[] = L"Windows.Media.Capture.Frames.BufferMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.DepthMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IDepthMediaFrame ** Default Interface **
 *    Windows.Media.Capture.Frames.IDepthMediaFrame2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_DepthMediaFrame[] = L"Windows.Media.Capture.Frames.DepthMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.DepthMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IDepthMediaFrameFormat ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrameFormat_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrameFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_DepthMediaFrameFormat[] = L"Windows.Media.Capture.Frames.DepthMediaFrameFormat";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.InfraredMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IInfraredMediaFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_InfraredMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_InfraredMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_InfraredMediaFrame[] = L"Windows.Media.Capture.Frames.InfraredMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameFormat ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameFormat_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameFormat[] = L"Windows.Media.Capture.Frames.MediaFrameFormat";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Capture.Frames.IMediaFrameReader2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReader_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameReader[] = L"Windows.Media.Capture.Frames.MediaFrameReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameReference ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReference_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameReference[] = L"Windows.Media.Capture.Frames.MediaFrameReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSource[] = L"Windows.Media.Capture.Frames.MediaFrameSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceController ** Default Interface **
 *    Windows.Media.Capture.Frames.IMediaFrameSourceController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceController[] = L"Windows.Media.Capture.Frames.MediaFrameSourceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult[] = L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGroup_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceGroup[] = L"Windows.Media.Capture.Frames.MediaFrameSourceGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceInfo_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceInfo[] = L"Windows.Media.Capture.Frames.MediaFrameSourceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Capture.Frames.MultiSourceMediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Capture.Frames.MultiSourceMediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Capture.Frames.VideoMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IVideoMediaFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_VideoMediaFrame[] = L"Windows.Media.Capture.Frames.VideoMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.VideoMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IVideoMediaFrameFormat ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrameFormat_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrameFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_VideoMediaFrameFormat[] = L"Windows.Media.Capture.Frames.VideoMediaFrameFormat";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat;

#endif // ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;

typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl;

interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;

typedef  struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl;

interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;

interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

typedef  struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;

interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef  struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;

typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;

interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;

typedef  struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;

interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;

typedef struct __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;

interface __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;

typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl;

interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;

typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;

interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if !defined(____FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_GUID_IInspectable __FIKeyValuePair_2_GUID_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_IInspectable;

typedef struct __FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__out GUID *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_IInspectableVtbl;

interface __FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_GUID_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_GUID_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_GUID_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_GUID_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_GUID_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_GUID_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_GUID_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_GUID_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_GUID_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_GUID_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_GUID_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_GUID_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_GUID_IInspectable __FIMapView_2_GUID_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_GUID_IInspectable;

typedef struct __FIMapView_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
        /* [in] */ __RPC__in GUID key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_IInspectable * This, /* [in] */ __RPC__in GUID key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_IInspectableVtbl;

interface __FIMapView_2_GUID_IInspectable
{
    CONST_VTBL struct __FIMapView_2_GUID_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_GUID_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_GUID_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_GUID_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_GUID_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_GUID_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_GUID_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_GUID_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_GUID_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_GUID_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_GUID_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_GUID_IInspectable_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CTimeSpan;

#if !defined(____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;

typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__


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



#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType;




#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;

#endif // ____x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode;


typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus;


typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus;


typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind;


typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus;


typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus;




















































/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameReaderAcquisitionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode
{
    MediaFrameReaderAcquisitionMode_Realtime = 0,
    MediaFrameReaderAcquisitionMode_Buffered = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameReaderStartStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus
{
    MediaFrameReaderStartStatus_Success = 0,
    MediaFrameReaderStartStatus_UnknownFailure = 1,
    MediaFrameReaderStartStatus_DeviceNotAvailable = 2,
    MediaFrameReaderStartStatus_OutputFormatNotSupported = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    MediaFrameReaderStartStatus_ExclusiveControlNotAvailable = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus
{
    MediaFrameSourceGetPropertyStatus_Success = 0,
    MediaFrameSourceGetPropertyStatus_UnknownFailure = 1,
    MediaFrameSourceGetPropertyStatus_NotSupported = 2,
    MediaFrameSourceGetPropertyStatus_DeviceNotAvailable = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    MediaFrameSourceGetPropertyStatus_MaxPropertyValueSizeTooSmall = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    MediaFrameSourceGetPropertyStatus_MaxPropertyValueSizeRequired = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameSourceKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind
{
    MediaFrameSourceKind_Custom = 0,
    MediaFrameSourceKind_Color = 1,
    MediaFrameSourceKind_Infrared = 2,
    MediaFrameSourceKind_Depth = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MediaFrameSourceSetPropertyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus
{
    MediaFrameSourceSetPropertyStatus_Success = 0,
    MediaFrameSourceSetPropertyStatus_UnknownFailure = 1,
    MediaFrameSourceSetPropertyStatus_NotSupported = 2,
    MediaFrameSourceSetPropertyStatus_InvalidValue = 3,
    MediaFrameSourceSetPropertyStatus_DeviceNotAvailable = 4,
    MediaFrameSourceSetPropertyStatus_NotInControl = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Capture.Frames.MultiSourceMediaFrameReaderStartStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus
{
    MultiSourceMediaFrameReaderStartStatus_Success = 0,
    MultiSourceMediaFrameReaderStartStatus_NotSupported = 1,
    MultiSourceMediaFrameReaderStartStatus_InsufficientResources = 2,
    MultiSourceMediaFrameReaderStartStatus_DeviceNotAvailable = 3,
    MultiSourceMediaFrameReaderStartStatus_UnknownFailure = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IBufferMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.BufferMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IBufferMediaFrame[] = L"Windows.Media.Capture.Frames.IBufferMediaFrame";
/* [object, uuid("B5B153C7-9B84-4062-B79C-A365B2596854"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrameVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_get_FrameReference(This,value) \
    ( (This)->lpVtbl->get_FrameReference(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_get_Buffer(This,value) \
    ( (This)->lpVtbl->get_Buffer(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IDepthMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.DepthMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrame[] = L"Windows.Media.Capture.Frames.IDepthMediaFrame";
/* [object, uuid("47135E4F-8549-45C0-925B-80D35EFDB10A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepthFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateCoordinateMapper )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * cameraIntrinsics,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_get_FrameReference(This,value) \
    ( (This)->lpVtbl->get_FrameReference(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_get_VideoMediaFrame(This,value) \
    ( (This)->lpVtbl->get_VideoMediaFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_get_DepthFormat(This,value) \
    ( (This)->lpVtbl->get_DepthFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_TryCreateCoordinateMapper(This,cameraIntrinsics,coordinateSystem,value) \
    ( (This)->lpVtbl->TryCreateCoordinateMapper(This,cameraIntrinsics,coordinateSystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IDepthMediaFrame2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.DepthMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrame2[] = L"Windows.Media.Capture.Frames.IDepthMediaFrame2";
/* [object, uuid("6CCA473D-C4A4-4176-B0CD-33EAE3B35AA3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxReliableDepth )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinReliableDepth )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2Vtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_get_MaxReliableDepth(This,value) \
    ( (This)->lpVtbl->get_MaxReliableDepth(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_get_MinReliableDepth(This,value) \
    ( (This)->lpVtbl->get_MinReliableDepth(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IDepthMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.DepthMediaFrameFormat
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IDepthMediaFrameFormat";
/* [object, uuid("C312CF40-D729-453E-8780-2E04F140D28E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepthScaleInMeters )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormatVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_get_VideoFormat(This,value) \
    ( (This)->lpVtbl->get_VideoFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_get_DepthScaleInMeters(This,value) \
    ( (This)->lpVtbl->get_DepthScaleInMeters(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IInfraredMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.InfraredMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IInfraredMediaFrame[] = L"Windows.Media.Capture.Frames.IInfraredMediaFrame";
/* [object, uuid("3FD13503-004B-4F0E-91AC-465299B41658"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsIlluminated )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrameVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_get_FrameReference(This,value) \
    ( (This)->lpVtbl->get_FrameReference(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_get_VideoMediaFrame(This,value) \
    ( (This)->lpVtbl->get_VideoMediaFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_get_IsIlluminated(This,value) \
    ( (This)->lpVtbl->get_IsIlluminated(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs";
/* [object, uuid("0B430ADD-A490-4435-ADA1-9AFFD55239F7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameFormat
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IMediaFrameFormat";
/* [object, uuid("71902B4E-B279-4A97-A9DB-BD5A2FB78F39"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MajorType )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subtype )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameRate )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormatVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_get_MajorType(This,value) \
    ( (This)->lpVtbl->get_MajorType(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_get_Subtype(This,value) \
    ( (This)->lpVtbl->get_Subtype(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_get_FrameRate(This,value) \
    ( (This)->lpVtbl->get_FrameRate(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_get_VideoFormat(This,value) \
    ( (This)->lpVtbl->get_VideoFormat(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameReader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReader[] = L"Windows.Media.Capture.Frames.IMediaFrameReader";
/* [object, uuid("E4C94395-2028-48ED-90B0-D1C1B162E24C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryAcquireLatestFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReaderVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_add_FrameArrived(This,handler,token) \
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_remove_FrameArrived(This,token) \
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_TryAcquireLatestFrame(This,value) \
    ( (This)->lpVtbl->TryAcquireLatestFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_StartAsync(This,operation) \
    ( (This)->lpVtbl->StartAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_StopAsync(This,action) \
    ( (This)->lpVtbl->StopAsync(This,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameReader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReader2[] = L"Windows.Media.Capture.Frames.IMediaFrameReader2";
/* [object, uuid("871127B3-8531-4050-87CC-A13733CF3E9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2Vtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_put_AcquisitionMode(This,value) \
    ( (This)->lpVtbl->put_AcquisitionMode(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_get_AcquisitionMode(This,value) \
    ( (This)->lpVtbl->get_AcquisitionMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameReference
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReference[] = L"Windows.Media.Capture.Frames.IMediaFrameReference";
/* [object, uuid("F6B88641-F0DC-4044-8DC9-961CEDD05BAD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceKind )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemRelativeTime )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BufferMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReferenceVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_SourceKind(This,value) \
    ( (This)->lpVtbl->get_SourceKind(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_Format(This,value) \
    ( (This)->lpVtbl->get_Format(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_SystemRelativeTime(This,value) \
    ( (This)->lpVtbl->get_SystemRelativeTime(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_BufferMediaFrame(This,value) \
    ( (This)->lpVtbl->get_BufferMediaFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_VideoMediaFrame(This,value) \
    ( (This)->lpVtbl->get_VideoMediaFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_get_CoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSource[] = L"Windows.Media.Capture.Frames.IMediaFrameSource";
/* [object, uuid("D6782953-90DB-46A8-8ADD-2AA884A8D253"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Info )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedFormats )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFormatAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * format,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FormatChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FormatChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCameraIntrinsics )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * format,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_get_Info(This,value) \
    ( (This)->lpVtbl->get_Info(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_get_Controller(This,value) \
    ( (This)->lpVtbl->get_Controller(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_get_SupportedFormats(This,value) \
    ( (This)->lpVtbl->get_SupportedFormats(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_get_CurrentFormat(This,value) \
    ( (This)->lpVtbl->get_CurrentFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_SetFormatAsync(This,format,value) \
    ( (This)->lpVtbl->SetFormatAsync(This,format,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_add_FormatChanged(This,handler,token) \
    ( (This)->lpVtbl->add_FormatChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_remove_FormatChanged(This,token) \
    ( (This)->lpVtbl->remove_FormatChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_TryGetCameraIntrinsics(This,format,value) \
    ( (This)->lpVtbl->TryGetCameraIntrinsics(This,format,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController";
/* [object, uuid("6D076635-316D-4B8F-B7B6-EEB04A8C6525"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPropertyAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
        /* [in] */__RPC__in HSTRING propertyId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
        /* [in] */__RPC__in HSTRING propertyId,
        /* [in] */__RPC__in_opt IInspectable * propertyValue,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceController )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceControllerVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_GetPropertyAsync(This,propertyId,value) \
    ( (This)->lpVtbl->GetPropertyAsync(This,propertyId,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_SetPropertyAsync(This,propertyId,propertyValue,value) \
    ( (This)->lpVtbl->SetPropertyAsync(This,propertyId,propertyValue,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_get_VideoDeviceController(This,value) \
    ( (This)->lpVtbl->get_VideoDeviceController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController2[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController2";
/* [object, uuid("EFC49FD4-FCF2-4A03-B4E4-AC9628739BEE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPropertyByExtendedIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
        /* [in] */UINT32 __extendedPropertyIdSize,
        /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyByExtendedIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
        /* [in] */UINT32 __extendedPropertyIdSize,
        /* [size_is(__extendedPropertyIdSize), in] */__RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
        /* [in] */UINT32 __propertyValueSize,
        /* [size_is(__propertyValueSize), in] */__RPC__in_ecount_full(__propertyValueSize) BYTE * propertyValue,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2Vtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_GetPropertyByExtendedIdAsync(This,__extendedPropertyIdSize,extendedPropertyId,maxPropertyValueSize,operation) \
    ( (This)->lpVtbl->GetPropertyByExtendedIdAsync(This,__extendedPropertyIdSize,extendedPropertyId,maxPropertyValueSize,operation) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_SetPropertyByExtendedIdAsync(This,__extendedPropertyIdSize,extendedPropertyId,__propertyValueSize,propertyValue,operation) \
    ( (This)->lpVtbl->SetPropertyByExtendedIdAsync(This,__extendedPropertyIdSize,extendedPropertyId,__propertyValueSize,propertyValue,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult";
/* [object, uuid("088616C2-3A64-4BD5-BD2B-E7C898D2F37A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResultVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGroup[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroup";
/* [object, uuid("7F605B87-4832-4B5F-AE3D-412FAAB37D34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceInfos )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_get_SourceInfos(This,value) \
    ( (This)->lpVtbl->get_SourceInfos(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics";
/* [object, uuid("1C48BFC5-436F-4508-94CF-D5D8B7326445"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FindAllAsync(This,value) \
    ( (This)->lpVtbl->FindAllAsync(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_FromIdAsync(This,id,value) \
    ( (This)->lpVtbl->FromIdAsync(This,id,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMediaFrameSourceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MediaFrameSourceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceInfo[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo";
/* [object, uuid("87BDC9CD-4601-408F-91CF-038318CD0AF3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaStreamType )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceKind )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceGroup )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfoVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_MediaStreamType(This,value) \
    ( (This)->lpVtbl->get_MediaStreamType(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_SourceKind(This,value) \
    ( (This)->lpVtbl->get_SourceKind(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_SourceGroup(This,value) \
    ( (This)->lpVtbl->get_SourceGroup(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_DeviceInformation(This,value) \
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_get_CoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs";
/* [object, uuid("63115E01-CF51-48FD-AAB0-6D693EB48127"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameReader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader";
/* [object, uuid("8D144402-F763-488D-98F2-B437BCF075E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryAcquireLatestFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReaderVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_add_FrameArrived(This,handler,token) \
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_remove_FrameArrived(This,token) \
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_TryAcquireLatestFrame(This,value) \
    ( (This)->lpVtbl->TryAcquireLatestFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_StartAsync(This,operation) \
    ( (This)->lpVtbl->StartAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_StopAsync(This,action) \
    ( (This)->lpVtbl->StopAsync(This,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2";
/* [object, uuid("EF5C8ABD-FC5C-4C6B-9D81-3CB9CC637C26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2Vtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_put_AcquisitionMode(This,value) \
    ( (This)->lpVtbl->put_AcquisitionMode(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_get_AcquisitionMode(This,value) \
    ( (This)->lpVtbl->get_AcquisitionMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.MultiSourceMediaFrameReference
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference";
/* [object, uuid("21964B1A-7FE2-44D6-92E5-298E6D2810E9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetFrameReferenceBySourceId )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
        /* [in] */__RPC__in HSTRING sourceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReferenceVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_TryGetFrameReferenceBySourceId(This,sourceId,value) \
    ( (This)->lpVtbl->TryGetFrameReferenceBySourceId(This,sourceId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Capture.Frames.IVideoMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.VideoMediaFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IVideoMediaFrame[] = L"Windows.Media.Capture.Frames.IVideoMediaFrame";
/* [object, uuid("00DD4CCB-32BD-4FE1-A013-7CC13CF5DBCF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direct3DSurface )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CameraIntrinsics )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InfraredMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepthMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_FrameReference(This,value) \
    ( (This)->lpVtbl->get_FrameReference(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_VideoFormat(This,value) \
    ( (This)->lpVtbl->get_VideoFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_SoftwareBitmap(This,value) \
    ( (This)->lpVtbl->get_SoftwareBitmap(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_Direct3DSurface(This,value) \
    ( (This)->lpVtbl->get_Direct3DSurface(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_CameraIntrinsics(This,value) \
    ( (This)->lpVtbl->get_CameraIntrinsics(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_InfraredMediaFrame(This,value) \
    ( (This)->lpVtbl->get_InfraredMediaFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_get_DepthMediaFrame(This,value) \
    ( (This)->lpVtbl->get_DepthMediaFrame(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_GetVideoFrame(This,value) \
    ( (This)->lpVtbl->GetVideoFrame(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Capture.Frames.IVideoMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Capture.Frames.VideoMediaFrameFormat
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IVideoMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IVideoMediaFrameFormat";
/* [object, uuid("46027FC0-D71B-45C7-8F14-6D9A0AE604E4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaFrameFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepthFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormatVtbl;

interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_get_MediaFrameFormat(This,value) \
    ( (This)->lpVtbl->get_MediaFrameFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_get_DepthFormat(This,value) \
    ( (This)->lpVtbl->get_DepthFormat(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_get_Width(This,value) \
    ( (This)->lpVtbl->get_Width(This,value) )

#define __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_get_Height(This,value) \
    ( (This)->lpVtbl->get_Height(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.BufferMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IBufferMediaFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_BufferMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_BufferMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_BufferMediaFrame[] = L"Windows.Media.Capture.Frames.BufferMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.DepthMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IDepthMediaFrame ** Default Interface **
 *    Windows.Media.Capture.Frames.IDepthMediaFrame2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_DepthMediaFrame[] = L"Windows.Media.Capture.Frames.DepthMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.DepthMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IDepthMediaFrameFormat ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrameFormat_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_DepthMediaFrameFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_DepthMediaFrameFormat[] = L"Windows.Media.Capture.Frames.DepthMediaFrameFormat";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.InfraredMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IInfraredMediaFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_InfraredMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_InfraredMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_InfraredMediaFrame[] = L"Windows.Media.Capture.Frames.InfraredMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameFormat ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameFormat_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameFormat[] = L"Windows.Media.Capture.Frames.MediaFrameFormat";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Capture.Frames.IMediaFrameReader2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReader_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameReader[] = L"Windows.Media.Capture.Frames.MediaFrameReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameReference ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReference_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameReference[] = L"Windows.Media.Capture.Frames.MediaFrameReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSource[] = L"Windows.Media.Capture.Frames.MediaFrameSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceController ** Default Interface **
 *    Windows.Media.Capture.Frames.IMediaFrameSourceController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceController_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceController[] = L"Windows.Media.Capture.Frames.MediaFrameSourceController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult[] = L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGroup_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceGroup[] = L"Windows.Media.Capture.Frames.MediaFrameSourceGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MediaFrameSourceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMediaFrameSourceInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceInfo_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MediaFrameSourceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceInfo[] = L"Windows.Media.Capture.Frames.MediaFrameSourceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Capture.Frames.MultiSourceMediaFrameReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Capture.Frames.MultiSourceMediaFrameReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Capture.Frames.VideoMediaFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IVideoMediaFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_VideoMediaFrame[] = L"Windows.Media.Capture.Frames.VideoMediaFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Capture.Frames.VideoMediaFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Capture.Frames.IVideoMediaFrameFormat ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrameFormat_DEFINED
#define RUNTIMECLASS_Windows_Media_Capture_Frames_VideoMediaFrameFormat_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_VideoMediaFrameFormat[] = L"Windows.Media.Capture.Frames.VideoMediaFrameFormat";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emedia2Ecapture2Eframes_p_h__

#endif // __windows2Emedia2Ecapture2Eframes_h__
