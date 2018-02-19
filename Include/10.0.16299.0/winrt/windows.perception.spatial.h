/* Header file automatically generated from windows.perception.spatial.idl */
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
#ifndef __windows2Eperception2Espatial_h__
#define __windows2Eperception2Espatial_h__
#ifndef __windows2Eperception2Espatial_p_h__
#define __windows2Eperception2Espatial_p_h__


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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.RemoteSystems.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchor;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor ABI::Windows::Perception::Spatial::ISpatialAnchor

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchor2;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 ABI::Windows::Perception::Spatial::ISpatialAnchor2

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchorManagerStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics ABI::Windows::Perception::Spatial::ISpatialAnchorManagerStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs ABI::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchorStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics ABI::Windows::Perception::Spatial::ISpatialAnchorStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchorStore;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore ABI::Windows::Perception::Spatial::ISpatialAnchorStore

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialAnchorTransferManagerStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics ABI::Windows::Perception::Spatial::ISpatialAnchorTransferManagerStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialBoundingVolume;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume ABI::Windows::Perception::Spatial::ISpatialBoundingVolume

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialBoundingVolumeStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics ABI::Windows::Perception::Spatial::ISpatialBoundingVolumeStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntity;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity ABI::Windows::Perception::Spatial::ISpatialEntity

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityAddedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs ABI::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityFactory;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory ABI::Windows::Perception::Spatial::ISpatialEntityFactory

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityRemovedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs ABI::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityStore;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore ABI::Windows::Perception::Spatial::ISpatialEntityStore

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityStoreStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics ABI::Windows::Perception::Spatial::ISpatialEntityStoreStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityUpdatedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs ABI::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialEntityWatcher;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher ABI::Windows::Perception::Spatial::ISpatialEntityWatcher

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialLocation;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation ABI::Windows::Perception::Spatial::ISpatialLocation

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialLocator;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator ABI::Windows::Perception::Spatial::ISpatialLocator

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialLocatorAttachedFrameOfReference;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference ABI::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialLocatorPositionalTrackingDeactivatingEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs ABI::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialLocatorStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics ABI::Windows::Perception::Spatial::ISpatialLocatorStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialStageFrameOfReference;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialStageFrameOfReferenceStatics;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReferenceStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                interface ISpatialStationaryFrameOfReference;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference ABI::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialAnchor;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("627298e7-068d-53f6-9154-d7d8d8091463"))
IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::SpatialAnchor*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialAnchor*, ABI::Windows::Perception::Spatial::ISpatialAnchor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Perception.Spatial.SpatialAnchor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::SpatialAnchor*> __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67a5f318-0232-5900-ac7e-5c647d731cbc"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Perception.Spatial.SpatialAnchor>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("55f0fa8a-afd4-5541-a1c3-36f12147d606"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Perception.Spatial.SpatialAnchor>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialBoundingVolume;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_USE
#define DEF___FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb8385c5-0775-5415-8f76-327e6e388ac5"))
IIterator<ABI::Windows::Perception::Spatial::SpatialBoundingVolume*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialBoundingVolume*, ABI::Windows::Perception::Spatial::ISpatialBoundingVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Perception.Spatial.SpatialBoundingVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Perception::Spatial::SpatialBoundingVolume*> __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_t;
#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Perception::Spatial::ISpatialBoundingVolume*>
//#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Perception::Spatial::ISpatialBoundingVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_USE
#define DEF___FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("89e8f1ee-3a2a-5b69-a786-cddcf7456a3a"))
IIterable<ABI::Windows::Perception::Spatial::SpatialBoundingVolume*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialBoundingVolume*, ABI::Windows::Perception::Spatial::ISpatialBoundingVolume*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Perception.Spatial.SpatialBoundingVolume>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Perception::Spatial::SpatialBoundingVolume*> __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_t;
#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Perception::Spatial::ISpatialBoundingVolume*>
//#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Perception::Spatial::ISpatialBoundingVolume*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#define DEF___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2d344564-21b1-5470-b013-488cdde45c48"))
IMapView<HSTRING,ABI::Windows::Perception::Spatial::SpatialAnchor*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialAnchor*, ABI::Windows::Perception::Spatial::ISpatialAnchor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Perception.Spatial.SpatialAnchor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Perception::Spatial::SpatialAnchor*> __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t;
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>
//#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3a950aa3-9c65-586e-af75-1acf07190e90"))
IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> : IAsyncOperationCompletedHandler_impl<__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IMapView`2<String, Windows.Perception.Spatial.SpatialAnchor>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t;
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#define DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bbe07728-da33-52c5-aae0-a5e74cdf0471"))
IAsyncOperation<__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> : IAsyncOperation_impl<__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IMapView`2<String, Windows.Perception.Spatial.SpatialAnchor>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor*> __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t;
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::__FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Perception::Spatial::ISpatialAnchor*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialAnchorStore;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("84c21a3a-037a-503f-8006-ab577b7f6f66"))
IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::SpatialAnchorStore*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialAnchorStore*, ABI::Windows::Perception::Spatial::ISpatialAnchorStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialAnchorStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::SpatialAnchorStore*> __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::ISpatialAnchorStore*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::ISpatialAnchorStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_USE
#define DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1cd05e51-1457-5023-8f5d-fe5e5a953423"))
IAsyncOperation<ABI::Windows::Perception::Spatial::SpatialAnchorStore*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialAnchorStore*, ABI::Windows::Perception::Spatial::ISpatialAnchorStore*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialAnchorStore>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Perception::Spatial::SpatialAnchorStore*> __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_t;
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::ISpatialAnchorStore*>
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::ISpatialAnchorStore*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                enum SpatialPerceptionAccessStatus : int;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6ced54c8-7689-525a-80e1-956a9d85cd83"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b425d126-1069-563f-a863-44a30a8f071d"))
IAsyncOperation<enum ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialStageFrameOfReference;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fbb7e9fb-e49a-54e1-8c83-d1a87e4d2304"))
IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::SpatialStageFrameOfReference*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialStageFrameOfReference*, ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.SpatialStageFrameOfReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::SpatialStageFrameOfReference*> __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_USE
#define DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b4d8b1bf-1d66-5458-a5df-3f4f6c366c58"))
IAsyncOperation<ABI::Windows::Perception::Spatial::SpatialStageFrameOfReference*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialStageFrameOfReference*, ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.SpatialStageFrameOfReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Perception::Spatial::SpatialStageFrameOfReference*> __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_t;
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference*>
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                struct SpatialBoundingBox;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_USE
#define DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ab3274d9-9b82-5396-bb00-d70c539796b3"))
IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingBox> : IReference_impl<struct ABI::Windows::Perception::Spatial::SpatialBoundingBox> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialBoundingBox>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingBox> __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_t;
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox ABI::Windows::Foundation::__FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingBox>
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_t ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingBox>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_USE */



namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                struct SpatialBoundingFrustum;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_USE
#define DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f434face-0c36-5749-a8a0-0bb6ce78a614"))
IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingFrustum> : IReference_impl<struct ABI::Windows::Perception::Spatial::SpatialBoundingFrustum> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialBoundingFrustum>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingFrustum> __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_t;
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum ABI::Windows::Foundation::__FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingFrustum>
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_t ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingFrustum>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_USE */



namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                struct SpatialBoundingOrientedBox;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_USE
#define DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("09f88309-9f81-5207-bdb2-abef926db18f"))
IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox> : IReference_impl<struct ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialBoundingOrientedBox>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox> __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_t;
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox ABI::Windows::Foundation::__FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox>
//#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_t ABI::Windows::Foundation::IReference<ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_USE */




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialAnchorRawCoordinateSystemAdjustedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fa43f9e4-3558-59c8-9a77-6e8b765adcc8"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialAnchor*,ABI::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialAnchor*, ABI::Windows::Perception::Spatial::ISpatialAnchor*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs*, ABI::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialAnchor, Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialAnchor*,ABI::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialAnchor*,ABI::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialAnchor*,ABI::Windows::Perception::Spatial::ISpatialAnchorRawCoordinateSystemAdjustedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialEntityWatcher;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("50171823-30a9-5938-9f3b-358d86169f2e"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*, ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialEntityWatcher, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,IInspectable*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialEntityAddedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8edae01-6a30-52cc-b543-8abdb26529b4"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,ABI::Windows::Perception::Spatial::SpatialEntityAddedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*, ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityAddedEventArgs*, ABI::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialEntityWatcher, Windows.Perception.Spatial.SpatialEntityAddedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,ABI::Windows::Perception::Spatial::SpatialEntityAddedEventArgs*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,ABI::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,ABI::Windows::Perception::Spatial::ISpatialEntityAddedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialEntityRemovedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("36f982ad-eaa2-5263-861e-2acf030c9e17"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,ABI::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*, ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs*, ABI::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialEntityWatcher, Windows.Perception.Spatial.SpatialEntityRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,ABI::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,ABI::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,ABI::Windows::Perception::Spatial::ISpatialEntityRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialEntityUpdatedEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a15fd0c0-8a0a-5a7d-897a-f206cc509190"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,ABI::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*, ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs*, ABI::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialEntityWatcher, Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialEntityWatcher*,ABI::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,ABI::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialEntityWatcher*,ABI::Windows::Perception::Spatial::ISpatialEntityUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialLocator;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dbb08ab5-6b40-55fb-83d3-50d5373a3b20"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialLocator*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialLocator*, ABI::Windows::Perception::Spatial::ISpatialLocator*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialLocator, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialLocator*,IInspectable*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialLocator*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialLocator*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialLocatorPositionalTrackingDeactivatingEventArgs;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("34bf236c-e5d6-501f-8693-bc1d8d431d7e"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialLocator*,ABI::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialLocator*, ABI::Windows::Perception::Spatial::ISpatialLocator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs*, ABI::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.SpatialLocator, Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::SpatialLocator*,ABI::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialLocator*,ABI::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::ISpatialLocator*,ABI::Windows::Perception::Spatial::ISpatialLocatorPositionalTrackingDeactivatingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


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
        namespace Foundation {
            namespace Numerics {
                struct Matrix4x4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE
#define DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dacbffdc-68ef-5fd0-b657-782d0ac9807e"))
IReference<struct ABI::Windows::Foundation::Numerics::Matrix4x4> : IReference_impl<struct ABI::Windows::Foundation::Numerics::Matrix4x4> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Numerics::Matrix4x4> __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t;
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Matrix4x4>
//#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Numerics::Matrix4x4>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_USE */





#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */




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





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIReference_1_double_USE
#define DEF___FIReference_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2"))
IReference<double> : IReference_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<double> __FIReference_1_double_t;
#define __FIReference_1_double ABI::Windows::Foundation::__FIReference_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_double ABI::Windows::Foundation::IReference<DOUBLE>
//#define __FIReference_1_double_t ABI::Windows::Foundation::IReference<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_double_USE */





#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */

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
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Plane Plane;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Perception {
            class PerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp ABI::Windows::Perception::IPerceptionTimestamp

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream ABI::Windows::Storage::Streams::IInputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IOutputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream ABI::Windows::Storage::Streams::IOutputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                class RemoteSystemSession;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteSystems {
                interface IRemoteSystemSession;
            } /* Windows */
        } /* System */
    } /* RemoteSystems */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession ABI::Windows::System::RemoteSystems::IRemoteSystemSession

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef enum SpatialEntityWatcherStatus : int SpatialEntityWatcherStatus;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef enum SpatialLocatability : int SpatialLocatability;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef enum SpatialLookDirectionRange : int SpatialLookDirectionRange;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef enum SpatialMovementRange : int SpatialMovementRange;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef enum SpatialPerceptionAccessStatus : int SpatialPerceptionAccessStatus;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef struct SpatialBoundingBox SpatialBoundingBox;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef struct SpatialBoundingFrustum SpatialBoundingFrustum;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef struct SpatialBoundingOrientedBox SpatialBoundingOrientedBox;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef struct SpatialBoundingSphere SpatialBoundingSphere;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

































namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialCoordinateSystem;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialEntity;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialEntityStore;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialLocation;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialLocatorAttachedFrameOfReference;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialStationaryFrameOfReference;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */










/*
 *
 * Struct Windows.Perception.Spatial.SpatialEntityWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [v1_enum, contract] */
                enum SpatialEntityWatcherStatus : int
                {
                    SpatialEntityWatcherStatus_Created = 0,
                    SpatialEntityWatcherStatus_Started = 1,
                    SpatialEntityWatcherStatus_EnumerationCompleted = 2,
                    SpatialEntityWatcherStatus_Stopping = 3,
                    SpatialEntityWatcherStatus_Stopped = 4,
                    SpatialEntityWatcherStatus_Aborted = 5,
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialLocatability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [v1_enum, contract] */
                enum SpatialLocatability : int
                {
                    SpatialLocatability_Unavailable = 0,
                    SpatialLocatability_OrientationOnly = 1,
                    SpatialLocatability_PositionalTrackingActivating = 2,
                    SpatialLocatability_PositionalTrackingActive = 3,
                    SpatialLocatability_PositionalTrackingInhibited = 4,
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialLookDirectionRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [v1_enum, contract] */
                enum SpatialLookDirectionRange : int
                {
                    SpatialLookDirectionRange_ForwardOnly = 0,
                    SpatialLookDirectionRange_Omnidirectional = 1,
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialMovementRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [v1_enum, contract] */
                enum SpatialMovementRange : int
                {
                    SpatialMovementRange_NoMovement = 0,
                    SpatialMovementRange_Bounded = 1,
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialPerceptionAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [v1_enum, contract] */
                enum SpatialPerceptionAccessStatus : int
                {
                    SpatialPerceptionAccessStatus_Unspecified = 0,
                    SpatialPerceptionAccessStatus_Allowed = 1,
                    SpatialPerceptionAccessStatus_DeniedByUser = 2,
                    SpatialPerceptionAccessStatus_DeniedBySystem = 3,
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [contract] */
                struct SpatialBoundingBox
                {
                    ABI::Windows::Foundation::Numerics::Vector3 Center;
                    ABI::Windows::Foundation::Numerics::Vector3 Extents;
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingFrustum
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [contract] */
                struct SpatialBoundingFrustum
                {
                    ABI::Windows::Foundation::Numerics::Plane Near;
                    ABI::Windows::Foundation::Numerics::Plane Far;
                    ABI::Windows::Foundation::Numerics::Plane Right;
                    ABI::Windows::Foundation::Numerics::Plane Left;
                    ABI::Windows::Foundation::Numerics::Plane Top;
                    ABI::Windows::Foundation::Numerics::Plane Bottom;
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingOrientedBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [contract] */
                struct SpatialBoundingOrientedBox
                {
                    ABI::Windows::Foundation::Numerics::Vector3 Center;
                    ABI::Windows::Foundation::Numerics::Vector3 Extents;
                    ABI::Windows::Foundation::Numerics::Quaternion Orientation;
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingSphere
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [contract] */
                struct SpatialBoundingSphere
                {
                    ABI::Windows::Foundation::Numerics::Vector3 Center;
                    FLOAT Radius;
                };
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchor[] = L"Windows.Perception.Spatial.ISpatialAnchor";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("0529E5CE-1D34-3702-BCEC-EABFF578A869"), exclusiveto, contract] */
                MIDL_INTERFACE("0529E5CE-1D34-3702-BCEC-EABFF578A869")
                ISpatialAnchor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoordinateSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawCoordinateSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RawCoordinateSystemAdjusted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RawCoordinateSystemAdjusted(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchor=_uuidof(ISpatialAnchor);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchor2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchor2[] = L"Windows.Perception.Spatial.ISpatialAnchor2";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("ED17C908-A695-4CF6-92FD-97263BA71047"), exclusiveto, contract] */
                MIDL_INTERFACE("ED17C908-A695-4CF6-92FD-97263BA71047")
                ISpatialAnchor2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemovedByUser(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchor2=_uuidof(ISpatialAnchor2);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorManagerStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("88E30EAB-F3B7-420B-B086-8A80C07D910D"), exclusiveto, contract] */
                MIDL_INTERFACE("88E30EAB-F3B7-420B-B086-8A80C07D910D")
                ISpatialAnchorManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestStoreAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchorManagerStatics=_uuidof(ISpatialAnchorManagerStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs[] = L"Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("A1E81EB8-56C7-3117-A2E4-81E0FCF28E00"), exclusiveto, contract] */
                MIDL_INTERFACE("A1E81EB8-56C7-3117-A2E4-81E0FCF28E00")
                ISpatialAnchorRawCoordinateSystemAdjustedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Matrix4x4 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs=_uuidof(ISpatialAnchorRawCoordinateSystemAdjustedEventArgs);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("A9928642-0174-311C-AE79-0E5107669F16"), exclusiveto, contract] */
                MIDL_INTERFACE("A9928642-0174-311C-AE79-0E5107669F16")
                ISpatialAnchorStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryCreateRelativeTo(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryCreateWithPositionRelativeTo(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryCreateWithPositionAndOrientationRelativeTo(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion orientation,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchorStatics=_uuidof(ISpatialAnchorStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorStore[] = L"Windows.Perception.Spatial.ISpatialAnchorStore";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("B0BC3636-486A-3CB0-9E6F-1245165C4DB6"), exclusiveto, contract] */
                MIDL_INTERFACE("B0BC3636-486A-3CB0-9E6F-1245165C4DB6")
                ISpatialAnchorStore : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAllSavedAnchors(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TrySave(
                        /* [in] */__RPC__in HSTRING id,
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * anchor,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Remove(
                        /* [in] */__RPC__in HSTRING id
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchorStore=_uuidof(ISpatialAnchorStore);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("03BBF9B9-12D8-4BCE-8835-C5DF3AC0ADAB"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("03BBF9B9-12D8-4BCE-8835-C5DF3AC0ADAB")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                ISpatialAnchorTransferManagerStatics : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE TryImportAnchorsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * * operation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE TryExportAnchorsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * anchors,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * stream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialAnchorTransferManagerStatics=_uuidof(ISpatialAnchorTransferManagerStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialBoundingVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialBoundingVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialBoundingVolume[] = L"Windows.Perception.Spatial.ISpatialBoundingVolume";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("FB2065DA-68C3-33DF-B7AF-4C787207999C"), exclusiveto, contract] */
                MIDL_INTERFACE("FB2065DA-68C3-33DF-B7AF-4C787207999C")
                ISpatialBoundingVolume : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialBoundingVolume=_uuidof(ISpatialBoundingVolume);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialBoundingVolumeStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialBoundingVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics[] = L"Windows.Perception.Spatial.ISpatialBoundingVolumeStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("05889117-B3E1-36D8-B017-566181A5B196"), exclusiveto, contract] */
                MIDL_INTERFACE("05889117-B3E1-36D8-B017-566181A5B196")
                ISpatialBoundingVolumeStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromBox(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Perception::Spatial::SpatialBoundingBox box,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialBoundingVolume * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromOrientedBox(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Perception::Spatial::SpatialBoundingOrientedBox box,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialBoundingVolume * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromSphere(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Perception::Spatial::SpatialBoundingSphere sphere,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialBoundingVolume * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromFrustum(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [in] */ABI::Windows::Perception::Spatial::SpatialBoundingFrustum frustum,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialBoundingVolume * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialBoundingVolumeStatics=_uuidof(ISpatialBoundingVolumeStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialCoordinateSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialCoordinateSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialCoordinateSystem[] = L"Windows.Perception.Spatial.ISpatialCoordinateSystem";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("69EBCA4B-60A3-3586-A653-59A7BD676D07"), exclusiveto, contract] */
                MIDL_INTERFACE("69EBCA4B-60A3-3586-A653-59A7BD676D07")
                ISpatialCoordinateSystem : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryGetTransformTo(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * target,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialCoordinateSystem=_uuidof(ISpatialCoordinateSystem);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntity[] = L"Windows.Perception.Spatial.ISpatialEntity";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("166DE955-E1EB-454C-BA08-E6C0668DDC65"), exclusiveto, contract] */
                MIDL_INTERFACE("166DE955-E1EB-454C-BA08-E6C0668DDC65")
                ISpatialEntity : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Anchor(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntity=_uuidof(ISpatialEntity);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityAddedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("A397F49B-156A-4707-AC2C-D31D570ED399"), exclusiveto, contract] */
                MIDL_INTERFACE("A397F49B-156A-4707-AC2C-D31D570ED399")
                ISpatialEntityAddedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Entity(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntity * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityAddedEventArgs=_uuidof(ISpatialEntityAddedEventArgs);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityFactory[] = L"Windows.Perception.Spatial.ISpatialEntityFactory";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("E1F1E325-349F-4225-A2F3-4B01C15FE056"), exclusiveto, contract] */
                MIDL_INTERFACE("E1F1E325-349F-4225-A2F3-4B01C15FE056")
                ISpatialEntityFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSpatialAnchor(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * spatialAnchor,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntity * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSpatialAnchorAndProperties(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialAnchor * spatialAnchor,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * propertySet,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntity * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityFactory=_uuidof(ISpatialEntityFactory);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("91741800-536D-4E9F-ABF6-415B5444D651"), exclusiveto, contract] */
                MIDL_INTERFACE("91741800-536D-4E9F-ABF6-415B5444D651")
                ISpatialEntityRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Entity(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntity * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityRemovedEventArgs=_uuidof(ISpatialEntityRemovedEventArgs);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityStore[] = L"Windows.Perception.Spatial.ISpatialEntityStore";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("329788BA-E513-4F06-889D-1BE30ECF43E6"), exclusiveto, contract] */
                MIDL_INTERFACE("329788BA-E513-4F06-889D-1BE30ECF43E6")
                ISpatialEntityStore : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialEntity * entity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialEntity * entity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateEntityWatcher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntityWatcher * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityStore=_uuidof(ISpatialEntityStore);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityStoreStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityStoreStatics[] = L"Windows.Perception.Spatial.ISpatialEntityStoreStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("6B4B389E-7C50-4E92-8A62-4D1D4B7CCD3E"), exclusiveto, contract] */
                MIDL_INTERFACE("6B4B389E-7C50-4E92-8A62-4D1D4B7CCD3E")
                ISpatialEntityStoreStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryGetForRemoteSystemSession(
                        /* [in] */__RPC__in_opt ABI::Windows::System::RemoteSystems::IRemoteSystemSession * session,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntityStore * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityStoreStatics=_uuidof(ISpatialEntityStoreStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("E5671766-627B-43CB-A49F-B3BE6D47DEED"), exclusiveto, contract] */
                MIDL_INTERFACE("E5671766-627B-43CB-A49F-B3BE6D47DEED")
                ISpatialEntityUpdatedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Entity(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialEntity * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityUpdatedEventArgs=_uuidof(ISpatialEntityUpdatedEventArgs);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityWatcher[] = L"Windows.Perception.Spatial.ISpatialEntityWatcher";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("B3B85FA0-6D5E-4BBC-805D-5FE5B9BA1959"), exclusiveto, contract] */
                MIDL_INTERFACE("B3B85FA0-6D5E-4BBC-805D-5FE5B9BA1959")
                ISpatialEntityWatcher : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Perception::Spatial::SpatialEntityWatcherStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Updated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Updated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnumerationCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnumerationCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialEntityWatcher=_uuidof(ISpatialEntityWatcher);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocation[] = L"Windows.Perception.Spatial.ISpatialLocation";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("1D81D29D-24A1-37D5-8FA1-39B4F9AD67E2"), exclusiveto, contract] */
                MIDL_INTERFACE("1D81D29D-24A1-37D5-8FA1-39B4F9AD67E2")
                ISpatialLocation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AbsoluteLinearVelocity(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AbsoluteLinearAcceleration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AbsoluteAngularVelocity(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AbsoluteAngularAcceleration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialLocation=_uuidof(ISpatialLocation);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocator[] = L"Windows.Perception.Spatial.ISpatialLocator";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("F6478925-9E0C-3BB6-997E-B64ECCA24CF4"), exclusiveto, contract] */
                MIDL_INTERFACE("F6478925-9E0C-3BB6-997E-B64ECCA24CF4")
                ISpatialLocator : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Locatability(
                        /* [retval, out] */__RPC__out ABI::Windows::Perception::Spatial::SpatialLocatability * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LocatabilityChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LocatabilityChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PositionalTrackingDeactivating(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PositionalTrackingDeactivating(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryLocateAtTimestamp(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::IPerceptionTimestamp * timestamp,
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocation * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAttachedFrameOfReferenceAtCurrentHeading(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 relativePosition,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 relativePosition,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion relativeOrientation,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 relativePosition,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion relativeOrientation,
                        /* [in] */DOUBLE relativeHeadingInRadians,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocatorAttachedFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateStationaryFrameOfReferenceAtCurrentLocation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 relativePosition,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 relativePosition,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion relativeOrientation,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 relativePosition,
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion relativeOrientation,
                        /* [in] */DOUBLE relativeHeadingInRadians,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialStationaryFrameOfReference * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialLocator=_uuidof(ISpatialLocator);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("E1774EF6-1F4F-499C-9625-EF5E6ED7A048"), exclusiveto, contract] */
                MIDL_INTERFACE("E1774EF6-1F4F-499C-9625-EF5E6ED7A048")
                ISpatialLocatorAttachedFrameOfReference : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelativePosition(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelativePosition(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelativeOrientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelativeOrientation(
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AdjustHeading(
                        /* [in] */DOUBLE headingOffsetInRadians
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetStationaryCoordinateSystemAtTimestamp(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::IPerceptionTimestamp * timestamp,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetRelativeHeadingAtTimestamp(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::IPerceptionTimestamp * timestamp,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialLocatorAttachedFrameOfReference=_uuidof(ISpatialLocatorAttachedFrameOfReference);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs[] = L"Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("B8A84063-E3F4-368B-9061-9EA9D1D6CC16"), exclusiveto, contract] */
                MIDL_INTERFACE("B8A84063-E3F4-368B-9061-9EA9D1D6CC16")
                ISpatialLocatorPositionalTrackingDeactivatingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Canceled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Canceled(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialLocatorPositionalTrackingDeactivatingEventArgs=_uuidof(ISpatialLocatorPositionalTrackingDeactivatingEventArgs);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocatorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorStatics[] = L"Windows.Perception.Spatial.ISpatialLocatorStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("B76E3340-A7C2-361B-BB82-56E93B89B1BB"), exclusiveto, contract] */
                MIDL_INTERFACE("B76E3340-A7C2-361B-BB82-56E93B89B1BB")
                ISpatialLocatorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialLocator * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialLocatorStatics=_uuidof(ISpatialLocatorStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialStageFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialStageFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStageFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialStageFrameOfReference";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("7A8A3464-AD0D-4590-AB86-33062B674926"), exclusiveto, contract] */
                MIDL_INTERFACE("7A8A3464-AD0D-4590-AB86-33062B674926")
                ISpatialStageFrameOfReference : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoordinateSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MovementRange(
                        /* [retval, out] */__RPC__out ABI::Windows::Perception::Spatial::SpatialMovementRange * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LookDirectionRange(
                        /* [retval, out] */__RPC__out ABI::Windows::Perception::Spatial::SpatialLookDirectionRange * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCoordinateSystemAtCurrentLocation(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialLocator * locator,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryGetMovementBounds(
                        /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                        /* [out] */__RPC__out UINT32 * __valueSize,
                        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) ABI::Windows::Foundation::Numerics::Vector3 * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialStageFrameOfReference=_uuidof(ISpatialStageFrameOfReference);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialStageFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics[] = L"Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("F78D5C4D-A0A4-499C-8D91-A8C965D40654"), exclusiveto, contract] */
                MIDL_INTERFACE("F78D5C4D-A0A4-499C-8D91-A8C965D40654")
                ISpatialStageFrameOfReferenceStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialStageFrameOfReference * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CurrentChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CurrentChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestNewStageAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialStageFrameOfReferenceStatics=_uuidof(ISpatialStageFrameOfReferenceStatics);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialStationaryFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialStationaryFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialStationaryFrameOfReference";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                /* [object, uuid("09DBCCB9-BCF8-3E7F-BE7E-7EDCCBB178A8"), exclusiveto, contract] */
                MIDL_INTERFACE("09DBCCB9-BCF8-3E7F-BE7E-7EDCCBB178A8")
                ISpatialStationaryFrameOfReference : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoordinateSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpatialStationaryFrameOfReference=_uuidof(ISpatialStationaryFrameOfReference);
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialAnchorStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialAnchor ** Default Interface **
 *    Windows.Perception.Spatial.ISpatialAnchor2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchor_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchor[] = L"Windows.Perception.Spatial.SpatialAnchor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialAnchorManagerStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorManager_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorManager[] = L"Windows.Perception.Spatial.SpatialAnchorManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs[] = L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialAnchorStore ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorStore_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorStore[] = L"Windows.Perception.Spatial.SpatialAnchorStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorTransferManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorTransferManager_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorTransferManager_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorTransferManager[] = L"Windows.Perception.Spatial.SpatialAnchorTransferManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialBoundingVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialBoundingVolumeStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialBoundingVolume ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialBoundingVolume_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialBoundingVolume_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialBoundingVolume[] = L"Windows.Perception.Spatial.SpatialBoundingVolume";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialCoordinateSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialCoordinateSystem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialCoordinateSystem_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialCoordinateSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialCoordinateSystem[] = L"Windows.Perception.Spatial.SpatialCoordinateSystem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Perception.Spatial.ISpatialEntityFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntity ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntity_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntity[] = L"Windows.Perception.Spatial.SpatialEntity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityAddedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialEntityStoreStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityStore ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityStore_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityStore[] = L"Windows.Perception.Spatial.SpatialEntityStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityWatcher_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityWatcher[] = L"Windows.Perception.Spatial.SpatialEntityWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocation_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocation[] = L"Windows.Perception.Spatial.SpatialLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialLocatorStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocator ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocator_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocator[] = L"Windows.Perception.Spatial.SpatialLocator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference[] = L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs[] = L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialStageFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialStageFrameOfReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialStageFrameOfReference_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialStageFrameOfReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialStageFrameOfReference[] = L"Windows.Perception.Spatial.SpatialStageFrameOfReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialStationaryFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialStationaryFrameOfReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialStationaryFrameOfReference_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialStationaryFrameOfReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialStationaryFrameOfReference[] = L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;

typedef struct __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl;

interface __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume
{
    CONST_VTBL struct __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;

typedef  struct __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume **first);

    END_INTERFACE
} __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl;

interface __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume
{
    CONST_VTBL struct __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

typedef struct __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;

interface __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;

typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;

interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;

typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl;

interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;

typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl;

interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;

#if !defined(____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;

typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl;

interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;

#if !defined(____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;

typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl;

interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox;

#if !defined(____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox;

typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBoxVtbl;

interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

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


struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;

#if !defined(____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;

typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl;

interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4_INTERFACE_DEFINED__



#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


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



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIReference_1_double_INTERFACE_DEFINED__)
#define ____FIReference_1_double_INTERFACE_DEFINED__

typedef interface __FIReference_1_double __FIReference_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_double;

typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, /* [retval][out] */ __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;

interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_double_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_double_INTERFACE_DEFINED__



#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane __x_ABI_CWindows_CFoundation_CNumerics_CPlane;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;







#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;

#endif // ____x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus;


typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability;


typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange;


typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange;


typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus;


typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;


typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;


typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox;


typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere;






















































/*
 *
 * Struct Windows.Perception.Spatial.SpatialEntityWatcherStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus
{
    SpatialEntityWatcherStatus_Created = 0,
    SpatialEntityWatcherStatus_Started = 1,
    SpatialEntityWatcherStatus_EnumerationCompleted = 2,
    SpatialEntityWatcherStatus_Stopping = 3,
    SpatialEntityWatcherStatus_Stopped = 4,
    SpatialEntityWatcherStatus_Aborted = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialLocatability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability
{
    SpatialLocatability_Unavailable = 0,
    SpatialLocatability_OrientationOnly = 1,
    SpatialLocatability_PositionalTrackingActivating = 2,
    SpatialLocatability_PositionalTrackingActive = 3,
    SpatialLocatability_PositionalTrackingInhibited = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialLookDirectionRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange
{
    SpatialLookDirectionRange_ForwardOnly = 0,
    SpatialLookDirectionRange_Omnidirectional = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialMovementRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange
{
    SpatialMovementRange_NoMovement = 0,
    SpatialMovementRange_Bounded = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialPerceptionAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus
{
    SpatialPerceptionAccessStatus_Unspecified = 0,
    SpatialPerceptionAccessStatus_Allowed = 1,
    SpatialPerceptionAccessStatus_DeniedByUser = 2,
    SpatialPerceptionAccessStatus_DeniedBySystem = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Center;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Extents;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingFrustum
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum
{
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Near;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Far;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Right;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Left;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Top;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Bottom;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingOrientedBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Center;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Extents;
    __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion Orientation;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Perception.Spatial.SpatialBoundingSphere
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

/* [contract] */
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Center;
    FLOAT Radius;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchor[] = L"Windows.Perception.Spatial.ISpatialAnchor";
/* [object, uuid("0529E5CE-1D34-3702-BCEC-EABFF578A869"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawCoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RawCoordinateSystemAdjusted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RawCoordinateSystemAdjusted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_get_CoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_get_RawCoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_RawCoordinateSystem(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_add_RawCoordinateSystemAdjusted(This,handler,cookie) \
    ( (This)->lpVtbl->add_RawCoordinateSystemAdjusted(This,handler,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_remove_RawCoordinateSystemAdjusted(This,cookie) \
    ( (This)->lpVtbl->remove_RawCoordinateSystemAdjusted(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchor2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchor2[] = L"Windows.Perception.Spatial.ISpatialAnchor2";
/* [object, uuid("ED17C908-A695-4CF6-92FD-97263BA71047"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemovedByUser )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2Vtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_get_RemovedByUser(This,value) \
    ( (This)->lpVtbl->get_RemovedByUser(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorManagerStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorManagerStatics";
/* [object, uuid("88E30EAB-F3B7-420B-B086-8A80C07D910D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_RequestStoreAsync(This,value) \
    ( (This)->lpVtbl->RequestStoreAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs[] = L"Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs";
/* [object, uuid("A1E81EB8-56C7-3117-A2E4-81E0FCF28E00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(This,value) \
    ( (This)->lpVtbl->get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorStatics";
/* [object, uuid("A9928642-0174-311C-AE79-0E5107669F16"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *TryCreateRelativeTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryCreateWithPositionRelativeTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryCreateWithPositionAndOrientationRelativeTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_TryCreateRelativeTo(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryCreateRelativeTo(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_TryCreateWithPositionRelativeTo(This,coordinateSystem,position,value) \
    ( (This)->lpVtbl->TryCreateWithPositionRelativeTo(This,coordinateSystem,position,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_TryCreateWithPositionAndOrientationRelativeTo(This,coordinateSystem,position,orientation,value) \
    ( (This)->lpVtbl->TryCreateWithPositionAndOrientationRelativeTo(This,coordinateSystem,position,orientation,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorStore[] = L"Windows.Perception.Spatial.ISpatialAnchorStore";
/* [object, uuid("B0BC3636-486A-3CB0-9E6F-1245165C4DB6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAllSavedAnchors )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySave )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * anchor,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
        /* [in] */__RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStoreVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_GetAllSavedAnchors(This,value) \
    ( (This)->lpVtbl->GetAllSavedAnchors(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_TrySave(This,id,anchor,succeeded) \
    ( (This)->lpVtbl->TrySave(This,id,anchor,succeeded) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_Remove(This,id) \
    ( (This)->lpVtbl->Remove(This,id) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialAnchorTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics";
/* [object, uuid("03BBF9B9-12D8-4BCE-8835-C5DF3AC0ADAB"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *TryImportAnchorsAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * * operation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *TryExportAnchorsAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * anchors,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * stream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_TryImportAnchorsAsync(This,stream,operation) \
    ( (This)->lpVtbl->TryImportAnchorsAsync(This,stream,operation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_TryExportAnchorsAsync(This,anchors,stream,operation) \
    ( (This)->lpVtbl->TryExportAnchorsAsync(This,anchors,stream,operation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_RequestAccessAsync(This,result) \
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialBoundingVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialBoundingVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialBoundingVolume[] = L"Windows.Perception.Spatial.ISpatialBoundingVolume";
/* [object, uuid("FB2065DA-68C3-33DF-B7AF-4C787207999C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialBoundingVolumeStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialBoundingVolume
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics[] = L"Windows.Perception.Spatial.ISpatialBoundingVolumeStatics";
/* [object, uuid("05889117-B3E1-36D8-B017-566181A5B196"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromBox )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox box,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromOrientedBox )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox box,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromSphere )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere sphere,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromFrustum )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [in] */__x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum frustum,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FromBox(This,coordinateSystem,box,value) \
    ( (This)->lpVtbl->FromBox(This,coordinateSystem,box,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FromOrientedBox(This,coordinateSystem,box,value) \
    ( (This)->lpVtbl->FromOrientedBox(This,coordinateSystem,box,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FromSphere(This,coordinateSystem,sphere,value) \
    ( (This)->lpVtbl->FromSphere(This,coordinateSystem,sphere,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_FromFrustum(This,coordinateSystem,frustum,value) \
    ( (This)->lpVtbl->FromFrustum(This,coordinateSystem,frustum,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialCoordinateSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialCoordinateSystem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialCoordinateSystem[] = L"Windows.Perception.Spatial.ISpatialCoordinateSystem";
/* [object, uuid("69EBCA4B-60A3-3586-A653-59A7BD676D07"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetTransformTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * target,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystemVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_TryGetTransformTo(This,target,value) \
    ( (This)->lpVtbl->TryGetTransformTo(This,target,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntity[] = L"Windows.Perception.Spatial.ISpatialEntity";
/* [object, uuid("166DE955-E1EB-454C-BA08-E6C0668DDC65"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Anchor )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_get_Anchor(This,value) \
    ( (This)->lpVtbl->get_Anchor(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityAddedEventArgs";
/* [object, uuid("A397F49B-156A-4707-AC2C-D31D570ED399"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Entity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_get_Entity(This,value) \
    ( (This)->lpVtbl->get_Entity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityFactory[] = L"Windows.Perception.Spatial.ISpatialEntityFactory";
/* [object, uuid("E1F1E325-349F-4225-A2F3-4B01C15FE056"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithSpatialAnchor )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * spatialAnchor,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSpatialAnchorAndProperties )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * spatialAnchor,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * propertySet,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactoryVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_CreateWithSpatialAnchor(This,spatialAnchor,value) \
    ( (This)->lpVtbl->CreateWithSpatialAnchor(This,spatialAnchor,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_CreateWithSpatialAnchorAndProperties(This,spatialAnchor,propertySet,value) \
    ( (This)->lpVtbl->CreateWithSpatialAnchorAndProperties(This,spatialAnchor,propertySet,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs";
/* [object, uuid("91741800-536D-4E9F-ABF6-415B5444D651"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Entity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_get_Entity(This,value) \
    ( (This)->lpVtbl->get_Entity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityStore[] = L"Windows.Perception.Spatial.ISpatialEntityStore";
/* [object, uuid("329788BA-E513-4F06-889D-1BE30ECF43E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * entity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * entity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEntityWatcher )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_SaveAsync(This,entity,action) \
    ( (This)->lpVtbl->SaveAsync(This,entity,action) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_RemoveAsync(This,entity,action) \
    ( (This)->lpVtbl->RemoveAsync(This,entity,action) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_CreateEntityWatcher(This,value) \
    ( (This)->lpVtbl->CreateEntityWatcher(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityStoreStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityStoreStatics[] = L"Windows.Perception.Spatial.ISpatialEntityStoreStatics";
/* [object, uuid("6B4B389E-7C50-4E92-8A62-4D1D4B7CCD3E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryGetForRemoteSystemSession )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * session,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_get_IsSupported(This,value) \
    ( (This)->lpVtbl->get_IsSupported(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_TryGetForRemoteSystemSession(This,session,value) \
    ( (This)->lpVtbl->TryGetForRemoteSystemSession(This,session,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs";
/* [object, uuid("E5671766-627B-43CB-A49F-B3BE6D47DEED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Entity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_get_Entity(This,value) \
    ( (This)->lpVtbl->get_Entity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialEntityWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialEntityWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityWatcher[] = L"Windows.Perception.Spatial.ISpatialEntityWatcher";
/* [object, uuid("B3B85FA0-6D5E-4BBC-805D-5FE5B9BA1959"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcherVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_add_Updated(This,handler,token) \
    ( (This)->lpVtbl->add_Updated(This,handler,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_remove_Updated(This,token) \
    ( (This)->lpVtbl->remove_Updated(This,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_add_EnumerationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_remove_EnumerationCompleted(This,token) \
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocation[] = L"Windows.Perception.Spatial.ISpatialLocation";
/* [object, uuid("1D81D29D-24A1-37D5-8FA1-39B4F9AD67E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AbsoluteLinearVelocity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AbsoluteLinearAcceleration )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AbsoluteAngularVelocity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AbsoluteAngularAcceleration )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocationVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_get_AbsoluteLinearVelocity(This,value) \
    ( (This)->lpVtbl->get_AbsoluteLinearVelocity(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_get_AbsoluteLinearAcceleration(This,value) \
    ( (This)->lpVtbl->get_AbsoluteLinearAcceleration(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_get_AbsoluteAngularVelocity(This,value) \
    ( (This)->lpVtbl->get_AbsoluteAngularVelocity(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_get_AbsoluteAngularAcceleration(This,value) \
    ( (This)->lpVtbl->get_AbsoluteAngularAcceleration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocator[] = L"Windows.Perception.Spatial.ISpatialLocator";
/* [object, uuid("F6478925-9E0C-3BB6-997E-B64ECCA24CF4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Locatability )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LocatabilityChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LocatabilityChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PositionalTrackingDeactivating )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PositionalTrackingDeactivating )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *TryLocateAtTimestamp )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
        /* [in] */DOUBLE relativeHeadingInRadians,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
        /* [in] */DOUBLE relativeHeadingInRadians,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_get_Locatability(This,value) \
    ( (This)->lpVtbl->get_Locatability(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_add_LocatabilityChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_LocatabilityChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_remove_LocatabilityChanged(This,cookie) \
    ( (This)->lpVtbl->remove_LocatabilityChanged(This,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_add_PositionalTrackingDeactivating(This,handler,cookie) \
    ( (This)->lpVtbl->add_PositionalTrackingDeactivating(This,handler,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_remove_PositionalTrackingDeactivating(This,cookie) \
    ( (This)->lpVtbl->remove_PositionalTrackingDeactivating(This,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_TryLocateAtTimestamp(This,timestamp,coordinateSystem,value) \
    ( (This)->lpVtbl->TryLocateAtTimestamp(This,timestamp,coordinateSystem,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateAttachedFrameOfReferenceAtCurrentHeading(This,value) \
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeading(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(This,relativePosition,value) \
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(This,relativePosition,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(This,relativePosition,relativeOrientation,value) \
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(This,relativePosition,relativeOrientation,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(This,relativePosition,relativeOrientation,relativeHeadingInRadians,value) \
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(This,relativePosition,relativeOrientation,relativeHeadingInRadians,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateStationaryFrameOfReferenceAtCurrentLocation(This,value) \
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocation(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(This,relativePosition,value) \
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(This,relativePosition,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(This,relativePosition,relativeOrientation,value) \
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(This,relativePosition,relativeOrientation,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(This,relativePosition,relativeOrientation,relativeHeadingInRadians,value) \
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(This,relativePosition,relativeOrientation,relativeHeadingInRadians,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference";
/* [object, uuid("E1774EF6-1F4F-499C-9625-EF5E6ED7A048"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelativePosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelativePosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelativeOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelativeOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    HRESULT ( STDMETHODCALLTYPE *AdjustHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [in] */DOUBLE headingOffsetInRadians
        );
    HRESULT ( STDMETHODCALLTYPE *GetStationaryCoordinateSystemAtTimestamp )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetRelativeHeadingAtTimestamp )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReferenceVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_get_RelativePosition(This,value) \
    ( (This)->lpVtbl->get_RelativePosition(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_put_RelativePosition(This,value) \
    ( (This)->lpVtbl->put_RelativePosition(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_get_RelativeOrientation(This,value) \
    ( (This)->lpVtbl->get_RelativeOrientation(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_put_RelativeOrientation(This,value) \
    ( (This)->lpVtbl->put_RelativeOrientation(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_AdjustHeading(This,headingOffsetInRadians) \
    ( (This)->lpVtbl->AdjustHeading(This,headingOffsetInRadians) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_GetStationaryCoordinateSystemAtTimestamp(This,timestamp,value) \
    ( (This)->lpVtbl->GetStationaryCoordinateSystemAtTimestamp(This,timestamp,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_TryGetRelativeHeadingAtTimestamp(This,timestamp,value) \
    ( (This)->lpVtbl->TryGetRelativeHeadingAtTimestamp(This,timestamp,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs[] = L"Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs";
/* [object, uuid("B8A84063-E3F4-368B-9061-9EA9D1D6CC16"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Canceled )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Canceled )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_get_Canceled(This,value) \
    ( (This)->lpVtbl->get_Canceled(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_put_Canceled(This,value) \
    ( (This)->lpVtbl->put_Canceled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialLocatorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialLocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorStatics[] = L"Windows.Perception.Spatial.ISpatialLocatorStatics";
/* [object, uuid("B76E3340-A7C2-361B-BB82-56E93B89B1BB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialStageFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialStageFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStageFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialStageFrameOfReference";
/* [object, uuid("7A8A3464-AD0D-4590-AB86-33062B674926"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MovementRange )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LookDirectionRange )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCoordinateSystemAtCurrentLocation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * locator,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetMovementBounds )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_get_CoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_get_MovementRange(This,value) \
    ( (This)->lpVtbl->get_MovementRange(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_get_LookDirectionRange(This,value) \
    ( (This)->lpVtbl->get_LookDirectionRange(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_GetCoordinateSystemAtCurrentLocation(This,locator,result) \
    ( (This)->lpVtbl->GetCoordinateSystemAtCurrentLocation(This,locator,result) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_TryGetMovementBounds(This,coordinateSystem,__valueSize,value) \
    ( (This)->lpVtbl->TryGetMovementBounds(This,coordinateSystem,__valueSize,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialStageFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics[] = L"Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics";
/* [object, uuid("F78D5C4D-A0A4-499C-8D91-A8C965D40654"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CurrentChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CurrentChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewStageAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_add_CurrentChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_CurrentChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_remove_CurrentChanged(This,cookie) \
    ( (This)->lpVtbl->remove_CurrentChanged(This,cookie) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_RequestNewStageAsync(This,result) \
    ( (This)->lpVtbl->RequestNewStageAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Perception.Spatial.ISpatialStationaryFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.SpatialStationaryFrameOfReference
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialStationaryFrameOfReference";
/* [object, uuid("09DBCCB9-BCF8-3E7F-BE7E-7EDCCBB178A8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReferenceVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_get_CoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialAnchorStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialAnchor ** Default Interface **
 *    Windows.Perception.Spatial.ISpatialAnchor2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchor_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchor[] = L"Windows.Perception.Spatial.SpatialAnchor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialAnchorManagerStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorManager_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorManager[] = L"Windows.Perception.Spatial.SpatialAnchorManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs[] = L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialAnchorStore ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorStore_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorStore[] = L"Windows.Perception.Spatial.SpatialAnchorStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialAnchorTransferManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorTransferManager_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialAnchorTransferManager_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorTransferManager[] = L"Windows.Perception.Spatial.SpatialAnchorTransferManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialBoundingVolume
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialBoundingVolumeStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialBoundingVolume ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialBoundingVolume_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialBoundingVolume_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialBoundingVolume[] = L"Windows.Perception.Spatial.SpatialBoundingVolume";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialCoordinateSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialCoordinateSystem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialCoordinateSystem_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialCoordinateSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialCoordinateSystem[] = L"Windows.Perception.Spatial.SpatialCoordinateSystem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Perception.Spatial.ISpatialEntityFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntity ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntity_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntity[] = L"Windows.Perception.Spatial.SpatialEntity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityAddedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityAddedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialEntityStoreStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityStore ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityStore_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityStore[] = L"Windows.Perception.Spatial.SpatialEntityStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialEntityWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialEntityWatcher ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityWatcher_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialEntityWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityWatcher[] = L"Windows.Perception.Spatial.SpatialEntityWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocation_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocation[] = L"Windows.Perception.Spatial.SpatialLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialLocatorStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocator ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocator_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocator[] = L"Windows.Perception.Spatial.SpatialLocator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference[] = L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs[] = L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.SpatialStageFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialStageFrameOfReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialStageFrameOfReference_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialStageFrameOfReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialStageFrameOfReference[] = L"Windows.Perception.Spatial.SpatialStageFrameOfReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.SpatialStationaryFrameOfReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.ISpatialStationaryFrameOfReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_SpatialStationaryFrameOfReference_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_SpatialStationaryFrameOfReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialStationaryFrameOfReference[] = L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eperception2Espatial_p_h__

#endif // __windows2Eperception2Espatial_h__
