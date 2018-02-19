/* Header file automatically generated from windows.media.mediaproperties.idl */
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
#ifndef __windows2Emedia2Emediaproperties_h__
#define __windows2Emedia2Emediaproperties_h__
#ifndef __windows2Emedia2Emediaproperties_p_h__
#define __windows2Emedia2Emediaproperties_p_h__


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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties ABI::Windows::Media::MediaProperties::IAudioEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingProperties2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 ABI::Windows::Media::MediaProperties::IAudioEncodingProperties2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingPropertiesStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics ABI::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingPropertiesStatics2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 ABI::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingPropertiesWithFormatUserData;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData ABI::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IContainerEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties ABI::Windows::Media::MediaProperties::IContainerEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IH264ProfileIdsStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics ABI::Windows::Media::MediaProperties::IH264ProfileIdsStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IImageEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties ABI::Windows::Media::MediaProperties::IImageEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IImageEncodingPropertiesStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics ABI::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IImageEncodingPropertiesStatics2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 ABI::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfile2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 ABI::Windows::Media::MediaProperties::IMediaEncodingProfile2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfileStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics ABI::Windows::Media::MediaProperties::IMediaEncodingProfileStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfileStatics2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 ABI::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfileStatics3;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 ABI::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties ABI::Windows::Media::MediaProperties::IMediaEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingSubtypesStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics ABI::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingSubtypesStatics2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 ABI::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingSubtypesStatics3;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 ABI::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMpeg2ProfileIdsStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics ABI::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties ABI::Windows::Media::MediaProperties::IVideoEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingProperties2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 ABI::Windows::Media::MediaProperties::IVideoEncodingProperties2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingProperties3;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 ABI::Windows::Media::MediaProperties::IVideoEncodingProperties3

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingProperties4;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 ABI::Windows::Media::MediaProperties::IVideoEncodingProperties4

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingPropertiesStatics;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics ABI::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IVideoEncodingPropertiesStatics2;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 ABI::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class AudioEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("064b6aef-3bd0-5463-8450-72c6169af5d4"))
IIterator<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*, ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.AudioEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t;
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("00939468-25d8-533f-854e-4f20f36c51dc"))
IIterable<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*, ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.AudioEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t;
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7c094aec-c8f3-5f49-99c7-b66d8414200e"))
IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> : IIterator_impl<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.IMediaEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t;
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7fc75d5-3492-5bbb-9b34-dac3e24e79d0"))
IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> : IIterable_impl<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.IMediaEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t;
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class VideoEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("094166ef-ae5f-5315-a3bf-fe54e8c35fcd"))
IIterator<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
//#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("73c7317c-8682-5f81-84a2-30c425fa2d24"))
IIterable<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
//#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64ac506c-ccd0-56cb-b088-b1a36e8755df"))
IVectorView<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*, ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaProperties.AudioEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::MediaProperties::AudioEncodingProperties*> __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t;
#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IAudioEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0f6c3b8b-5818-5cbf-bf26-6616bfc308c4"))
IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> : IVectorView_impl<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaProperties.IMediaEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*> __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t;
#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IMediaEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("04c7baba-04d7-51db-a4e3-5147963ec5ff"))
IVectorView<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*, ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaProperties.VideoEncodingProperties>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::MediaProperties::VideoEncodingProperties*> __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t;
#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
//#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaProperties::IVideoEncodingProperties*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("37296fc1-86da-58a0-90c0-c807bd94395e"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::MediaProperties::MediaEncodingProfile*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::MediaEncodingProfile*, ABI::Windows::Media::MediaProperties::IMediaEncodingProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.MediaProperties.MediaEncodingProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::MediaProperties::MediaEncodingProfile*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::MediaProperties::IMediaEncodingProfile*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::MediaProperties::IMediaEncodingProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d4f86f16-c6cf-57c8-9743-5ec20c31ab79"))
IAsyncOperation<ABI::Windows::Media::MediaProperties::MediaEncodingProfile*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaProperties::MediaEncodingProfile*, ABI::Windows::Media::MediaProperties::IMediaEncodingProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.MediaProperties.MediaEncodingProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::MediaProperties::MediaEncodingProfile*> __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_t;
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::MediaProperties::IMediaEncodingProfile*>
//#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::MediaProperties::IMediaEncodingProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                class AudioStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IAudioStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor ABI::Windows::Media::Core::IAudioStreamDescriptor

#endif // ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a61a11cd-b32e-518b-a6a7-5472cbe00e83"))
IIterator<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a3e2c972-a171-5b94-8389-e983ebc3f3b9"))
IIterable<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("340f4fed-1288-5b89-be7c-c355fe1ce4d9"))
IVectorView<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("45afc129-988c-5f1e-9c17-6e34b917cd1b"))
IVector<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                class VideoStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IVideoStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor ABI::Windows::Media::Core::IVideoStreamDescriptor

#endif // ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("da51ab3c-3c64-545c-a3f4-f9b055aaf7d9"))
IIterator<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3acbf03c-0a79-5823-aaa9-d88bc3f8f594"))
IIterable<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e965c8af-d211-52f0-838b-4637469da7af"))
IVectorView<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1fb064b3-636c-5988-9c97-02a9b76150f6"))
IVector<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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





#ifndef DEF___FIMap_2_GUID_IInspectable_USE
#define DEF___FIMap_2_GUID_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5ee3189c-7dbf-5998-ad07-5414fb82567c"))
IMap<GUID,IInspectable*> : IMap_impl<GUID,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<Guid, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<GUID,IInspectable*> __FIMap_2_GUID_IInspectable_t;
#define __FIMap_2_GUID_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_GUID_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_GUID_IInspectable ABI::Windows::Foundation::Collections::IMap<GUID,IInspectable*>
//#define __FIMap_2_GUID_IInspectable_t ABI::Windows::Foundation::Collections::IMap<GUID,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_GUID_IInspectable_USE */













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
            namespace MediaProperties {
                
                typedef enum AudioEncodingQuality : int AudioEncodingQuality;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaMirroringOptions : unsigned int MediaMirroringOptions;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaPixelFormat : int MediaPixelFormat;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaRotation : int MediaRotation;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum MediaThumbnailFormat : int MediaThumbnailFormat;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum SphericalVideoFrameFormat : int SphericalVideoFrameFormat;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum StereoscopicVideoPackingMode : int StereoscopicVideoPackingMode;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                
                typedef enum VideoEncodingQuality : int VideoEncodingQuality;
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */





























namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class ContainerEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class ImageEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaPropertySet;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaRatio;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */












/*
 *
 * Struct Windows.Media.MediaProperties.AudioEncodingQuality
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum AudioEncodingQuality : int
                {
                    AudioEncodingQuality_Auto = 0,
                    AudioEncodingQuality_High = 1,
                    AudioEncodingQuality_Medium = 2,
                    AudioEncodingQuality_Low = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaMirroringOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, flags, contract] */
                enum MediaMirroringOptions : unsigned int
                {
                    MediaMirroringOptions_None = 0,
                    MediaMirroringOptions_Horizontal = 0x1,
                    MediaMirroringOptions_Vertical = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(MediaMirroringOptions)
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaPixelFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum MediaPixelFormat : int
                {
                    MediaPixelFormat_Nv12 = 0,
                    MediaPixelFormat_Bgra8 = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaRotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum MediaRotation : int
                {
                    MediaRotation_None = 0,
                    MediaRotation_Clockwise90Degrees = 1,
                    MediaRotation_Clockwise180Degrees = 2,
                    MediaRotation_Clockwise270Degrees = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaThumbnailFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum MediaThumbnailFormat : int
                {
                    MediaThumbnailFormat_Bmp = 0,
                    MediaThumbnailFormat_Bgra8 = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.SphericalVideoFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum SphericalVideoFrameFormat : int
                {
                    SphericalVideoFrameFormat_None = 0,
                    SphericalVideoFrameFormat_Unsupported = 1,
                    SphericalVideoFrameFormat_Equirectangular = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.MediaProperties.StereoscopicVideoPackingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum StereoscopicVideoPackingMode : int
                {
                    StereoscopicVideoPackingMode_None = 0,
                    StereoscopicVideoPackingMode_SideBySide = 1,
                    StereoscopicVideoPackingMode_TopBottom = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.MediaProperties.VideoEncodingQuality
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [v1_enum, contract] */
                enum VideoEncodingQuality : int
                {
                    VideoEncodingQuality_Auto = 0,
                    VideoEncodingQuality_HD1080p = 1,
                    VideoEncodingQuality_HD720p = 2,
                    VideoEncodingQuality_Wvga = 3,
                    VideoEncodingQuality_Ntsc = 4,
                    VideoEncodingQuality_Pal = 5,
                    VideoEncodingQuality_Vga = 6,
                    VideoEncodingQuality_Qvga = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    VideoEncodingQuality_Uhd2160p = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    VideoEncodingQuality_Uhd4320p = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("62BC7A16-005C-4B3B-8A0B-0A090E9687F3"), exclusiveto, contract] */
                MIDL_INTERFACE("62BC7A16-005C-4B3B-8A0B-0A090E9687F3")
                IAudioEncodingProperties : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bitrate(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bitrate(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ChannelCount(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SampleRate(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SampleRate(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BitsPerSample(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitsPerSample(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEncodingProperties=_uuidof(IAudioEncodingProperties);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties2[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("C45D54DA-80BD-4C23-80D5-72D4A181E894"), exclusiveto, contract] */
                MIDL_INTERFACE("C45D54DA-80BD-4C23-80D5-72D4A181E894")
                IAudioEncodingProperties2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSpatial(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEncodingProperties2=_uuidof(IAudioEncodingProperties2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("0CAD332C-EBE9-4527-B36D-E42A13CF38DB"), exclusiveto, contract] */
                MIDL_INTERFACE("0CAD332C-EBE9-4527-B36D-E42A13CF38DB")
                IAudioEncodingPropertiesStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateAac(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitrate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateAacAdts(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitrate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateMp3(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitrate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreatePcm(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitsPerSample,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWma(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitrate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEncodingPropertiesStatics=_uuidof(IAudioEncodingPropertiesStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("7489316F-77A0-433D-8ED5-4040280E8665"), exclusiveto, contract] */
                MIDL_INTERFACE("7489316F-77A0-433D-8ED5-4040280E8665")
                IAudioEncodingPropertiesStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateAlac(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitsPerSample,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFlac(
                        /* [in] */UINT32 sampleRate,
                        /* [in] */UINT32 channelCount,
                        /* [in] */UINT32 bitsPerSample,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEncodingPropertiesStatics2=_uuidof(IAudioEncodingPropertiesStatics2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("98F10D79-13EA-49FF-BE70-2673DB69702C"), exclusiveto, contract] */
                MIDL_INTERFACE("98F10D79-13EA-49FF-BE70-2673DB69702C")
                IAudioEncodingPropertiesWithFormatUserData : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetFormatUserData(
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFormatUserData(
                        /* [out] */__RPC__out UINT32 * __valueSize,
                        /* [size_is(, *(__valueSize)), out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioEncodingPropertiesWithFormatUserData=_uuidof(IAudioEncodingPropertiesWithFormatUserData);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IContainerEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ContainerEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IContainerEncodingProperties[] = L"Windows.Media.MediaProperties.IContainerEncodingProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("59AC2A57-B32A-479E-8A61-4B7F2E9E7EA0"), exclusiveto, contract] */
                MIDL_INTERFACE("59AC2A57-B32A-479E-8A61-4B7F2E9E7EA0")
                IContainerEncodingProperties : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IContainerEncodingProperties=_uuidof(IContainerEncodingProperties);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IH264ProfileIdsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.H264ProfileIds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IH264ProfileIdsStatics[] = L"Windows.Media.MediaProperties.IH264ProfileIdsStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("38654CA7-846A-4F97-A2E5-C3A15BBF70FD"), exclusiveto, contract] */
                MIDL_INTERFACE("38654CA7-846A-4F97-A2E5-C3A15BBF70FD")
                IH264ProfileIdsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConstrainedBaseline(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Baseline(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Extended(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Main(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_High(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_High10(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_High422(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_High444(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StereoHigh(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MultiviewHigh(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IH264ProfileIdsStatics=_uuidof(IH264ProfileIdsStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IImageEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ImageEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingProperties[] = L"Windows.Media.MediaProperties.IImageEncodingProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("78625635-F331-4189-B1C3-B48D5AE034F1"), exclusiveto, contract] */
                MIDL_INTERFACE("78625635-F331-4189-B1C3-B48D5AE034F1")
                IImageEncodingProperties : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Width(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Width(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Height(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Height(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageEncodingProperties=_uuidof(IImageEncodingProperties);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IImageEncodingPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ImageEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("257C68DC-8B99-439E-AA59-913A36161297"), exclusiveto, contract] */
                MIDL_INTERFACE("257C68DC-8B99-439E-AA59-913A36161297")
                IImageEncodingPropertiesStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateJpeg(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IImageEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreatePng(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IImageEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateJpegXR(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IImageEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageEncodingPropertiesStatics=_uuidof(IImageEncodingPropertiesStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ImageEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("F6C25B29-3824-46B0-956E-501329E1BE3C"), exclusiveto, contract] */
                MIDL_INTERFACE("F6C25B29-3824-46B0-956E-501329E1BE3C")
                IImageEncodingPropertiesStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateUncompressed(
                        /* [in] */ABI::Windows::Media::MediaProperties::MediaPixelFormat format,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IImageEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateBmp(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IImageEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IImageEncodingPropertiesStatics2=_uuidof(IImageEncodingPropertiesStatics2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("E7DBF5A8-1DB9-4783-876B-3DFE12ACFDB3"), exclusiveto, contract] */
                MIDL_INTERFACE("E7DBF5A8-1DB9-4783-876B-3DFE12ACFDB3")
                IMediaEncodingProfile : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Audio(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Audio(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Video(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Video(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Container(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IContainerEncodingProperties * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Container(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IContainerEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingProfile=_uuidof(IMediaEncodingProfile);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile2[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("349B3E0A-4035-488E-9877-85632865ED10"), exclusiveto, contract] */
                MIDL_INTERFACE("349B3E0A-4035-488E-9877-85632865ED10")
                IMediaEncodingProfile2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetAudioTracks(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAudioTracks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetVideoTracks(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetVideoTracks(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingProfile2=_uuidof(IMediaEncodingProfile2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfileStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("197F352C-2EDE-4A45-A896-817A4854F8FE"), exclusiveto, contract] */
                MIDL_INTERFACE("197F352C-2EDE-4A45-A896-817A4854F8FE")
                IMediaEncodingProfileStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateM4a(
                        /* [in] */ABI::Windows::Media::MediaProperties::AudioEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateMp3(
                        /* [in] */ABI::Windows::Media::MediaProperties::AudioEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWma(
                        /* [in] */ABI::Windows::Media::MediaProperties::AudioEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateMp4(
                        /* [in] */ABI::Windows::Media::MediaProperties::VideoEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWmv(
                        /* [in] */ABI::Windows::Media::MediaProperties::VideoEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingProfileStatics=_uuidof(IMediaEncodingProfileStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfileStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("CE8DE74F-6AF4-4288-8FE2-79ADF1F79A43"), exclusiveto, contract] */
                MIDL_INTERFACE("CE8DE74F-6AF4-4288-8FE2-79ADF1F79A43")
                IMediaEncodingProfileStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWav(
                        /* [in] */ABI::Windows::Media::MediaProperties::AudioEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateAvi(
                        /* [in] */ABI::Windows::Media::MediaProperties::VideoEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingProfileStatics2=_uuidof(IMediaEncodingProfileStatics2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfileStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("90DAC5AA-CF76-4294-A9ED-1A1420F51F6B"), exclusiveto, contract] */
                MIDL_INTERFACE("90DAC5AA-CF76-4294-A9ED-1A1420F51F6B")
                IMediaEncodingProfileStatics3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateAlac(
                        /* [in] */ABI::Windows::Media::MediaProperties::AudioEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFlac(
                        /* [in] */ABI::Windows::Media::MediaProperties::AudioEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateHevc(
                        /* [in] */ABI::Windows::Media::MediaProperties::VideoEncodingQuality quality,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingProfileStatics3=_uuidof(IMediaEncodingProfileStatics3);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProperties[] = L"Windows.Media.MediaProperties.IMediaEncodingProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("B4002AF6-ACD4-4E5A-A24B-5D7498A8B8C4"), contract] */
                MIDL_INTERFACE("B4002AF6-ACD4-4E5A-A24B-5D7498A8B8C4")
                IMediaEncodingProperties : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_GUID_IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subtype(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subtype(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingProperties=_uuidof(IMediaEncodingProperties);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("37B6580E-A171-4464-BA5A-53189E48C1C8"), exclusiveto, contract] */
                MIDL_INTERFACE("37B6580E-A171-4464-BA5A-53189E48C1C8")
                IMediaEncodingSubtypesStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Aac(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AacAdts(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ac3(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AmrNb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AmrWb(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Argb32(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Asf(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Avi(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bgra8(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bmp(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Eac3(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Float(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gif(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_H263(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_H264(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_H264Es(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Hevc(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HevcEs(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Iyuv(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Jpeg(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JpegXr(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mjpg(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mpeg(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mpeg1(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mpeg2(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mp3(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mpeg4(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Nv12(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pcm(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Png(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rgb24(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rgb32(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tiff(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wave(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wma8(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wma9(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wmv3(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wvc1(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Yuy2(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Yv12(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingSubtypesStatics=_uuidof(IMediaEncodingSubtypesStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("4B7CD23D-42FF-4D33-8531-0626BEE4B52D"), exclusiveto, contract] */
                MIDL_INTERFACE("4B7CD23D-42FF-4D33-8531-0626BEE4B52D")
                IMediaEncodingSubtypesStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Vp9(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_L8(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_L16(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_D16(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingSubtypesStatics2=_uuidof(IMediaEncodingSubtypesStatics2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("BA2414E4-883D-464E-A44F-097DA08EF7FF"), exclusiveto, contract] */
                MIDL_INTERFACE("BA2414E4-883D-464E-A44F-097DA08EF7FF")
                IMediaEncodingSubtypesStatics3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Alac(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Flac(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaEncodingSubtypesStatics3=_uuidof(IMediaEncodingSubtypesStatics3);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaRatio
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaRatio
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaRatio[] = L"Windows.Media.MediaProperties.IMediaRatio";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("D2D0FEE5-8929-401D-AC78-7D357E378163"), exclusiveto, contract] */
                MIDL_INTERFACE("D2D0FEE5-8929-401D-AC78-7D357E378163")
                IMediaRatio : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Numerator(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Numerator(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Denominator(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Denominator(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaRatio=_uuidof(IMediaRatio);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.Mpeg2ProfileIds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics[] = L"Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("A461FF85-E57A-4128-9B21-D5331B04235C"), exclusiveto, contract] */
                MIDL_INTERFACE("A461FF85-E57A-4128-9B21-D5331B04235C")
                IMpeg2ProfileIdsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Simple(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Main(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignalNoiseRatioScalable(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpatiallyScalable(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_High(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMpeg2ProfileIdsStatics=_uuidof(IMpeg2ProfileIdsStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("76EE6C9A-37C2-4F2A-880A-1282BBB4373D"), exclusiveto, contract] */
                MIDL_INTERFACE("76EE6C9A-37C2-4F2A-880A-1282BBB4373D")
                IVideoEncodingProperties : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bitrate(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bitrate(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Width(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Width(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Height(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Height(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameRate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelAspectRatio(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaRatio * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEncodingProperties=_uuidof(IVideoEncodingProperties);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties2[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("F743A1EF-D465-4290-A94B-EF0F1528F8E3"), exclusiveto, contract] */
                MIDL_INTERFACE("F743A1EF-D465-4290-A94B-EF0F1528F8E3")
                IVideoEncodingProperties2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetFormatUserData(
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetFormatUserData(
                        /* [out] */__RPC__out UINT32 * __valueSize,
                        /* [size_is(, *(__valueSize)), out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProfileId(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProfileId(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEncodingProperties2=_uuidof(IVideoEncodingProperties2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties3[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("386BCDC4-873A-479F-B3EB-56C1FCBEC6D7"), exclusiveto, contract] */
                MIDL_INTERFACE("386BCDC4-873A-479F-B3EB-56C1FCBEC6D7")
                IVideoEncodingProperties3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StereoscopicVideoPackingMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::StereoscopicVideoPackingMode * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEncodingProperties3=_uuidof(IVideoEncodingProperties3);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties4[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties4";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("724EF014-C10C-40F2-9D72-3EE13B45FA8E"), exclusiveto, contract] */
                MIDL_INTERFACE("724EF014-C10C-40F2-9D72-3EE13B45FA8E")
                IVideoEncodingProperties4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SphericalVideoFrameFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::MediaProperties::SphericalVideoFrameFormat * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEncodingProperties4=_uuidof(IVideoEncodingProperties4);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("3CE14D44-1DC5-43DB-9F38-EBEBF90152CB"), exclusiveto, contract] */
                MIDL_INTERFACE("3CE14D44-1DC5-43DB-9F38-EBEBF90152CB")
                IVideoEncodingPropertiesStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateH264(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateMpeg2(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateUncompressed(
                        /* [in] */__RPC__in HSTRING subtype,
                        /* [in] */UINT32 width,
                        /* [in] */UINT32 height,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEncodingPropertiesStatics=_uuidof(IVideoEncodingPropertiesStatics);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                /* [object, uuid("CF1EBD5D-49FE-4D00-B59A-CFA4DFC51944"), exclusiveto, contract] */
                MIDL_INTERFACE("CF1EBD5D-49FE-4D00-B59A-CFA4DFC51944")
                IVideoEncodingPropertiesStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateHevc(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IVideoEncodingProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVideoEncodingPropertiesStatics2=_uuidof(IVideoEncodingPropertiesStatics2);
                
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.MediaProperties.AudioEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IAudioEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *    Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData
 *    Windows.Media.MediaProperties.IAudioEncodingProperties2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_AudioEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_AudioEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_AudioEncodingProperties[] = L"Windows.Media.MediaProperties.AudioEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.ContainerEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IContainerEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_ContainerEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_ContainerEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_ContainerEncodingProperties[] = L"Windows.Media.MediaProperties.ContainerEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.H264ProfileIds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IH264ProfileIdsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_H264ProfileIds_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_H264ProfileIds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_H264ProfileIds[] = L"Windows.Media.MediaProperties.H264ProfileIds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.ImageEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IImageEncodingPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IImageEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_ImageEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_ImageEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_ImageEncodingProperties[] = L"Windows.Media.MediaProperties.ImageEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaEncodingProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingProfileStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingProfileStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingProfileStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IMediaEncodingProfile ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProfile2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingProfile_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaEncodingProfile[] = L"Windows.Media.MediaProperties.MediaEncodingProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingSubtypes_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingSubtypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaEncodingSubtypes[] = L"Windows.Media.MediaProperties.MediaEncodingSubtypes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaPropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMap_2_GUID,IInspectable ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_GUID_IInspectable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaPropertySet_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaPropertySet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaPropertySet[] = L"Windows.Media.MediaProperties.MediaPropertySet";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaRatio
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IMediaRatio ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaRatio_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaRatio_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaRatio[] = L"Windows.Media.MediaProperties.MediaRatio";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.Mpeg2ProfileIds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_Mpeg2ProfileIds_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_Mpeg2ProfileIds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_Mpeg2ProfileIds[] = L"Windows.Media.MediaProperties.Mpeg2ProfileIds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.VideoEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IVideoEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *    Windows.Media.MediaProperties.IVideoEncodingProperties2
 *    Windows.Media.MediaProperties.IVideoEncodingProperties3
 *    Windows.Media.MediaProperties.IVideoEncodingProperties4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_VideoEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_VideoEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_VideoEncodingProperties[] = L"Windows.Media.MediaProperties.VideoEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef  struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef  struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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



#if !defined(____FIMap_2_GUID_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_GUID_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_GUID_IInspectable __FIMap_2_GUID_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_GUID_IInspectable;

typedef struct __FIMap_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_GUID_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_GUID_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_GUID_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_GUID_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_GUID_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_GUID_IInspectable * This,
        /* [in] */ GUID key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_GUID_IInspectable * This, /* [in] */ GUID key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_GUID_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_GUID_IInspectable * This,
        /* [in] */ GUID key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_GUID_IInspectable * This,/* [in] */ GUID key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    END_INTERFACE
} __FIMap_2_GUID_IInspectableVtbl;

interface __FIMap_2_GUID_IInspectable
{
    CONST_VTBL struct __FIMap_2_GUID_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_GUID_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_GUID_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_GUID_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_GUID_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_GUID_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_GUID_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_GUID_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_GUID_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_GUID_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_GUID_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_GUID_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_GUID_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_GUID_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_GUID_IInspectable_INTERFACE_DEFINED__











#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode;


typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality;














































/*
 *
 * Struct Windows.Media.MediaProperties.AudioEncodingQuality
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality
{
    AudioEncodingQuality_Auto = 0,
    AudioEncodingQuality_High = 1,
    AudioEncodingQuality_Medium = 2,
    AudioEncodingQuality_Low = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaMirroringOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions
{
    MediaMirroringOptions_None = 0,
    MediaMirroringOptions_Horizontal = 0x1,
    MediaMirroringOptions_Vertical = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaPixelFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat
{
    MediaPixelFormat_Nv12 = 0,
    MediaPixelFormat_Bgra8 = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaRotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation
{
    MediaRotation_None = 0,
    MediaRotation_Clockwise90Degrees = 1,
    MediaRotation_Clockwise180Degrees = 2,
    MediaRotation_Clockwise270Degrees = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.MediaThumbnailFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat
{
    MediaThumbnailFormat_Bmp = 0,
    MediaThumbnailFormat_Bgra8 = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaProperties.SphericalVideoFrameFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat
{
    SphericalVideoFrameFormat_None = 0,
    SphericalVideoFrameFormat_Unsupported = 1,
    SphericalVideoFrameFormat_Equirectangular = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.MediaProperties.StereoscopicVideoPackingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode
{
    StereoscopicVideoPackingMode_None = 0,
    StereoscopicVideoPackingMode_SideBySide = 1,
    StereoscopicVideoPackingMode_TopBottom = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.MediaProperties.VideoEncodingQuality
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality
{
    VideoEncodingQuality_Auto = 0,
    VideoEncodingQuality_HD1080p = 1,
    VideoEncodingQuality_HD720p = 2,
    VideoEncodingQuality_Wvga = 3,
    VideoEncodingQuality_Ntsc = 4,
    VideoEncodingQuality_Pal = 5,
    VideoEncodingQuality_Vga = 6,
    VideoEncodingQuality_Qvga = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    VideoEncodingQuality_Uhd2160p = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    VideoEncodingQuality_Uhd4320p = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties";
/* [object, uuid("62BC7A16-005C-4B3B-8A0B-0A090E9687F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ChannelCount )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelCount )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SampleRate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SampleRate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BitsPerSample )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitsPerSample )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_put_Bitrate(This,value) \
    ( (This)->lpVtbl->put_Bitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_get_Bitrate(This,value) \
    ( (This)->lpVtbl->get_Bitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_put_ChannelCount(This,value) \
    ( (This)->lpVtbl->put_ChannelCount(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_get_ChannelCount(This,value) \
    ( (This)->lpVtbl->get_ChannelCount(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_put_SampleRate(This,value) \
    ( (This)->lpVtbl->put_SampleRate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_get_SampleRate(This,value) \
    ( (This)->lpVtbl->get_SampleRate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_put_BitsPerSample(This,value) \
    ( (This)->lpVtbl->put_BitsPerSample(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_get_BitsPerSample(This,value) \
    ( (This)->lpVtbl->get_BitsPerSample(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties2[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties2";
/* [object, uuid("C45D54DA-80BD-4C23-80D5-72D4A181E894"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSpatial )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_get_IsSpatial(This,value) \
    ( (This)->lpVtbl->get_IsSpatial(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics";
/* [object, uuid("0CAD332C-EBE9-4527-B36D-E42A13CF38DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitrate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAacAdts )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitrate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMp3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitrate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePcm )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitsPerSample,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWma )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitrate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_CreateAac(This,sampleRate,channelCount,bitrate,value) \
    ( (This)->lpVtbl->CreateAac(This,sampleRate,channelCount,bitrate,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_CreateAacAdts(This,sampleRate,channelCount,bitrate,value) \
    ( (This)->lpVtbl->CreateAacAdts(This,sampleRate,channelCount,bitrate,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_CreateMp3(This,sampleRate,channelCount,bitrate,value) \
    ( (This)->lpVtbl->CreateMp3(This,sampleRate,channelCount,bitrate,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_CreatePcm(This,sampleRate,channelCount,bitsPerSample,value) \
    ( (This)->lpVtbl->CreatePcm(This,sampleRate,channelCount,bitsPerSample,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_CreateWma(This,sampleRate,channelCount,bitrate,value) \
    ( (This)->lpVtbl->CreateWma(This,sampleRate,channelCount,bitrate,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2";
/* [object, uuid("7489316F-77A0-433D-8ED5-4040280E8665"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitsPerSample,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
        /* [in] */UINT32 sampleRate,
        /* [in] */UINT32 channelCount,
        /* [in] */UINT32 bitsPerSample,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_CreateAlac(This,sampleRate,channelCount,bitsPerSample,value) \
    ( (This)->lpVtbl->CreateAlac(This,sampleRate,channelCount,bitsPerSample,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_CreateFlac(This,sampleRate,channelCount,bitsPerSample,value) \
    ( (This)->lpVtbl->CreateFlac(This,sampleRate,channelCount,bitsPerSample,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.AudioEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData";
/* [object, uuid("98F10D79-13EA-49FF-BE70-2673DB69702C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserDataVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_SetFormatUserData(This,__valueSize,value) \
    ( (This)->lpVtbl->SetFormatUserData(This,__valueSize,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_GetFormatUserData(This,__valueSize,value) \
    ( (This)->lpVtbl->GetFormatUserData(This,__valueSize,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IContainerEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ContainerEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IContainerEncodingProperties[] = L"Windows.Media.MediaProperties.IContainerEncodingProperties";
/* [object, uuid("59AC2A57-B32A-479E-8A61-4B7F2E9E7EA0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IH264ProfileIdsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.H264ProfileIds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IH264ProfileIdsStatics[] = L"Windows.Media.MediaProperties.IH264ProfileIdsStatics";
/* [object, uuid("38654CA7-846A-4F97-A2E5-C3A15BBF70FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConstrainedBaseline )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Baseline )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Extended )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Main )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_High )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_High10 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_High422 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_High444 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StereoHigh )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MultiviewHigh )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_ConstrainedBaseline(This,value) \
    ( (This)->lpVtbl->get_ConstrainedBaseline(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_Baseline(This,value) \
    ( (This)->lpVtbl->get_Baseline(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_Extended(This,value) \
    ( (This)->lpVtbl->get_Extended(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_Main(This,value) \
    ( (This)->lpVtbl->get_Main(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_High(This,value) \
    ( (This)->lpVtbl->get_High(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_High10(This,value) \
    ( (This)->lpVtbl->get_High10(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_High422(This,value) \
    ( (This)->lpVtbl->get_High422(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_High444(This,value) \
    ( (This)->lpVtbl->get_High444(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_StereoHigh(This,value) \
    ( (This)->lpVtbl->get_StereoHigh(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_get_MultiviewHigh(This,value) \
    ( (This)->lpVtbl->get_MultiviewHigh(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IImageEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ImageEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingProperties[] = L"Windows.Media.MediaProperties.IImageEncodingProperties";
/* [object, uuid("78625635-F331-4189-B1C3-B48D5AE034F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_put_Width(This,value) \
    ( (This)->lpVtbl->put_Width(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_get_Width(This,value) \
    ( (This)->lpVtbl->get_Width(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_put_Height(This,value) \
    ( (This)->lpVtbl->put_Height(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_get_Height(This,value) \
    ( (This)->lpVtbl->get_Height(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IImageEncodingPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ImageEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics";
/* [object, uuid("257C68DC-8B99-439E-AA59-913A36161297"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateJpeg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePng )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateJpegXR )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_CreateJpeg(This,value) \
    ( (This)->lpVtbl->CreateJpeg(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_CreatePng(This,value) \
    ( (This)->lpVtbl->CreatePng(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_CreateJpegXR(This,value) \
    ( (This)->lpVtbl->CreateJpegXR(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.ImageEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2";
/* [object, uuid("F6C25B29-3824-46B0-956E-501329E1BE3C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateUncompressed )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat format,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBmp )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_CreateUncompressed(This,format,value) \
    ( (This)->lpVtbl->CreateUncompressed(This,format,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_CreateBmp(This,value) \
    ( (This)->lpVtbl->CreateBmp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile";
/* [object, uuid("E7DBF5A8-1DB9-4783-876B-3DFE12ACFDB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Audio )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Audio )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Video )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Video )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Container )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_put_Audio(This,value) \
    ( (This)->lpVtbl->put_Audio(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_get_Audio(This,value) \
    ( (This)->lpVtbl->get_Audio(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_put_Video(This,value) \
    ( (This)->lpVtbl->put_Video(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_get_Video(This,value) \
    ( (This)->lpVtbl->get_Video(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_put_Container(This,value) \
    ( (This)->lpVtbl->put_Container(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_get_Container(This,value) \
    ( (This)->lpVtbl->get_Container(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile2[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile2";
/* [object, uuid("349B3E0A-4035-488E-9877-85632865ED10"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAudioTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVideoTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_SetAudioTracks(This,value) \
    ( (This)->lpVtbl->SetAudioTracks(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_GetAudioTracks(This,value) \
    ( (This)->lpVtbl->GetAudioTracks(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_SetVideoTracks(This,value) \
    ( (This)->lpVtbl->SetVideoTracks(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_GetVideoTracks(This,value) \
    ( (This)->lpVtbl->GetVideoTracks(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfileStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics";
/* [object, uuid("197F352C-2EDE-4A45-A896-817A4854F8FE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateM4a )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMp3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWma )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMp4 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWmv )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromFileAsync )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateM4a(This,quality,value) \
    ( (This)->lpVtbl->CreateM4a(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateMp3(This,quality,value) \
    ( (This)->lpVtbl->CreateMp3(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateWma(This,quality,value) \
    ( (This)->lpVtbl->CreateWma(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateMp4(This,quality,value) \
    ( (This)->lpVtbl->CreateMp4(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateWmv(This,quality,value) \
    ( (This)->lpVtbl->CreateWmv(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateFromFileAsync(This,file,operation) \
    ( (This)->lpVtbl->CreateFromFileAsync(This,file,operation) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_CreateFromStreamAsync(This,stream,operation) \
    ( (This)->lpVtbl->CreateFromStreamAsync(This,stream,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfileStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics2";
/* [object, uuid("CE8DE74F-6AF4-4288-8FE2-79ADF1F79A43"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWav )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAvi )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_CreateWav(This,quality,value) \
    ( (This)->lpVtbl->CreateWav(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_CreateAvi(This,quality,value) \
    ( (This)->lpVtbl->CreateAvi(This,quality,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProfileStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics3";
/* [object, uuid("90DAC5AA-CF76-4294-A9ED-1A1420F51F6B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateHevc )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_CreateAlac(This,quality,value) \
    ( (This)->lpVtbl->CreateAlac(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_CreateFlac(This,quality,value) \
    ( (This)->lpVtbl->CreateFlac(This,quality,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_CreateHevc(This,quality,value) \
    ( (This)->lpVtbl->CreateHevc(This,quality,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProperties[] = L"Windows.Media.MediaProperties.IMediaEncodingProperties";
/* [object, uuid("B4002AF6-ACD4-4E5A-A24B-5D7498A8B8C4"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_GUID_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subtype )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subtype )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_put_Subtype(This,value) \
    ( (This)->lpVtbl->put_Subtype(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_get_Subtype(This,value) \
    ( (This)->lpVtbl->get_Subtype(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics";
/* [object, uuid("37B6580E-A171-4464-BA5A-53189E48C1C8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Aac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AacAdts )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ac3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AmrNb )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AmrWb )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Argb32 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Asf )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Avi )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bgra8 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bmp )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Eac3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Float )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gif )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_H263 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_H264 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_H264Es )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Hevc )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HevcEs )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Iyuv )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Jpeg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JpegXr )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mjpg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mpeg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mpeg1 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mpeg2 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mp3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mpeg4 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Nv12 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pcm )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Png )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rgb24 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rgb32 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tiff )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wave )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wma8 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wma9 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wmv3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wvc1 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Yuy2 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Yv12 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Aac(This,value) \
    ( (This)->lpVtbl->get_Aac(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_AacAdts(This,value) \
    ( (This)->lpVtbl->get_AacAdts(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Ac3(This,value) \
    ( (This)->lpVtbl->get_Ac3(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_AmrNb(This,value) \
    ( (This)->lpVtbl->get_AmrNb(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_AmrWb(This,value) \
    ( (This)->lpVtbl->get_AmrWb(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Argb32(This,value) \
    ( (This)->lpVtbl->get_Argb32(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Asf(This,value) \
    ( (This)->lpVtbl->get_Asf(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Avi(This,value) \
    ( (This)->lpVtbl->get_Avi(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Bgra8(This,value) \
    ( (This)->lpVtbl->get_Bgra8(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Bmp(This,value) \
    ( (This)->lpVtbl->get_Bmp(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Eac3(This,value) \
    ( (This)->lpVtbl->get_Eac3(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Float(This,value) \
    ( (This)->lpVtbl->get_Float(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Gif(This,value) \
    ( (This)->lpVtbl->get_Gif(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_H263(This,value) \
    ( (This)->lpVtbl->get_H263(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_H264(This,value) \
    ( (This)->lpVtbl->get_H264(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_H264Es(This,value) \
    ( (This)->lpVtbl->get_H264Es(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Hevc(This,value) \
    ( (This)->lpVtbl->get_Hevc(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_HevcEs(This,value) \
    ( (This)->lpVtbl->get_HevcEs(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Iyuv(This,value) \
    ( (This)->lpVtbl->get_Iyuv(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Jpeg(This,value) \
    ( (This)->lpVtbl->get_Jpeg(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_JpegXr(This,value) \
    ( (This)->lpVtbl->get_JpegXr(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Mjpg(This,value) \
    ( (This)->lpVtbl->get_Mjpg(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Mpeg(This,value) \
    ( (This)->lpVtbl->get_Mpeg(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Mpeg1(This,value) \
    ( (This)->lpVtbl->get_Mpeg1(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Mpeg2(This,value) \
    ( (This)->lpVtbl->get_Mpeg2(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Mp3(This,value) \
    ( (This)->lpVtbl->get_Mp3(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Mpeg4(This,value) \
    ( (This)->lpVtbl->get_Mpeg4(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Nv12(This,value) \
    ( (This)->lpVtbl->get_Nv12(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Pcm(This,value) \
    ( (This)->lpVtbl->get_Pcm(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Png(This,value) \
    ( (This)->lpVtbl->get_Png(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Rgb24(This,value) \
    ( (This)->lpVtbl->get_Rgb24(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Rgb32(This,value) \
    ( (This)->lpVtbl->get_Rgb32(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Tiff(This,value) \
    ( (This)->lpVtbl->get_Tiff(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Wave(This,value) \
    ( (This)->lpVtbl->get_Wave(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Wma8(This,value) \
    ( (This)->lpVtbl->get_Wma8(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Wma9(This,value) \
    ( (This)->lpVtbl->get_Wma9(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Wmv3(This,value) \
    ( (This)->lpVtbl->get_Wmv3(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Wvc1(This,value) \
    ( (This)->lpVtbl->get_Wvc1(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Yuy2(This,value) \
    ( (This)->lpVtbl->get_Yuy2(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_get_Yv12(This,value) \
    ( (This)->lpVtbl->get_Yv12(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2";
/* [object, uuid("4B7CD23D-42FF-4D33-8531-0626BEE4B52D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Vp9 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_L8 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_L16 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_D16 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_get_Vp9(This,value) \
    ( (This)->lpVtbl->get_Vp9(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_get_L8(This,value) \
    ( (This)->lpVtbl->get_L8(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_get_L16(This,value) \
    ( (This)->lpVtbl->get_L16(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_get_D16(This,value) \
    ( (This)->lpVtbl->get_D16(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3";
/* [object, uuid("BA2414E4-883D-464E-A44F-097DA08EF7FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Alac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Flac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_get_Alac(This,value) \
    ( (This)->lpVtbl->get_Alac(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_get_Flac(This,value) \
    ( (This)->lpVtbl->get_Flac(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IMediaRatio
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.MediaRatio
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaRatio[] = L"Windows.Media.MediaProperties.IMediaRatio";
/* [object, uuid("D2D0FEE5-8929-401D-AC78-7D357E378163"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatioVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Numerator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Numerator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Denominator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Denominator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatioVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatioVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_put_Numerator(This,value) \
    ( (This)->lpVtbl->put_Numerator(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_get_Numerator(This,value) \
    ( (This)->lpVtbl->get_Numerator(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_put_Denominator(This,value) \
    ( (This)->lpVtbl->put_Denominator(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_get_Denominator(This,value) \
    ( (This)->lpVtbl->get_Denominator(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.Mpeg2ProfileIds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics[] = L"Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics";
/* [object, uuid("A461FF85-E57A-4128-9B21-D5331B04235C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Simple )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Main )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignalNoiseRatioScalable )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpatiallyScalable )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_High )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_get_Simple(This,value) \
    ( (This)->lpVtbl->get_Simple(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_get_Main(This,value) \
    ( (This)->lpVtbl->get_Main(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_get_SignalNoiseRatioScalable(This,value) \
    ( (This)->lpVtbl->get_SignalNoiseRatioScalable(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_get_SpatiallyScalable(This,value) \
    ( (This)->lpVtbl->get_SpatiallyScalable(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_get_High(This,value) \
    ( (This)->lpVtbl->get_High(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties";
/* [object, uuid("76EE6C9A-37C2-4F2A-880A-1282BBB4373D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameRate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelAspectRatio )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_put_Bitrate(This,value) \
    ( (This)->lpVtbl->put_Bitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_get_Bitrate(This,value) \
    ( (This)->lpVtbl->get_Bitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_put_Width(This,value) \
    ( (This)->lpVtbl->put_Width(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_get_Width(This,value) \
    ( (This)->lpVtbl->get_Width(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_put_Height(This,value) \
    ( (This)->lpVtbl->put_Height(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_get_Height(This,value) \
    ( (This)->lpVtbl->get_Height(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_get_FrameRate(This,value) \
    ( (This)->lpVtbl->get_FrameRate(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_get_PixelAspectRatio(This,value) \
    ( (This)->lpVtbl->get_PixelAspectRatio(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties2[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties2";
/* [object, uuid("F743A1EF-D465-4290-A94B-EF0F1528F8E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProfileId )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProfileId )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_SetFormatUserData(This,__valueSize,value) \
    ( (This)->lpVtbl->SetFormatUserData(This,__valueSize,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_GetFormatUserData(This,__valueSize,value) \
    ( (This)->lpVtbl->GetFormatUserData(This,__valueSize,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_put_ProfileId(This,value) \
    ( (This)->lpVtbl->put_ProfileId(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_get_ProfileId(This,value) \
    ( (This)->lpVtbl->get_ProfileId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties3[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties3";
/* [object, uuid("386BCDC4-873A-479F-B3EB-56C1FCBEC6D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StereoscopicVideoPackingMode )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_get_StereoscopicVideoPackingMode(This,value) \
    ( (This)->lpVtbl->get_StereoscopicVideoPackingMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingProperties4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties4[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties4";
/* [object, uuid("724EF014-C10C-40F2-9D72-3EE13B45FA8E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SphericalVideoFrameFormat )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_get_SphericalVideoFrameFormat(This,value) \
    ( (This)->lpVtbl->get_SphericalVideoFrameFormat(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics";
/* [object, uuid("3CE14D44-1DC5-43DB-9F38-EBEBF90152CB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateH264 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMpeg2 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateUncompressed )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
        /* [in] */__RPC__in HSTRING subtype,
        /* [in] */UINT32 width,
        /* [in] */UINT32 height,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_CreateH264(This,value) \
    ( (This)->lpVtbl->CreateH264(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_CreateMpeg2(This,value) \
    ( (This)->lpVtbl->CreateMpeg2(This,value) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_CreateUncompressed(This,subtype,width,height,value) \
    ( (This)->lpVtbl->CreateUncompressed(This,subtype,width,height,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProperties.VideoEncodingProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2";
/* [object, uuid("CF1EBD5D-49FE-4D00-B59A-CFA4DFC51944"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHevc )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_CreateHevc(This,value) \
    ( (This)->lpVtbl->CreateHevc(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.MediaProperties.AudioEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IAudioEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *    Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData
 *    Windows.Media.MediaProperties.IAudioEncodingProperties2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_AudioEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_AudioEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_AudioEncodingProperties[] = L"Windows.Media.MediaProperties.AudioEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.ContainerEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IContainerEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_ContainerEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_ContainerEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_ContainerEncodingProperties[] = L"Windows.Media.MediaProperties.ContainerEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.H264ProfileIds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IH264ProfileIdsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_H264ProfileIds_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_H264ProfileIds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_H264ProfileIds[] = L"Windows.Media.MediaProperties.H264ProfileIds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.ImageEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IImageEncodingPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IImageEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_ImageEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_ImageEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_ImageEncodingProperties[] = L"Windows.Media.MediaProperties.ImageEncodingProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaEncodingProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingProfileStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingProfileStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingProfileStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IMediaEncodingProfile ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProfile2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingProfile_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaEncodingProfile[] = L"Windows.Media.MediaProperties.MediaEncodingProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaEncodingSubtypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingSubtypes_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaEncodingSubtypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaEncodingSubtypes[] = L"Windows.Media.MediaProperties.MediaEncodingSubtypes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaPropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IMap_2_GUID,IInspectable ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_GUID_IInspectable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaPropertySet_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaPropertySet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaPropertySet[] = L"Windows.Media.MediaProperties.MediaPropertySet";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.MediaRatio
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IMediaRatio ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_MediaRatio_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_MediaRatio_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaRatio[] = L"Windows.Media.MediaProperties.MediaRatio";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.Mpeg2ProfileIds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_Mpeg2ProfileIds_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_Mpeg2ProfileIds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_Mpeg2ProfileIds[] = L"Windows.Media.MediaProperties.Mpeg2ProfileIds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProperties.VideoEncodingProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.MediaProperties.IVideoEncodingProperties ** Default Interface **
 *    Windows.Media.MediaProperties.IMediaEncodingProperties
 *    Windows.Media.MediaProperties.IVideoEncodingProperties2
 *    Windows.Media.MediaProperties.IVideoEncodingProperties3
 *    Windows.Media.MediaProperties.IVideoEncodingProperties4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProperties_VideoEncodingProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProperties_VideoEncodingProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_VideoEncodingProperties[] = L"Windows.Media.MediaProperties.VideoEncodingProperties";
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
#endif // __windows2Emedia2Emediaproperties_p_h__

#endif // __windows2Emedia2Emediaproperties_h__
