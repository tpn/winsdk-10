/* Header file automatically generated from windows.perception.spatial.surfaces.idl */
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
#ifndef __windows2Eperception2Espatial2Esurfaces_h__
#define __windows2Eperception2Espatial2Esurfaces_h__
#ifndef __windows2Eperception2Espatial2Esurfaces_p_h__
#define __windows2Eperception2Espatial2Esurfaces_p_h__


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
#include "Windows.Graphics.DirectX.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceInfo;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceMesh;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceMeshBuffer;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceMeshOptions;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceMeshOptionsStatics;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptionsStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceObserver;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceObserverStatics;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    interface ISpatialSurfaceObserverStatics2;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics2

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    class SpatialSurfaceInfo;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#define DEF___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a6bdf94a-2697-5ff2-89dc-a17cecdcda6c"))
IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo*> : IKeyValuePair_impl<GUID,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo*, ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Guid, Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo*> __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t;
#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>
//#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6d328390-f279-5f39-9682-bba0cd81489b"))
IIterator<__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo*> : IIterator_impl<__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Guid, Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo*> __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t;
#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>*>
//#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("868757d1-be21-51d9-8dee-a958b9deec71"))
IIterable<__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo*> : IIterable_impl<__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Guid, Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo*> __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t;
#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>*>
//#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#define DEF___FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eaa722b9-2859-593d-bb66-0c538e415e71"))
IMapView<GUID,ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo*> : IMapView_impl<GUID,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo*, ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<Guid, Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<GUID,ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceInfo*> __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t;
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::__FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo ABI::Windows::Foundation::Collections::IMapView<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>
//#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_t ABI::Windows::Foundation::Collections::IMapView<GUID,ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    class SpatialSurfaceMesh;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4680f7f6-44c5-5fc6-8d51-d6962915fa23"))
IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh*, ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh*> __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_USE
#define DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f5938fad-a8a1-5f7e-9440-bdb781ad26b6"))
IAsyncOperation<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh*, ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceMesh*> __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_t;
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh*>
//#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    class SpatialSurfaceObserver;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8b31274a-7693-52be-9014-b0f5f65a3539"))
ITypedEventHandler<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver*, ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Perception::Spatial::Surfaces::SpatialSurfaceObserver*,IInspectable*> __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

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
        namespace Graphics {
            namespace DirectX {
                enum DirectXPixelFormat : int;
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#define DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ea016190-ac80-5840-8f58-ff434c7b2907"))
IIterator<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> : IIterator_impl<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Graphics.DirectX.DirectXPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t;
#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
//#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE */





#ifndef DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#define DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3908f2c6-1aee-5129-b9a6-2a6e01d9507e"))
IIterable<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> : IIterable_impl<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Graphics.DirectX.DirectXPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t;
#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
//#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE */





#ifndef DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#define DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1edda1c2-0f6e-516c-80b8-7687dcd1280e"))
IVectorView<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> : IVectorView_impl<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Graphics.DirectX.DirectXPixelFormat>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Graphics::DirectX::DirectXPixelFormat> __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t;
#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
//#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Graphics::DirectX::DirectXPixelFormat>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_USE */



namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                class SpatialBoundingVolume;
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */

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
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */



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
        namespace Graphics {
            namespace DirectX {
                
                typedef enum DirectXPixelFormat : int DirectXPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* DirectX */} /* ABI */




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


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                
                typedef enum SpatialPerceptionAccessStatus : int SpatialPerceptionAccessStatus;
                
            } /* Windows */
        } /* Perception */
    } /* Spatial */} /* ABI */




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
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    class SpatialSurfaceMeshBuffer;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    class SpatialSurfaceMeshOptions;
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */













/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("F8E9EBE7-39B7-3962-BB03-57F56E1FB0A1"), exclusiveto, contract] */
                    MIDL_INTERFACE("F8E9EBE7-39B7-3962-BB03-57F56E1FB0A1")
                    ISpatialSurfaceInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpdateTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetBounds(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * coordinateSystem,
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryComputeLatestMeshAsync(
                            /* [in] */DOUBLE maxTrianglesPerCubicMeter,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryComputeLatestMeshWithOptionsAsync(
                            /* [in] */DOUBLE maxTrianglesPerCubicMeter,
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions * options,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceInfo=_uuidof(ISpatialSurfaceInfo);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("108F57D9-DF0D-3950-A0FD-F972C77C27B4"), exclusiveto, contract] */
                    MIDL_INTERFACE("108F57D9-DF0D-3950-A0FD-F972C77C27B4")
                    ISpatialSurfaceMesh : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SurfaceInfo(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoordinateSystem(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::ISpatialCoordinateSystem * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TriangleIndices(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VertexPositions(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VertexPositionScale(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VertexNormals(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceMesh=_uuidof(ISpatialSurfaceMesh);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("93CF59E0-871F-33F8-98B2-03D101458F6F"), exclusiveto, contract] */
                    MIDL_INTERFACE("93CF59E0-871F-33F8-98B2-03D101458F6F")
                    ISpatialSurfaceMeshBuffer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Format(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::DirectX::DirectXPixelFormat * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stride(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementCount(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceMeshBuffer=_uuidof(ISpatialSurfaceMeshBuffer);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("D2759F89-3572-3D2D-A10D-5FEE9394AA37"), exclusiveto, contract] */
                    MIDL_INTERFACE("D2759F89-3572-3D2D-A10D-5FEE9394AA37")
                    ISpatialSurfaceMeshOptions : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VertexPositionFormat(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::DirectX::DirectXPixelFormat * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VertexPositionFormat(
                            /* [in] */ABI::Windows::Graphics::DirectX::DirectXPixelFormat value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TriangleIndexFormat(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::DirectX::DirectXPixelFormat * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TriangleIndexFormat(
                            /* [in] */ABI::Windows::Graphics::DirectX::DirectXPixelFormat value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VertexNormalFormat(
                            /* [retval, out] */__RPC__out ABI::Windows::Graphics::DirectX::DirectXPixelFormat * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VertexNormalFormat(
                            /* [in] */ABI::Windows::Graphics::DirectX::DirectXPixelFormat value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeVertexNormals(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncludeVertexNormals(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceMeshOptions=_uuidof(ISpatialSurfaceMeshOptions);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("9B340ABF-9781-4505-8935-013575CAAE5E"), exclusiveto, contract] */
                    MIDL_INTERFACE("9B340ABF-9781-4505-8935-013575CAAE5E")
                    ISpatialSurfaceMeshOptionsStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedVertexPositionFormats(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedTriangleIndexFormats(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedVertexNormalFormats(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceMeshOptionsStatics=_uuidof(ISpatialSurfaceMeshOptionsStatics);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("10B69819-DDCA-3483-AC3A-748FE8C86DF5"), exclusiveto, contract] */
                    MIDL_INTERFACE("10B69819-DDCA-3483-AC3A-748FE8C86DF5")
                    ISpatialSurfaceObserver : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetObservedSurfaces(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetBoundingVolume(
                            /* [in] */__RPC__in_opt ABI::Windows::Perception::Spatial::ISpatialBoundingVolume * bounds
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetBoundingVolumes(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * bounds
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ObservedSurfacesChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ObservedSurfacesChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceObserver=_uuidof(ISpatialSurfaceObserver);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("165951ED-2108-4168-9175-87E027BC9285"), exclusiveto, contract] */
                    MIDL_INTERFACE("165951ED-2108-4168-9175-87E027BC9285")
                    ISpatialSurfaceObserverStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceObserverStatics=_uuidof(ISpatialSurfaceObserverStatics);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics2[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace Spatial {
                namespace Surfaces {
                    /* [object, uuid("0F534261-C55D-4E6B-A895-A19DE69A42E3"), exclusiveto, contract] */
                    MIDL_INTERFACE("0F534261-C55D-4E6B-A895-A19DE69A42E3")
                    ISpatialSurfaceObserverStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE IsSupported(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpatialSurfaceObserverStatics2=_uuidof(ISpatialSurfaceObserverStatics2);
                    
                } /* Windows */
            } /* Perception */
        } /* Spatial */
    } /* Surfaces */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

typedef struct __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__out GUID *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;

interface __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;

interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

typedef  struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;

interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__)
#define ____FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

typedef interface __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;

typedef struct __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
        /* [in] */ __RPC__in GUID key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, /* [in] */ __RPC__in GUID key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;

interface __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;

typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl;

interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

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


enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
#if !defined(____FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;

interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

typedef  struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;

interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;

typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [in] */ enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;

interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume_FWD_DEFINED__


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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;




typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;








typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;





typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox;


#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__




























/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo";
/* [object, uuid("F8E9EBE7-39B7-3962-BB03-57F56E1FB0A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpdateTime )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetBounds )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryComputeLatestMeshAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
        /* [in] */DOUBLE maxTrianglesPerCubicMeter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryComputeLatestMeshWithOptionsAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
        /* [in] */DOUBLE maxTrianglesPerCubicMeter,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfoVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_get_UpdateTime(This,value) \
    ( (This)->lpVtbl->get_UpdateTime(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_TryGetBounds(This,coordinateSystem,value) \
    ( (This)->lpVtbl->TryGetBounds(This,coordinateSystem,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_TryComputeLatestMeshAsync(This,maxTrianglesPerCubicMeter,value) \
    ( (This)->lpVtbl->TryComputeLatestMeshAsync(This,maxTrianglesPerCubicMeter,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_TryComputeLatestMeshWithOptionsAsync(This,maxTrianglesPerCubicMeter,options,value) \
    ( (This)->lpVtbl->TryComputeLatestMeshWithOptionsAsync(This,maxTrianglesPerCubicMeter,options,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh";
/* [object, uuid("108F57D9-DF0D-3950-A0FD-F972C77C27B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SurfaceInfo )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TriangleIndices )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VertexPositions )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VertexPositionScale )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VertexNormals )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_get_SurfaceInfo(This,value) \
    ( (This)->lpVtbl->get_SurfaceInfo(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_get_CoordinateSystem(This,value) \
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_get_TriangleIndices(This,value) \
    ( (This)->lpVtbl->get_TriangleIndices(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_get_VertexPositions(This,value) \
    ( (This)->lpVtbl->get_VertexPositions(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_get_VertexPositionScale(This,value) \
    ( (This)->lpVtbl->get_VertexPositionScale(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_get_VertexNormals(This,value) \
    ( (This)->lpVtbl->get_VertexNormals(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer";
/* [object, uuid("93CF59E0-871F-33F8-98B2-03D101458F6F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stride )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementCount )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBufferVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_get_Format(This,value) \
    ( (This)->lpVtbl->get_Format(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_get_Stride(This,value) \
    ( (This)->lpVtbl->get_Stride(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_get_ElementCount(This,value) \
    ( (This)->lpVtbl->get_ElementCount(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions";
/* [object, uuid("D2759F89-3572-3D2D-A10D-5FEE9394AA37"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VertexPositionFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VertexPositionFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TriangleIndexFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TriangleIndexFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VertexNormalFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VertexNormalFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeVertexNormals )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncludeVertexNormals )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_get_VertexPositionFormat(This,value) \
    ( (This)->lpVtbl->get_VertexPositionFormat(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_put_VertexPositionFormat(This,value) \
    ( (This)->lpVtbl->put_VertexPositionFormat(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_get_TriangleIndexFormat(This,value) \
    ( (This)->lpVtbl->get_TriangleIndexFormat(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_put_TriangleIndexFormat(This,value) \
    ( (This)->lpVtbl->put_TriangleIndexFormat(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_get_VertexNormalFormat(This,value) \
    ( (This)->lpVtbl->get_VertexNormalFormat(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_put_VertexNormalFormat(This,value) \
    ( (This)->lpVtbl->put_VertexNormalFormat(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_get_IncludeVertexNormals(This,value) \
    ( (This)->lpVtbl->get_IncludeVertexNormals(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_put_IncludeVertexNormals(This,value) \
    ( (This)->lpVtbl->put_IncludeVertexNormals(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics";
/* [object, uuid("9B340ABF-9781-4505-8935-013575CAAE5E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedVertexPositionFormats )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedTriangleIndexFormats )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedVertexNormalFormats )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_get_SupportedVertexPositionFormats(This,value) \
    ( (This)->lpVtbl->get_SupportedVertexPositionFormats(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_get_SupportedTriangleIndexFormats(This,value) \
    ( (This)->lpVtbl->get_SupportedTriangleIndexFormats(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_get_SupportedVertexNormalFormats(This,value) \
    ( (This)->lpVtbl->get_SupportedVertexNormalFormats(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver";
/* [object, uuid("10B69819-DDCA-3483-AC3A-748FE8C86DF5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetObservedSurfaces )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetBoundingVolume )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * bounds
        );
    HRESULT ( STDMETHODCALLTYPE *SetBoundingVolumes )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * bounds
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ObservedSurfacesChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ObservedSurfacesChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_GetObservedSurfaces(This,value) \
    ( (This)->lpVtbl->GetObservedSurfaces(This,value) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_SetBoundingVolume(This,bounds) \
    ( (This)->lpVtbl->SetBoundingVolume(This,bounds) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_SetBoundingVolumes(This,bounds) \
    ( (This)->lpVtbl->SetBoundingVolumes(This,bounds) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_add_ObservedSurfacesChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ObservedSurfacesChanged(This,handler,token) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_remove_ObservedSurfacesChanged(This,token) \
    ( (This)->lpVtbl->remove_ObservedSurfacesChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics";
/* [object, uuid("165951ED-2108-4168-9175-87E027BC9285"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_RequestAccessAsync(This,result) \
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics2[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2";
/* [object, uuid("0F534261-C55D-4E6B-A895-A19DE69A42E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2Vtbl;

interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_IsSupported(This,value) \
    ( (This)->lpVtbl->IsSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2;
#endif /* !defined(____x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver_DEFINED
#define RUNTIMECLASS_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver";
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
#endif // __windows2Eperception2Espatial2Esurfaces_p_h__

#endif // __windows2Eperception2Espatial2Esurfaces_h__
