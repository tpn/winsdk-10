/* Header file automatically generated from windows.devices.geolocation.idl */
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
#ifndef __windows2Edevices2Egeolocation_h__
#define __windows2Edevices2Egeolocation_h__
#ifndef __windows2Edevices2Egeolocation_p_h__
#define __windows2Edevices2Egeolocation_p_h__


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
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface ICivicAddress;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress ABI::Windows::Devices::Geolocation::ICivicAddress

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoboundingBox;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox ABI::Windows::Devices::Geolocation::IGeoboundingBox

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoboundingBoxFactory;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory ABI::Windows::Devices::Geolocation::IGeoboundingBoxFactory

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoboundingBoxStatics;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics ABI::Windows::Devices::Geolocation::IGeoboundingBoxStatics

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocircle;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle ABI::Windows::Devices::Geolocation::IGeocircle

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocircleFactory;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory ABI::Windows::Devices::Geolocation::IGeocircleFactory

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocoordinate;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate ABI::Windows::Devices::Geolocation::IGeocoordinate

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocoordinateSatelliteData;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData ABI::Windows::Devices::Geolocation::IGeocoordinateSatelliteData

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocoordinateWithPoint;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint ABI::Windows::Devices::Geolocation::IGeocoordinateWithPoint

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocoordinateWithPositionData;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData ABI::Windows::Devices::Geolocation::IGeocoordinateWithPositionData

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeocoordinateWithPositionSourceTimestamp;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp ABI::Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeolocator;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator ABI::Windows::Devices::Geolocation::IGeolocator

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeolocator2;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 ABI::Windows::Devices::Geolocation::IGeolocator2

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeolocatorStatics;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics ABI::Windows::Devices::Geolocation::IGeolocatorStatics

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeolocatorStatics2;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 ABI::Windows::Devices::Geolocation::IGeolocatorStatics2

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeolocatorWithScalarAccuracy;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy ABI::Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeopath;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath ABI::Windows::Devices::Geolocation::IGeopath

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeopathFactory;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory ABI::Windows::Devices::Geolocation::IGeopathFactory

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeopoint;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint ABI::Windows::Devices::Geolocation::IGeopoint

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeopointFactory;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory ABI::Windows::Devices::Geolocation::IGeopointFactory

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoposition;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition ABI::Windows::Devices::Geolocation::IGeoposition

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoposition2;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 ABI::Windows::Devices::Geolocation::IGeoposition2

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeoshape;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape ABI::Windows::Devices::Geolocation::IGeoshape

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeovisit;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit ABI::Windows::Devices::Geolocation::IGeovisit

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeovisitMonitor;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor ABI::Windows::Devices::Geolocation::IGeovisitMonitor

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeovisitMonitorStatics;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics ABI::Windows::Devices::Geolocation::IGeovisitMonitorStatics

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeovisitStateChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs ABI::Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IGeovisitTriggerDetails;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails ABI::Windows::Devices::Geolocation::IGeovisitTriggerDetails

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IPositionChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IStatusChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                interface IVenueData;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData ABI::Windows::Devices::Geolocation::IVenueData

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                struct BasicGeoposition;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b4e26a1-88e4-5872-bb2d-4f31700828b2"))
IIterator<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> : IIterator_impl<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.BasicGeoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::BasicGeoposition>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::BasicGeoposition>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("922399a8-0093-5009-a8d2-f87b0eae75f5"))
IIterable<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> : IIterable_impl<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.BasicGeoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::BasicGeoposition>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::BasicGeoposition>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geopath;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cf1d4402-4754-57e7-aae0-69ca42cbd8f2"))
IIterator<ABI::Windows::Devices::Geolocation::Geopath*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopath*, ABI::Windows::Devices::Geolocation::IGeopath*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.Geopath>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Geolocation::Geopath*> __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeopath*>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeopath*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("246fcfbd-a881-5e8e-9908-c1b9ebdfec78"))
IIterable<ABI::Windows::Devices::Geolocation::Geopath*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopath*, ABI::Windows::Devices::Geolocation::IGeopath*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.Geopath>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Geolocation::Geopath*> __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeopath*>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeopath*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geopoint;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("88225b39-8be9-5c03-9714-8f1642d8a43f"))
IIterator<ABI::Windows::Devices::Geolocation::Geopoint*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopoint*, ABI::Windows::Devices::Geolocation::IGeopoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.Geopoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Geolocation::Geopoint*> __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeopoint*>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeopoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e7617fc9-2cc7-5bd1-bc5a-f47260834ed8"))
IIterable<ABI::Windows::Devices::Geolocation::Geopoint*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopoint*, ABI::Windows::Devices::Geolocation::IGeopoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.Geopoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Geolocation::Geopoint*> __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeopoint*>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeopoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geoposition;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a99b4206-263e-5308-82f2-31315c65135c"))
IIterator<ABI::Windows::Devices::Geolocation::Geoposition*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.Geoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Geolocation::Geoposition*> __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeoposition*>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeoposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("135ed72d-75b1-5881-be41-6ffeaa202044"))
IIterable<ABI::Windows::Devices::Geolocation::Geoposition*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.Geoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Geolocation::Geoposition*> __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeoposition*>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeoposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geovisit;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f525fc34-b058-5345-8e28-3e69e5f59070"))
IIterator<ABI::Windows::Devices::Geolocation::Geovisit*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geovisit*, ABI::Windows::Devices::Geolocation::IGeovisit*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.Geovisit>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Geolocation::Geovisit*> __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeovisit*>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::IGeovisit*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d5800189-0f3f-54a0-a749-6000c1e12e58"))
IIterable<ABI::Windows::Devices::Geolocation::Geovisit*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geovisit*, ABI::Windows::Devices::Geolocation::IGeovisit*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.Geovisit>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Geolocation::Geovisit*> __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeovisit*>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::IGeovisit*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#ifndef DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("177f5719-e234-59db-99ba-f7fdddf31430"))
IVectorView<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> : IVectorView_impl<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.BasicGeoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t;
#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::BasicGeoposition>
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::BasicGeoposition>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a83321cb-1b54-5f68-9234-4a824d33e371"))
IVectorView<ABI::Windows::Devices::Geolocation::Geopath*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopath*, ABI::Windows::Devices::Geolocation::IGeopath*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geopath>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Geolocation::Geopath*> __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_t;
#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeopath*>
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeopath*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d572ccf3-0c60-553f-a624-c71648af8e7a"))
IVectorView<ABI::Windows::Devices::Geolocation::Geoposition*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Geolocation::Geoposition*> __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeoposition*>
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeoposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("90ad35e9-f1de-5ba7-abbf-04a21976d362"))
IVectorView<ABI::Windows::Devices::Geolocation::Geovisit*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geovisit*, ABI::Windows::Devices::Geolocation::IGeovisit*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geovisit>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Geolocation::Geovisit*> __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_t;
#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeovisit*>
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeovisit*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CDevices__CGeolocation__CGeopath_USE
#define DEF___FIVector_1_Windows__CDevices__CGeolocation__CGeopath_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7ca97e6d-6893-5672-a0c7-625c5090381e"))
IVector<ABI::Windows::Devices::Geolocation::Geopath*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopath*, ABI::Windows::Devices::Geolocation::IGeopath*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Geolocation.Geopath>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Devices::Geolocation::Geopath*> __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_t;
#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CGeolocation__CGeopath_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Geolocation::IGeopath*>
//#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Geolocation::IGeopath*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CGeolocation__CGeopath_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                enum GeolocationAccessStatus : int;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f3524c93-e5c7-5b88-bedb-d3e637cff271"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::Geolocation::GeolocationAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Devices::Geolocation::GeolocationAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Geolocation.GeolocationAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::Geolocation::GeolocationAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::GeolocationAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::GeolocationAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("de2b24d0-b726-57b1-a7c5-e5a13932b7de"))
IAsyncOperation<enum ABI::Windows::Devices::Geolocation::GeolocationAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::Devices::Geolocation::GeolocationAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Geolocation.GeolocationAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Devices::Geolocation::GeolocationAccessStatus> __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::GeolocationAccessStatus>
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::GeolocationAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4b5f2f60-19b1-5566-9df6-92a42235cbf9"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geopoint*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopoint*, ABI::Windows::Devices::Geolocation::IGeopoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Geolocation.Geopoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geopoint*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::IGeopoint*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::IGeopoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3723e070-c2ae-538f-846e-0f9d280310c0"))
IAsyncOperation<ABI::Windows::Devices::Geolocation::Geopoint*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geopoint*, ABI::Windows::Devices::Geolocation::IGeopoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Geolocation.Geopoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Geolocation::Geopoint*> __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_t;
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::IGeopoint*>
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::IGeopoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7668a704-244e-5e12-8dcb-92a3299eba26"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geoposition*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Geolocation.Geoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geoposition*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::IGeoposition*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::IGeoposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ee73ecf0-099d-57e5-8407-5b32e5af1cc4"))
IAsyncOperation<ABI::Windows::Devices::Geolocation::Geoposition*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geoposition*, ABI::Windows::Devices::Geolocation::IGeoposition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Geolocation.Geoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Geolocation::Geoposition*> __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::IGeoposition*>
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::IGeoposition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b9bce8cb-2e04-5269-9b03-1614d0c00b01"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geovisit*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geovisit*, ABI::Windows::Devices::Geolocation::IGeovisit*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Geolocation.Geovisit>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::Geovisit*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::IGeovisit*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Geolocation::IGeovisit*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8d1c950a-efb9-5440-a6a7-820a839be07b"))
IAsyncOperation<ABI::Windows::Devices::Geolocation::Geovisit*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geovisit*, ABI::Windows::Devices::Geolocation::IGeovisit*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Geolocation.Geovisit>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Geolocation::Geovisit*> __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_t;
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::IGeovisit*>
//#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Geolocation::IGeovisit*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6c67a1d1-9441-5aee-b625-e3c1b5676a6d"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geoposition>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeoposition*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeoposition*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9454b533-efb4-5385-8d3a-437fabc32d91"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geoposition>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeoposition*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::IGeoposition*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#define DEF___FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e4d5dda6-f57c-57cc-b67f-2939a901dabe"))
IReference<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> : IReference_impl<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Devices.Geolocation.BasicGeoposition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Devices::Geolocation::BasicGeoposition> __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t;
#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::__FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition ABI::Windows::Foundation::IReference<ABI::Windows::Devices::Geolocation::BasicGeoposition>
//#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_t ABI::Windows::Foundation::IReference<ABI::Windows::Devices::Geolocation::BasicGeoposition>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geolocator;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class PositionChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("df3c6164-4e7b-5e8e-9a7e-13da059dec1e"))
ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::PositionChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geolocator*, ABI::Windows::Devices::Geolocation::IGeolocator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::PositionChangedEventArgs*, ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Geolocation.Geolocator, Windows.Devices.Geolocation.PositionChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::PositionChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::IGeolocator*,ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::IGeolocator*,ABI::Windows::Devices::Geolocation::IPositionChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class StatusChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("97fcf582-de6b-5cd3-9690-e2ecbb66da4d"))
ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::StatusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geolocator*, ABI::Windows::Devices::Geolocation::IGeolocator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::StatusChangedEventArgs*, ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Geolocation.Geolocator, Windows.Devices.Geolocation.StatusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geolocator*,ABI::Windows::Devices::Geolocation::StatusChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::IGeolocator*,ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::IGeolocator*,ABI::Windows::Devices::Geolocation::IStatusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class GeovisitMonitor;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class GeovisitStateChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("76abc5ea-ee4f-5391-9b50-deca5d4311c9"))
ITypedEventHandler<ABI::Windows::Devices::Geolocation::GeovisitMonitor*,ABI::Windows::Devices::Geolocation::GeovisitStateChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::GeovisitMonitor*, ABI::Windows::Devices::Geolocation::IGeovisitMonitor*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::GeovisitStateChangedEventArgs*, ABI::Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Geolocation.GeovisitMonitor, Windows.Devices.Geolocation.GeovisitStateChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Geolocation::GeovisitMonitor*,ABI::Windows::Devices::Geolocation::GeovisitStateChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::IGeovisitMonitor*,ABI::Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::IGeovisitMonitor*,ABI::Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


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



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */




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
        namespace Devices {
            namespace Geolocation {
                
                typedef enum AltitudeReferenceSystem : int AltitudeReferenceSystem;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum GeolocationAccessStatus : int GeolocationAccessStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum GeoshapeType : int GeoshapeType;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum PositionAccuracy : int PositionAccuracy;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum PositionSource : int PositionSource;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum PositionStatus : int PositionStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum VisitMonitoringScope : int VisitMonitoringScope;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef enum VisitStateChange : int VisitStateChange;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                
                typedef struct BasicGeoposition BasicGeoposition;
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
































namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class CivicAddress;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class GeoboundingBox;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geocircle;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geocoordinate;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class GeocoordinateSatelliteData;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class GeovisitTriggerDetails;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class VenueData;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */










/*
 *
 * Struct Windows.Devices.Geolocation.AltitudeReferenceSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum AltitudeReferenceSystem : int
                {
                    AltitudeReferenceSystem_Unspecified = 0,
                    AltitudeReferenceSystem_Terrain = 1,
                    AltitudeReferenceSystem_Ellipsoid = 2,
                    AltitudeReferenceSystem_Geoid = 3,
                    AltitudeReferenceSystem_Surface = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.GeolocationAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum GeolocationAccessStatus : int
                {
                    GeolocationAccessStatus_Unspecified = 0,
                    GeolocationAccessStatus_Allowed = 1,
                    GeolocationAccessStatus_Denied = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.GeoshapeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum GeoshapeType : int
                {
                    GeoshapeType_Geopoint = 0,
                    GeoshapeType_Geocircle = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    GeoshapeType_Geopath = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    GeoshapeType_GeoboundingBox = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.PositionAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum PositionAccuracy : int
                {
                    PositionAccuracy_Default = 0,
                    PositionAccuracy_High = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.PositionSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum PositionSource : int
                {
                    PositionSource_Cellular = 0,
                    PositionSource_Satellite = 1,
                    PositionSource_WiFi = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    PositionSource_IPAddress = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    PositionSource_Unknown = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    PositionSource_Default = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    PositionSource_Obfuscated = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.PositionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum PositionStatus : int
                {
                    PositionStatus_Ready = 0,
                    PositionStatus_Initializing = 1,
                    PositionStatus_NoData = 2,
                    PositionStatus_Disabled = 3,
                    PositionStatus_NotInitialized = 4,
                    PositionStatus_NotAvailable = 5,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.VisitMonitoringScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum VisitMonitoringScope : int
                {
                    VisitMonitoringScope_Venue = 0,
                    VisitMonitoringScope_City = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.Geolocation.VisitStateChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [v1_enum, contract] */
                enum VisitStateChange : int
                {
                    VisitStateChange_TrackingLost = 0,
                    VisitStateChange_Arrived = 1,
                    VisitStateChange_Departed = 2,
                    VisitStateChange_OtherMovement = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.Geolocation.BasicGeoposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [contract] */
                struct BasicGeoposition
                {
                    DOUBLE Latitude;
                    DOUBLE Longitude;
                    DOUBLE Altitude;
                };
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.ICivicAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.CivicAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_ICivicAddress[] = L"Windows.Devices.Geolocation.ICivicAddress";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("A8567A1A-64F4-4D48-BCEA-F6B008ECA34C"), exclusiveto, contract] */
                MIDL_INTERFACE("A8567A1A-64F4-4D48-BCEA-F6B008ECA34C")
                ICivicAddress : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Country(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_City(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PostalCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICivicAddress=_uuidof(ICivicAddress);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoboundingBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeoboundingBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBox[] = L"Windows.Devices.Geolocation.IGeoboundingBox";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("0896C80B-274F-43DA-9A06-CBFCDAEB4EC2"), exclusiveto, contract] */
                MIDL_INTERFACE("0896C80B-274F-43DA-9A06-CBFCDAEB4EC2")
                IGeoboundingBox : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NorthwestCorner(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::BasicGeoposition * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoutheastCorner(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::BasicGeoposition * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Center(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::BasicGeoposition * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinAltitude(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxAltitude(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeoboundingBox=_uuidof(IGeoboundingBox);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoboundingBoxFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeoboundingBox
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBoxFactory[] = L"Windows.Devices.Geolocation.IGeoboundingBoxFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("4DFBA589-0411-4ABC-B3B5-5BBCCB57D98C"), exclusiveto, contract] */
                MIDL_INTERFACE("4DFBA589-0411-4ABC-B3B5-5BBCCB57D98C")
                IGeoboundingBoxFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition northwestCorner,
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition southeastCorner,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReference(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition northwestCorner,
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition southeastCorner,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReferenceAndSpatialReference(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition northwestCorner,
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition southeastCorner,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [in] */UINT32 spatialReferenceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeoboundingBoxFactory=_uuidof(IGeoboundingBoxFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoboundingBoxStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeoboundingBox
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBoxStatics[] = L"Windows.Devices.Geolocation.IGeoboundingBoxStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("67B80708-E61A-4CD0-841B-93233792B5CA"), exclusiveto, contract] */
                MIDL_INTERFACE("67B80708-E61A-4CD0-841B-93233792B5CA")
                IGeoboundingBoxStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryCompute(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryComputeWithAltitudeReference(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TryComputeWithAltitudeReferenceAndSpatialReference(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeRefSystem,
                        /* [in] */UINT32 spatialReferenceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeoboundingBoxStatics=_uuidof(IGeoboundingBoxStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocircle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocircle
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocircle[] = L"Windows.Devices.Geolocation.IGeocircle";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("39E45843-A7F9-4E63-92A7-BA0C28D124B1"), exclusiveto, contract] */
                MIDL_INTERFACE("39E45843-A7F9-4E63-92A7-BA0C28D124B1")
                IGeocircle : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Center(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::BasicGeoposition * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Radius(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocircle=_uuidof(IGeocircle);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocircleFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocircle
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocircleFactory[] = L"Windows.Devices.Geolocation.IGeocircleFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("AFD6531F-72B1-4F7D-87CC-4ED4C9849C05"), exclusiveto, contract] */
                MIDL_INTERFACE("AFD6531F-72B1-4F7D-87CC-4ED4C9849C05")
                IGeocircleFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition position,
                        /* [in] */DOUBLE radius,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeocircle * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReferenceSystem(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition position,
                        /* [in] */DOUBLE radius,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeocircle * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReferenceSystemAndSpatialReferenceId(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition position,
                        /* [in] */DOUBLE radius,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [in] */UINT32 spatialReferenceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeocircle * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocircleFactory=_uuidof(IGeocircleFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinate[] = L"Windows.Devices.Geolocation.IGeocoordinate";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("EE21A3AA-976A-4C70-803D-083EA55BCBC4"), exclusiveto, contract] */
                MIDL_INTERFACE("EE21A3AA-976A-4C70-803D-083EA55BCBC4")
                IGeocoordinate : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Latitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Latitude")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Latitude(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Longitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Longitude")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Longitude(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Altitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Altitude")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Altitude(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Accuracy(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AltitudeAccuracy(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Heading(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Speed(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocoordinate=_uuidof(IGeocoordinate);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateSatelliteData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeocoordinateSatelliteData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateSatelliteData[] = L"Windows.Devices.Geolocation.IGeocoordinateSatelliteData";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("C32A74D9-2608-474C-912C-06DD490F4AF7"), exclusiveto, contract] */
                MIDL_INTERFACE("C32A74D9-2608-474C-912C-06DD490F4AF7")
                IGeocoordinateSatelliteData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionDilutionOfPrecision(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * ppValue
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalDilutionOfPrecision(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * ppValue
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalDilutionOfPrecision(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * ppValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocoordinateSatelliteData=_uuidof(IGeocoordinateSatelliteData);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateWithPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPoint[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPoint";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("FEEA0525-D22C-4D46-B527-0B96066FC7DB"), exclusiveto, contract] */
                MIDL_INTERFACE("FEEA0525-D22C-4D46-B527-0B96066FC7DB")
                IGeocoordinateWithPoint : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Point(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocoordinateWithPoint=_uuidof(IGeocoordinateWithPoint);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateWithPositionData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPositionData[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPositionData";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("95E634BE-DBD6-40AC-B8F2-A65C0340D9A6"), exclusiveto, contract] */
                MIDL_INTERFACE("95E634BE-DBD6-40AC-B8F2-A65C0340D9A6")
                IGeocoordinateWithPositionData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionSource(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::PositionSource * pValue
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SatelliteData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeocoordinateSatelliteData * * ppValue
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocoordinateWithPositionData=_uuidof(IGeocoordinateWithPositionData);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("8543FC02-C9F1-4610-AFE0-8BC3A6A87036"), exclusiveto, contract] */
                MIDL_INTERFACE("8543FC02-C9F1-4610-AFE0-8BC3A6A87036")
                IGeocoordinateWithPositionSourceTimestamp : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionSourceTimestamp(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeocoordinateWithPositionSourceTimestamp=_uuidof(IGeocoordinateWithPositionSourceTimestamp);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator[] = L"Windows.Devices.Geolocation.IGeolocator";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("A9C3BF62-4524-4989-8AA9-DE019D2E551F"), exclusiveto, contract] */
                MIDL_INTERFACE("A9C3BF62-4524-4989-8AA9-DE019D2E551F")
                IGeolocator : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredAccuracy(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::PositionAccuracy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredAccuracy(
                        /* [in] */ABI::Windows::Devices::Geolocation::PositionAccuracy value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MovementThreshold(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MovementThreshold(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportInterval(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReportInterval(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocationStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::PositionStatus * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGeopositionAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGeopositionAsyncWithAgeAndTimeout(
                        /* [in] */ABI::Windows::Foundation::TimeSpan maximumAge,
                        /* [in] */ABI::Windows::Foundation::TimeSpan timeout,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PositionChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PositionChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeolocator=_uuidof(IGeolocator);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocator2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator2[] = L"Windows.Devices.Geolocation.IGeolocator2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("D1B42E6D-8891-43B4-AD36-27C6FE9A97B1"), exclusiveto, contract] */
                MIDL_INTERFACE("D1B42E6D-8891-43B4-AD36-27C6FE9A97B1")
                IGeolocator2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AllowFallbackToConsentlessPositions(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeolocator2=_uuidof(IGeolocator2);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocatorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorStatics[] = L"Windows.Devices.Geolocation.IGeolocatorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("9A8E7571-2DF5-4591-9F87-EB5FD894E9B7"), exclusiveto, contract] */
                MIDL_INTERFACE("9A8E7571-2DF5-4591-9F87-EB5FD894E9B7")
                IGeolocatorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGeopositionHistoryAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetGeopositionHistoryWithDurationAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [in] */ABI::Windows::Foundation::TimeSpan duration,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeolocatorStatics=_uuidof(IGeolocatorStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocatorStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorStatics2[] = L"Windows.Devices.Geolocation.IGeolocatorStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("993011A2-FA1C-4631-A71D-0DBEB1250D9C"), exclusiveto, contract] */
                MIDL_INTERFACE("993011A2-FA1C-4631-A71D-0DBEB1250D9C")
                IGeolocatorStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDefaultGeopositionRecommended(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultGeoposition(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultGeoposition(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeolocatorStatics2=_uuidof(IGeolocatorStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy[] = L"Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("96F5D3C1-B80F-460A-994D-A96C47A51AA4"), exclusiveto, contract] */
                MIDL_INTERFACE("96F5D3C1-B80F-460A-994D-A96C47A51AA4")
                IGeolocatorWithScalarAccuracy : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredAccuracyInMeters(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredAccuracyInMeters(
                        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeolocatorWithScalarAccuracy=_uuidof(IGeolocatorWithScalarAccuracy);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopath
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopath
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopath[] = L"Windows.Devices.Geolocation.IGeopath";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("E53FD7B9-2DA4-4714-A652-DE8593289898"), exclusiveto, contract] */
                MIDL_INTERFACE("E53FD7B9-2DA4-4714-A652-DE8593289898")
                IGeopath : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Positions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeopath=_uuidof(IGeopath);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopathFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopath
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopathFactory[] = L"Windows.Devices.Geolocation.IGeopathFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("27BEA9C8-C7E7-4359-9B9B-FCA3E05EF593"), exclusiveto, contract] */
                MIDL_INTERFACE("27BEA9C8-C7E7-4359-9B9B-FCA3E05EF593")
                IGeopathFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReference(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReferenceAndSpatialReference(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [in] */UINT32 spatialReferenceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeopathFactory=_uuidof(IGeopathFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopoint
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopoint[] = L"Windows.Devices.Geolocation.IGeopoint";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("6BFA00EB-E56E-49BB-9CAF-CBAA78A8BCEF"), exclusiveto, contract] */
                MIDL_INTERFACE("6BFA00EB-E56E-49BB-9CAF-CBAA78A8BCEF")
                IGeopoint : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::BasicGeoposition * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeopoint=_uuidof(IGeopoint);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopointFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopointFactory[] = L"Windows.Devices.Geolocation.IGeopointFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("DB6B8D33-76BD-4E30-8AF7-A844DC37B7A0"), exclusiveto, contract] */
                MIDL_INTERFACE("DB6B8D33-76BD-4E30-8AF7-A844DC37B7A0")
                IGeopointFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition position,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReferenceSystem(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition position,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAltitudeReferenceSystemAndSpatialReferenceId(
                        /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition position,
                        /* [in] */ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem altitudeReferenceSystem,
                        /* [in] */UINT32 spatialReferenceId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeopointFactory=_uuidof(IGeopointFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geoposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition[] = L"Windows.Devices.Geolocation.IGeoposition";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("C18D0454-7D41-4FF7-A957-9DFFB4EF7F5B"), exclusiveto, contract] */
                MIDL_INTERFACE("C18D0454-7D41-4FF7-A957-9DFFB4EF7F5B")
                IGeoposition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Coordinate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeocoordinate * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CivicAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::ICivicAddress * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeoposition=_uuidof(IGeoposition);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoposition2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geoposition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition2[] = L"Windows.Devices.Geolocation.IGeoposition2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("7F62F697-8671-4B0D-86F8-474A8496187C"), exclusiveto, contract] */
                MIDL_INTERFACE("7F62F697-8671-4B0D-86F8-474A8496187C")
                IGeoposition2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VenueData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IVenueData * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeoposition2=_uuidof(IGeoposition2);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoshape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoshape[] = L"Windows.Devices.Geolocation.IGeoshape";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("C99CA2AF-C729-43C1-8FAB-D6DEC914DF7E"), contract] */
                MIDL_INTERFACE("C99CA2AF-C729-43C1-8FAB-D6DEC914DF7E")
                IGeoshape : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GeoshapeType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::GeoshapeType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpatialReferenceId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AltitudeReferenceSystem(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::AltitudeReferenceSystem * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeoshape=_uuidof(IGeoshape);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geovisit
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisit[] = L"Windows.Devices.Geolocation.IGeovisit";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("B1877A76-9EF6-41AB-A0DD-793ECE76E2DE"), exclusiveto, contract] */
                MIDL_INTERFACE("B1877A76-9EF6-41AB-A0DD-793ECE76E2DE")
                IGeovisit : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoposition * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StateChange(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::VisitStateChange * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeovisit=_uuidof(IGeovisit);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitMonitor[] = L"Windows.Devices.Geolocation.IGeovisitMonitor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("80118AAF-5944-4591-83C1-396647F54F2C"), exclusiveto, contract] */
                MIDL_INTERFACE("80118AAF-5944-4591-83C1-396647F54F2C")
                IGeovisitMonitor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MonitoringScope(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::VisitMonitoringScope * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(
                        /* [in] */ABI::Windows::Devices::Geolocation::VisitMonitoringScope value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VisitStateChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VisitStateChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeovisitMonitor=_uuidof(IGeovisitMonitor);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitMonitorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitMonitorStatics[] = L"Windows.Devices.Geolocation.IGeovisitMonitorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("BCF976A7-BBF2-4CDD-95CF-554C82EDFB87"), exclusiveto, contract] */
                MIDL_INTERFACE("BCF976A7-BBF2-4CDD-95CF-554C82EDFB87")
                IGeovisitMonitorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetLastReportAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeovisitMonitorStatics=_uuidof(IGeovisitMonitorStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitStateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitStateChangedEventArgs[] = L"Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("CEB4D1FF-8B53-4968-BEED-4CECD029CE15"), exclusiveto, contract] */
                MIDL_INTERFACE("CEB4D1FF-8B53-4968-BEED-4CECD029CE15")
                IGeovisitStateChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Visit(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeovisit * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeovisitStateChangedEventArgs=_uuidof(IGeovisitStateChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitTriggerDetails[] = L"Windows.Devices.Geolocation.IGeovisitTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("EA770D9E-D1C9-454B-99B7-B2F8CDD2482F"), exclusiveto, contract] */
                MIDL_INTERFACE("EA770D9E-D1C9-454B-99B7-B2F8CDD2482F")
                IGeovisitTriggerDetails : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ReadReports(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * * values
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGeovisitTriggerDetails=_uuidof(IGeovisitTriggerDetails);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IPositionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.PositionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IPositionChangedEventArgs[] = L"Windows.Devices.Geolocation.IPositionChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("37859CE5-9D1E-46C5-BF3B-6AD8CAC1A093"), exclusiveto, contract] */
                MIDL_INTERFACE("37859CE5-9D1E-46C5-BF3B-6AD8CAC1A093")
                IPositionChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoposition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPositionChangedEventArgs=_uuidof(IPositionChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.StatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IStatusChangedEventArgs[] = L"Windows.Devices.Geolocation.IStatusChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("3453D2DA-8C93-4111-A205-9AECFC9BE5C0"), exclusiveto, contract] */
                MIDL_INTERFACE("3453D2DA-8C93-4111-A205-9AECFC9BE5C0")
                IStatusChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::PositionStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStatusChangedEventArgs=_uuidof(IStatusChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IVenueData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.VenueData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IVenueData[] = L"Windows.Devices.Geolocation.IVenueData";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                /* [object, uuid("66F39187-60E3-4B2F-B527-4F53F1C3C677"), exclusiveto, contract] */
                MIDL_INTERFACE("66F39187-60E3-4B2F-B527-4F53F1C3C677")
                IVenueData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Level(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVenueData=_uuidof(IVenueData);
                
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIVenueData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.CivicAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.ICivicAddress ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_CivicAddress_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_CivicAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_CivicAddress[] = L"Windows.Devices.Geolocation.CivicAddress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.GeoboundingBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeoboundingBoxFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeoboundingBoxStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeoboundingBox ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeoboundingBox_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeoboundingBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeoboundingBox[] = L"Windows.Devices.Geolocation.GeoboundingBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geocircle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeocircleFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeocircle ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geocircle_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geocircle_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocircle[] = L"Windows.Devices.Geolocation.Geocircle";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geocoordinate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeocoordinate ** Default Interface **
 *    Windows.Devices.Geolocation.IGeocoordinateWithPositionData
 *    Windows.Devices.Geolocation.IGeocoordinateWithPoint
 *    Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geocoordinate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geocoordinate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocoordinate[] = L"Windows.Devices.Geolocation.Geocoordinate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.GeocoordinateSatelliteData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeocoordinateSatelliteData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeocoordinateSatelliteData_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeocoordinateSatelliteData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeocoordinateSatelliteData[] = L"Windows.Devices.Geolocation.GeocoordinateSatelliteData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geolocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeolocatorStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeolocatorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeolocator ** Default Interface **
 *    Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy
 *    Windows.Devices.Geolocation.IGeolocator2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geolocator_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geolocator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geolocator[] = L"Windows.Devices.Geolocation.Geolocator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geopath
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeopathFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeopath ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geopath_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geopath_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geopath[] = L"Windows.Devices.Geolocation.Geopath";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geopoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeopointFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeopoint ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geopoint_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geopoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geopoint[] = L"Windows.Devices.Geolocation.Geopoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geoposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeoposition ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoposition2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geoposition_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geoposition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geoposition[] = L"Windows.Devices.Geolocation.Geoposition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geovisit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisit ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geovisit_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geovisit_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geovisit[] = L"Windows.Devices.Geolocation.Geovisit";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.GeovisitMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeovisitMonitorStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisitMonitor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitMonitor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitMonitor[] = L"Windows.Devices.Geolocation.GeovisitMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.GeovisitStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs[] = L"Windows.Devices.Geolocation.GeovisitStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.GeovisitTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisitTriggerDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitTriggerDetails[] = L"Windows.Devices.Geolocation.GeovisitTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.PositionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IPositionChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_PositionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_PositionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_PositionChangedEventArgs[] = L"Windows.Devices.Geolocation.PositionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.StatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_StatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_StatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_StatusChangedEventArgs[] = L"Windows.Devices.Geolocation.StatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.VenueData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IVenueData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_VenueData_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_VenueData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_VenueData[] = L"Windows.Devices.Geolocation.VenueData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;

#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CBasicGeoposition **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeopath;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeopath;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeopath **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeopoint **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeoposition **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeovisit **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if !defined(____FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
            /* [in] */ struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;

interface __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath;

typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl;

interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit;

typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;

interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CGeolocation__CGeopath __FIVector_1_Windows__CDevices__CGeolocation__CGeopath;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGeolocation__CGeopath;

typedef struct __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeopath **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This, /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeopath * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl;

interface __FIVector_1_Windows__CDevices__CGeolocation__CGeopath
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGeolocation__CGeopathVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeopath_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CGeolocation__CGeopath_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopoint **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeoposition **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGeolocation__CGeovisit **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisitVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisitVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition;

typedef struct __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition *value);
    END_INTERFACE
} __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl;

interface __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition
{
    CONST_VTBL struct __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

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


struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__


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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange;


typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;
























































/*
 *
 * Struct Windows.Devices.Geolocation.AltitudeReferenceSystem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem
{
    AltitudeReferenceSystem_Unspecified = 0,
    AltitudeReferenceSystem_Terrain = 1,
    AltitudeReferenceSystem_Ellipsoid = 2,
    AltitudeReferenceSystem_Geoid = 3,
    AltitudeReferenceSystem_Surface = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.GeolocationAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeolocationAccessStatus
{
    GeolocationAccessStatus_Unspecified = 0,
    GeolocationAccessStatus_Allowed = 1,
    GeolocationAccessStatus_Denied = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.GeoshapeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType
{
    GeoshapeType_Geopoint = 0,
    GeoshapeType_Geocircle = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    GeoshapeType_Geopath = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    GeoshapeType_GeoboundingBox = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.PositionAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy
{
    PositionAccuracy_Default = 0,
    PositionAccuracy_High = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.PositionSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource
{
    PositionSource_Cellular = 0,
    PositionSource_Satellite = 1,
    PositionSource_WiFi = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    PositionSource_IPAddress = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    PositionSource_Unknown = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    PositionSource_Default = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    PositionSource_Obfuscated = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.PositionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus
{
    PositionStatus_Ready = 0,
    PositionStatus_Initializing = 1,
    PositionStatus_NoData = 2,
    PositionStatus_Disabled = 3,
    PositionStatus_NotInitialized = 4,
    PositionStatus_NotAvailable = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.VisitMonitoringScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope
{
    VisitMonitoringScope_Venue = 0,
    VisitMonitoringScope_City = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.Geolocation.VisitStateChange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange
{
    VisitStateChange_TrackingLost = 0,
    VisitStateChange_Arrived = 1,
    VisitStateChange_Departed = 2,
    VisitStateChange_OtherMovement = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Devices.Geolocation.BasicGeoposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition
{
    DOUBLE Latitude;
    DOUBLE Longitude;
    DOUBLE Altitude;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.ICivicAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.CivicAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_ICivicAddress[] = L"Windows.Devices.Geolocation.ICivicAddress";
/* [object, uuid("A8567A1A-64F4-4D48-BCEA-F6B008ECA34C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_City )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_Country(This,value) \
    ( (This)->lpVtbl->get_Country(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_City(This,value) \
    ( (This)->lpVtbl->get_City(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_PostalCode(This,value) \
    ( (This)->lpVtbl->get_PostalCode(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoboundingBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeoboundingBox
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBox[] = L"Windows.Devices.Geolocation.IGeoboundingBox";
/* [object, uuid("0896C80B-274F-43DA-9A06-CBFCDAEB4EC2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NorthwestCorner )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoutheastCorner )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinAltitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxAltitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_get_NorthwestCorner(This,value) \
    ( (This)->lpVtbl->get_NorthwestCorner(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_get_SoutheastCorner(This,value) \
    ( (This)->lpVtbl->get_SoutheastCorner(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_get_Center(This,value) \
    ( (This)->lpVtbl->get_Center(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_get_MinAltitude(This,value) \
    ( (This)->lpVtbl->get_MinAltitude(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_get_MaxAltitude(This,value) \
    ( (This)->lpVtbl->get_MaxAltitude(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoboundingBoxFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeoboundingBox
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBoxFactory[] = L"Windows.Devices.Geolocation.IGeoboundingBoxFactory";
/* [object, uuid("4DFBA589-0411-4ABC-B3B5-5BBCCB57D98C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition northwestCorner,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition southeastCorner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition northwestCorner,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition southeastCorner,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceAndSpatialReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition northwestCorner,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition southeastCorner,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [in] */UINT32 spatialReferenceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_Create(This,northwestCorner,southeastCorner,value) \
    ( (This)->lpVtbl->Create(This,northwestCorner,southeastCorner,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_CreateWithAltitudeReference(This,northwestCorner,southeastCorner,altitudeReferenceSystem,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReference(This,northwestCorner,southeastCorner,altitudeReferenceSystem,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_CreateWithAltitudeReferenceAndSpatialReference(This,northwestCorner,southeastCorner,altitudeReferenceSystem,spatialReferenceId,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReferenceAndSpatialReference(This,northwestCorner,southeastCorner,altitudeReferenceSystem,spatialReferenceId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoboundingBoxStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeoboundingBox
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoboundingBoxStatics[] = L"Windows.Devices.Geolocation.IGeoboundingBoxStatics";
/* [object, uuid("67B80708-E61A-4CD0-841B-93233792B5CA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *TryCompute )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryComputeWithAltitudeReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeRefSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TryComputeWithAltitudeReferenceAndSpatialReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeRefSystem,
        /* [in] */UINT32 spatialReferenceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_TryCompute(This,positions,value) \
    ( (This)->lpVtbl->TryCompute(This,positions,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_TryComputeWithAltitudeReference(This,positions,altitudeRefSystem,value) \
    ( (This)->lpVtbl->TryComputeWithAltitudeReference(This,positions,altitudeRefSystem,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_TryComputeWithAltitudeReferenceAndSpatialReference(This,positions,altitudeRefSystem,spatialReferenceId,value) \
    ( (This)->lpVtbl->TryComputeWithAltitudeReferenceAndSpatialReference(This,positions,altitudeRefSystem,spatialReferenceId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBoxStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocircle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocircle
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocircle[] = L"Windows.Devices.Geolocation.IGeocircle";
/* [object, uuid("39E45843-A7F9-4E63-92A7-BA0C28D124B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_get_Center(This,value) \
    ( (This)->lpVtbl->get_Center(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_get_Radius(This,value) \
    ( (This)->lpVtbl->get_Radius(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocircleFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocircle
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocircleFactory[] = L"Windows.Devices.Geolocation.IGeocircleFactory";
/* [object, uuid("AFD6531F-72B1-4F7D-87CC-4ED4C9849C05"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
        /* [in] */DOUBLE radius,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystem )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
        /* [in] */DOUBLE radius,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystemAndSpatialReferenceId )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
        /* [in] */DOUBLE radius,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [in] */UINT32 spatialReferenceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_Create(This,position,radius,value) \
    ( (This)->lpVtbl->Create(This,position,radius,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_CreateWithAltitudeReferenceSystem(This,position,radius,altitudeReferenceSystem,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystem(This,position,radius,altitudeReferenceSystem,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_CreateWithAltitudeReferenceSystemAndSpatialReferenceId(This,position,radius,altitudeReferenceSystem,spatialReferenceId,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystemAndSpatialReferenceId(This,position,radius,altitudeReferenceSystem,spatialReferenceId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircleFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinate[] = L"Windows.Devices.Geolocation.IGeocoordinate";
/* [object, uuid("EE21A3AA-976A-4C70-803D-083EA55BCBC4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Latitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Latitude")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Latitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Longitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Longitude")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Longitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Altitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Altitude")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Altitude )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Accuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AltitudeAccuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Heading )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Speed )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Latitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Latitude")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Latitude(This,value) \
    ( (This)->lpVtbl->get_Latitude(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Longitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Longitude")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Longitude(This,value) \
    ( (This)->lpVtbl->get_Longitude(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Altitude may be altered or unavailable after Windows 8.1. Instead, use Point.Position.Altitude")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Altitude(This,value) \
    ( (This)->lpVtbl->get_Altitude(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Accuracy(This,value) \
    ( (This)->lpVtbl->get_Accuracy(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_AltitudeAccuracy(This,value) \
    ( (This)->lpVtbl->get_AltitudeAccuracy(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Heading(This,value) \
    ( (This)->lpVtbl->get_Heading(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Speed(This,value) \
    ( (This)->lpVtbl->get_Speed(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateSatelliteData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeocoordinateSatelliteData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateSatelliteData[] = L"Windows.Devices.Geolocation.IGeocoordinateSatelliteData";
/* [object, uuid("C32A74D9-2608-474C-912C-06DD490F4AF7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionDilutionOfPrecision )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * ppValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalDilutionOfPrecision )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * ppValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalDilutionOfPrecision )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * ppValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteDataVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_get_PositionDilutionOfPrecision(This,ppValue) \
    ( (This)->lpVtbl->get_PositionDilutionOfPrecision(This,ppValue) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_get_HorizontalDilutionOfPrecision(This,ppValue) \
    ( (This)->lpVtbl->get_HorizontalDilutionOfPrecision(This,ppValue) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_get_VerticalDilutionOfPrecision(This,ppValue) \
    ( (This)->lpVtbl->get_VerticalDilutionOfPrecision(This,ppValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateWithPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPoint[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPoint";
/* [object, uuid("FEEA0525-D22C-4D46-B527-0B96066FC7DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPointVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_get_Point(This,value) \
    ( (This)->lpVtbl->get_Point(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateWithPositionData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPositionData[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPositionData";
/* [object, uuid("95E634BE-DBD6-40AC-B8F2-A65C0340D9A6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionSource )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionSource * pValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SatelliteData )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateSatelliteData * * ppValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionDataVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_get_PositionSource(This,pValue) \
    ( (This)->lpVtbl->get_PositionSource(This,pValue) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_get_SatelliteData(This,ppValue) \
    ( (This)->lpVtbl->get_SatelliteData(This,ppValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geocoordinate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeocoordinateWithPositionSourceTimestamp[] = L"Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp";
/* [object, uuid("8543FC02-C9F1-4610-AFE0-8BC3A6A87036"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionSourceTimestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestampVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestampVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_get_PositionSourceTimestamp(This,value) \
    ( (This)->lpVtbl->get_PositionSourceTimestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinateWithPositionSourceTimestamp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator[] = L"Windows.Devices.Geolocation.IGeolocator";
/* [object, uuid("A9C3BF62-4524-4989-8AA9-DE019D2E551F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracy )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CPositionAccuracy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MovementThreshold )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MovementThreshold )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocationStatus )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGeopositionAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGeopositionAsyncWithAgeAndTimeout )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan maximumAge,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan timeout,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeoposition * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CPositionChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeolocator_Windows__CDevices__CGeolocation__CStatusChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_DesiredAccuracy(This,value) \
    ( (This)->lpVtbl->get_DesiredAccuracy(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_put_DesiredAccuracy(This,value) \
    ( (This)->lpVtbl->put_DesiredAccuracy(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_MovementThreshold(This,value) \
    ( (This)->lpVtbl->get_MovementThreshold(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_put_MovementThreshold(This,value) \
    ( (This)->lpVtbl->put_MovementThreshold(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_ReportInterval(This,value) \
    ( (This)->lpVtbl->get_ReportInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_put_ReportInterval(This,value) \
    ( (This)->lpVtbl->put_ReportInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_get_LocationStatus(This,value) \
    ( (This)->lpVtbl->get_LocationStatus(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetGeopositionAsync(This,value) \
    ( (This)->lpVtbl->GetGeopositionAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_GetGeopositionAsyncWithAgeAndTimeout(This,maximumAge,timeout,value) \
    ( (This)->lpVtbl->GetGeopositionAsyncWithAgeAndTimeout(This,maximumAge,timeout,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_add_PositionChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PositionChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_remove_PositionChanged(This,token) \
    ( (This)->lpVtbl->remove_PositionChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_add_StatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_remove_StatusChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocator2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocator2[] = L"Windows.Devices.Geolocation.IGeolocator2";
/* [object, uuid("D1B42E6D-8891-43B4-AD36-27C6FE9A97B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AllowFallbackToConsentlessPositions )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2Vtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_AllowFallbackToConsentlessPositions(This) \
    ( (This)->lpVtbl->AllowFallbackToConsentlessPositions(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocatorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorStatics[] = L"Windows.Devices.Geolocation.IGeolocatorStatics";
/* [object, uuid("9A8E7571-2DF5-4591-9F87-EB5FD894E9B7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeolocationAccessStatus * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGeopositionHistoryAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetGeopositionHistoryWithDurationAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGeolocation__CGeoposition * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_RequestAccessAsync(This,result) \
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_GetGeopositionHistoryAsync(This,startTime,result) \
    ( (This)->lpVtbl->GetGeopositionHistoryAsync(This,startTime,result) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_GetGeopositionHistoryWithDurationAsync(This,startTime,duration,result) \
    ( (This)->lpVtbl->GetGeopositionHistoryWithDurationAsync(This,startTime,duration,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocatorStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorStatics2[] = L"Windows.Devices.Geolocation.IGeolocatorStatics2";
/* [object, uuid("993011A2-FA1C-4631-A71D-0DBEB1250D9C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDefaultGeopositionRecommended )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultGeoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultGeoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CDevices__CGeolocation__CBasicGeoposition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_get_IsDefaultGeopositionRecommended(This,value) \
    ( (This)->lpVtbl->get_IsDefaultGeopositionRecommended(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_put_DefaultGeoposition(This,value) \
    ( (This)->lpVtbl->put_DefaultGeoposition(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_get_DefaultGeoposition(This,value) \
    ( (This)->lpVtbl->get_DefaultGeoposition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geolocator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeolocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeolocatorWithScalarAccuracy[] = L"Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy";
/* [object, uuid("96F5D3C1-B80F-460A-994D-A96C47A51AA4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracyInMeters )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracyInMeters )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracyVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_get_DesiredAccuracyInMeters(This,value) \
    ( (This)->lpVtbl->get_DesiredAccuracyInMeters(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_put_DesiredAccuracyInMeters(This,value) \
    ( (This)->lpVtbl->put_DesiredAccuracyInMeters(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeolocatorWithScalarAccuracy_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopath
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopath
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopath[] = L"Windows.Devices.Geolocation.IGeopath";
/* [object, uuid("E53FD7B9-2DA4-4714-A652-DE8593289898"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Positions )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CBasicGeoposition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_get_Positions(This,value) \
    ( (This)->lpVtbl->get_Positions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopathFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopath
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopathFactory[] = L"Windows.Devices.Geolocation.IGeopathFactory";
/* [object, uuid("27BEA9C8-C7E7-4359-9B9B-FCA3E05EF593"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceAndSpatialReference )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CBasicGeoposition * positions,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [in] */UINT32 spatialReferenceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_Create(This,positions,value) \
    ( (This)->lpVtbl->Create(This,positions,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_CreateWithAltitudeReference(This,positions,altitudeReferenceSystem,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReference(This,positions,altitudeReferenceSystem,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_CreateWithAltitudeReferenceAndSpatialReference(This,positions,altitudeReferenceSystem,spatialReferenceId,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReferenceAndSpatialReference(This,positions,altitudeReferenceSystem,spatialReferenceId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopathFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopoint
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoshape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopoint[] = L"Windows.Devices.Geolocation.IGeopoint";
/* [object, uuid("6BFA00EB-E56E-49BB-9CAF-CBAA78A8BCEF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeopointFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geopoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeopointFactory[] = L"Windows.Devices.Geolocation.IGeopointFactory";
/* [object, uuid("DB6B8D33-76BD-4E30-8AF7-A844DC37B7A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystem )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAltitudeReferenceSystemAndSpatialReferenceId )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition position,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem altitudeReferenceSystem,
        /* [in] */UINT32 spatialReferenceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_Create(This,position,value) \
    ( (This)->lpVtbl->Create(This,position,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_CreateWithAltitudeReferenceSystem(This,position,altitudeReferenceSystem,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystem(This,position,altitudeReferenceSystem,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_CreateWithAltitudeReferenceSystemAndSpatialReferenceId(This,position,altitudeReferenceSystem,spatialReferenceId,value) \
    ( (This)->lpVtbl->CreateWithAltitudeReferenceSystemAndSpatialReferenceId(This,position,altitudeReferenceSystem,spatialReferenceId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeopointFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geoposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition[] = L"Windows.Devices.Geolocation.IGeoposition";
/* [object, uuid("C18D0454-7D41-4FF7-A957-9DFFB4EF7F5B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Coordinate )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CivicAddress )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CICivicAddress * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeopositionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_get_Coordinate(This,value) \
    ( (This)->lpVtbl->get_Coordinate(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_get_CivicAddress(This,value) \
    ( (This)->lpVtbl->get_CivicAddress(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoposition2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geoposition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Geolocation.IGeoposition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoposition2[] = L"Windows.Devices.Geolocation.IGeoposition2";
/* [object, uuid("7F62F697-8671-4B0D-86F8-474A8496187C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VenueData )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2Vtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_get_VenueData(This,value) \
    ( (This)->lpVtbl->get_VenueData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeoshape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeoshape[] = L"Windows.Devices.Geolocation.IGeoshape";
/* [object, uuid("C99CA2AF-C729-43C1-8FAB-D6DEC914DF7E"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GeoshapeType )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeoshapeType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpatialReferenceId )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AltitudeReferenceSystem )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CAltitudeReferenceSystem * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshapeVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshapeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_get_GeoshapeType(This,value) \
    ( (This)->lpVtbl->get_GeoshapeType(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_get_SpatialReferenceId(This,value) \
    ( (This)->lpVtbl->get_SpatialReferenceId(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_get_AltitudeReferenceSystem(This,value) \
    ( (This)->lpVtbl->get_AltitudeReferenceSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geovisit
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisit[] = L"Windows.Devices.Geolocation.IGeovisit";
/* [object, uuid("B1877A76-9EF6-41AB-A0DD-793ECE76E2DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StateChange )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CVisitStateChange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_get_StateChange(This,value) \
    ( (This)->lpVtbl->get_StateChange(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitMonitor[] = L"Windows.Devices.Geolocation.IGeovisitMonitor";
/* [object, uuid("80118AAF-5944-4591-83C1-396647F54F2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MonitoringScope )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CVisitMonitoringScope value
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VisitStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeovisitMonitor_Windows__CDevices__CGeolocation__CGeovisitStateChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VisitStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_get_MonitoringScope(This,value) \
    ( (This)->lpVtbl->get_MonitoringScope(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_Start(This,value) \
    ( (This)->lpVtbl->Start(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_add_VisitStateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_VisitStateChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_remove_VisitStateChanged(This,token) \
    ( (This)->lpVtbl->remove_VisitStateChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitMonitorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitMonitorStatics[] = L"Windows.Devices.Geolocation.IGeovisitMonitorStatics";
/* [object, uuid("BCF976A7-BBF2-4CDD-95CF-554C82EDFB87"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetLastReportAsync )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGeolocation__CGeovisit * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_GetLastReportAsync(This,value) \
    ( (This)->lpVtbl->GetLastReportAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitMonitorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitStateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitStateChangedEventArgs[] = L"Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs";
/* [object, uuid("CEB4D1FF-8B53-4968-BEED-4CECD029CE15"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Visit )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisit * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_get_Visit(This,value) \
    ( (This)->lpVtbl->get_Visit(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IGeovisitTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.GeovisitTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IGeovisitTriggerDetails[] = L"Windows.Devices.Geolocation.IGeovisitTriggerDetails";
/* [object, uuid("EA770D9E-D1C9-454B-99B7-B2F8CDD2482F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadReports )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeovisit * * values
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetailsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_ReadReports(This,values) \
    ( (This)->lpVtbl->ReadReports(This,values) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIGeovisitTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Geolocation.IPositionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.PositionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IPositionChangedEventArgs[] = L"Windows.Devices.Geolocation.IPositionChangedEventArgs";
/* [object, uuid("37859CE5-9D1E-46C5-BF3B-6AD8CAC1A093"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIPositionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.StatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IStatusChangedEventArgs[] = L"Windows.Devices.Geolocation.IStatusChangedEventArgs";
/* [object, uuid("3453D2DA-8C93-4111-A205-9AECFC9BE5C0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CPositionStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.IVenueData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.VenueData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_IVenueData[] = L"Windows.Devices.Geolocation.IVenueData";
/* [object, uuid("66F39187-60E3-4B2F-B527-4F53F1C3C677"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CIVenueDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Level )(
        __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CIVenueDataVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CIVenueDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_get_Level(This,value) \
    ( (This)->lpVtbl->get_Level(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CIVenueData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CIVenueData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.CivicAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.ICivicAddress ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_CivicAddress_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_CivicAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_CivicAddress[] = L"Windows.Devices.Geolocation.CivicAddress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.GeoboundingBox
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeoboundingBoxFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeoboundingBoxStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeoboundingBox ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeoboundingBox_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeoboundingBox_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeoboundingBox[] = L"Windows.Devices.Geolocation.GeoboundingBox";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geocircle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeocircleFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeocircle ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geocircle_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geocircle_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocircle[] = L"Windows.Devices.Geolocation.Geocircle";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geocoordinate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeocoordinate ** Default Interface **
 *    Windows.Devices.Geolocation.IGeocoordinateWithPositionData
 *    Windows.Devices.Geolocation.IGeocoordinateWithPoint
 *    Windows.Devices.Geolocation.IGeocoordinateWithPositionSourceTimestamp
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geocoordinate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geocoordinate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geocoordinate[] = L"Windows.Devices.Geolocation.Geocoordinate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.GeocoordinateSatelliteData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeocoordinateSatelliteData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeocoordinateSatelliteData_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeocoordinateSatelliteData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeocoordinateSatelliteData[] = L"Windows.Devices.Geolocation.GeocoordinateSatelliteData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geolocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeolocatorStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeolocatorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeolocator ** Default Interface **
 *    Windows.Devices.Geolocation.IGeolocatorWithScalarAccuracy
 *    Windows.Devices.Geolocation.IGeolocator2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geolocator_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geolocator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geolocator[] = L"Windows.Devices.Geolocation.Geolocator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geopath
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeopathFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeopath ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geopath_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geopath_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geopath[] = L"Windows.Devices.Geolocation.Geopath";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geopoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.IGeopointFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeopoint ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoshape
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geopoint_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geopoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geopoint[] = L"Windows.Devices.Geolocation.Geopoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geoposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeoposition ** Default Interface **
 *    Windows.Devices.Geolocation.IGeoposition2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geoposition_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geoposition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geoposition[] = L"Windows.Devices.Geolocation.Geoposition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geovisit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisit ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geovisit_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geovisit_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geovisit[] = L"Windows.Devices.Geolocation.Geovisit";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.GeovisitMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.IGeovisitMonitorStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisitMonitor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitMonitor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitMonitor[] = L"Windows.Devices.Geolocation.GeovisitMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.GeovisitStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisitStateChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitStateChangedEventArgs[] = L"Windows.Devices.Geolocation.GeovisitStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.GeovisitTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IGeovisitTriggerDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_GeovisitTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_GeovisitTriggerDetails[] = L"Windows.Devices.Geolocation.GeovisitTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Devices.Geolocation.PositionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IPositionChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_PositionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_PositionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_PositionChangedEventArgs[] = L"Windows.Devices.Geolocation.PositionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.StatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_StatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_StatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_StatusChangedEventArgs[] = L"Windows.Devices.Geolocation.StatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.VenueData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.IVenueData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_VenueData_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_VenueData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_VenueData[] = L"Windows.Devices.Geolocation.VenueData";
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
#endif // __windows2Edevices2Egeolocation_p_h__

#endif // __windows2Edevices2Egeolocation_h__
