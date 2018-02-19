/* Header file automatically generated from windows.services.maps.idl */
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
#ifndef __windows2Eservices2Emaps_h__
#define __windows2Eservices2Emaps_h__
#ifndef __windows2Eservices2Emaps_p_h__
#define __windows2Eservices2Emaps_p_h__


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

#if !defined(WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION)
#define WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION)

#if !defined(WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION)
#define WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION)

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
#include "Windows.Devices.Geolocation.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IEnhancedWaypoint;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint ABI::Windows::Services::Maps::IEnhancedWaypoint

#endif // ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IEnhancedWaypointFactory;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory ABI::Windows::Services::Maps::IEnhancedWaypointFactory

#endif // ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IManeuverWarning;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning ABI::Windows::Services::Maps::IManeuverWarning

#endif // ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapAddress;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress ABI::Windows::Services::Maps::IMapAddress

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapAddress2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 ABI::Windows::Services::Maps::IMapAddress2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapLocation;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation ABI::Windows::Services::Maps::IMapLocation

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapLocationFinderResult;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult ABI::Windows::Services::Maps::IMapLocationFinderResult

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapLocationFinderStatics;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics ABI::Windows::Services::Maps::IMapLocationFinderStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapLocationFinderStatics2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 ABI::Windows::Services::Maps::IMapLocationFinderStatics2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapManagerStatics;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics ABI::Windows::Services::Maps::IMapManagerStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRoute;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute ABI::Windows::Services::Maps::IMapRoute

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRoute2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 ABI::Windows::Services::Maps::IMapRoute2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRoute3;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 ABI::Windows::Services::Maps::IMapRoute3

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRoute4;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 ABI::Windows::Services::Maps::IMapRoute4

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteDrivingOptions;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions ABI::Windows::Services::Maps::IMapRouteDrivingOptions

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteFinderResult;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult ABI::Windows::Services::Maps::IMapRouteFinderResult

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteFinderResult2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 ABI::Windows::Services::Maps::IMapRouteFinderResult2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteFinderStatics;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics ABI::Windows::Services::Maps::IMapRouteFinderStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteFinderStatics2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 ABI::Windows::Services::Maps::IMapRouteFinderStatics2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteFinderStatics3;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 ABI::Windows::Services::Maps::IMapRouteFinderStatics3

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteLeg;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg ABI::Windows::Services::Maps::IMapRouteLeg

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteLeg2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 ABI::Windows::Services::Maps::IMapRouteLeg2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteManeuver;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver ABI::Windows::Services::Maps::IMapRouteManeuver

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteManeuver2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 ABI::Windows::Services::Maps::IMapRouteManeuver2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapRouteManeuver3;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 ABI::Windows::Services::Maps::IMapRouteManeuver3

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapServiceStatics;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics ABI::Windows::Services::Maps::IMapServiceStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapServiceStatics2;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 ABI::Windows::Services::Maps::IMapServiceStatics2

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapServiceStatics3;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 ABI::Windows::Services::Maps::IMapServiceStatics3

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IMapServiceStatics4;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 ABI::Windows::Services::Maps::IMapServiceStatics4

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IPlaceInfo;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo ABI::Windows::Services::Maps::IPlaceInfo

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IPlaceInfoCreateOptions;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions ABI::Windows::Services::Maps::IPlaceInfoCreateOptions

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                interface IPlaceInfoStatics;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics ABI::Windows::Services::Maps::IPlaceInfoStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class EnhancedWaypoint;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("164a4c21-d0a0-5d68-80e2-44889dcea6d5"))
IIterator<ABI::Windows::Services::Maps::EnhancedWaypoint*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::EnhancedWaypoint*, ABI::Windows::Services::Maps::IEnhancedWaypoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.EnhancedWaypoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::EnhancedWaypoint*> __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_t;
#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IEnhancedWaypoint*>
//#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IEnhancedWaypoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d0545dba-9b05-5e37-bfc0-3da2b51d135b"))
IIterable<ABI::Windows::Services::Maps::EnhancedWaypoint*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::EnhancedWaypoint*, ABI::Windows::Services::Maps::IEnhancedWaypoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.EnhancedWaypoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::EnhancedWaypoint*> __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_t;
#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IEnhancedWaypoint*>
//#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IEnhancedWaypoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class ManeuverWarning;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("df74a2a3-1eeb-5ac2-bc5f-9f2daffce017"))
IIterator<ABI::Windows::Services::Maps::ManeuverWarning*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::ManeuverWarning*, ABI::Windows::Services::Maps::IManeuverWarning*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.ManeuverWarning>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::ManeuverWarning*> __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_t;
#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IManeuverWarning*>
//#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IManeuverWarning*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ce0a7c13-d3c4-55af-a90f-c53f7bd93373"))
IIterable<ABI::Windows::Services::Maps::ManeuverWarning*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::ManeuverWarning*, ABI::Windows::Services::Maps::IManeuverWarning*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.ManeuverWarning>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::ManeuverWarning*> __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_t;
#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IManeuverWarning*>
//#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IManeuverWarning*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapLocation;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CMapLocation_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CMapLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2a704d9a-3997-5f1e-8641-883eba408726"))
IIterator<ABI::Windows::Services::Maps::MapLocation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapLocation*, ABI::Windows::Services::Maps::IMapLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.MapLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::MapLocation*> __FIIterator_1_Windows__CServices__CMaps__CMapLocation_t;
#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CMapLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapLocation*>
//#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CMapLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CMapLocation_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CMapLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("77da6151-0763-508a-9041-3310baace575"))
IIterable<ABI::Windows::Services::Maps::MapLocation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapLocation*, ABI::Windows::Services::Maps::IMapLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.MapLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::MapLocation*> __FIIterable_1_Windows__CServices__CMaps__CMapLocation_t;
#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CMapLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapLocation*>
//#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CMapLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapRoute;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CMapRoute_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CMapRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("97e8485a-79c0-5343-93d1-47cdfb55246b"))
IIterator<ABI::Windows::Services::Maps::MapRoute*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRoute*, ABI::Windows::Services::Maps::IMapRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.MapRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::MapRoute*> __FIIterator_1_Windows__CServices__CMaps__CMapRoute_t;
#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CMapRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapRoute*>
//#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CMapRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CMapRoute_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CMapRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d88a62a2-0edf-5312-97a8-10aeaea80b99"))
IIterable<ABI::Windows::Services::Maps::MapRoute*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRoute*, ABI::Windows::Services::Maps::IMapRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.MapRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::MapRoute*> __FIIterable_1_Windows__CServices__CMaps__CMapRoute_t;
#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CMapRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapRoute*>
//#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CMapRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapRouteLeg;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dd1be7d2-de62-5752-b2e0-a2b08723b787"))
IIterator<ABI::Windows::Services::Maps::MapRouteLeg*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteLeg*, ABI::Windows::Services::Maps::IMapRouteLeg*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.MapRouteLeg>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::MapRouteLeg*> __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_t;
#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapRouteLeg*>
//#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapRouteLeg*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8ff98759-78cd-56e8-877b-83ce846d6f8b"))
IIterable<ABI::Windows::Services::Maps::MapRouteLeg*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteLeg*, ABI::Windows::Services::Maps::IMapRouteLeg*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.MapRouteLeg>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::MapRouteLeg*> __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_t;
#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapRouteLeg*>
//#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapRouteLeg*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapRouteManeuver;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a7ab048b-a6dc-5e4c-9321-71b0e465dfe8"))
IIterator<ABI::Windows::Services::Maps::MapRouteManeuver*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteManeuver*, ABI::Windows::Services::Maps::IMapRouteManeuver*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.MapRouteManeuver>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::MapRouteManeuver*> __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_t;
#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapRouteManeuver*>
//#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::IMapRouteManeuver*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de9015fb-91d7-556e-bb4d-200b6f58fad4"))
IIterable<ABI::Windows::Services::Maps::MapRouteManeuver*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteManeuver*, ABI::Windows::Services::Maps::IMapRouteManeuver*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.MapRouteManeuver>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::MapRouteManeuver*> __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_t;
#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapRouteManeuver*>
//#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::IMapRouteManeuver*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("44c11b20-c16d-56e1-a0a3-6eb44f2492ea"))
IVectorView<ABI::Windows::Services::Maps::ManeuverWarning*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::ManeuverWarning*, ABI::Windows::Services::Maps::IManeuverWarning*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.ManeuverWarning>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::ManeuverWarning*> __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IManeuverWarning*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IManeuverWarning*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CMapLocation_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CMapLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("58d33d10-e2ef-59f1-b85e-a8819ff0d926"))
IVectorView<ABI::Windows::Services::Maps::MapLocation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapLocation*, ABI::Windows::Services::Maps::IMapLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.MapLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::MapLocation*> __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CMapLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapLocation*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CMapLocation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRoute_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRoute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("265676a9-4a33-5d29-971e-8244a021b84e"))
IVectorView<ABI::Windows::Services::Maps::MapRoute*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRoute*, ABI::Windows::Services::Maps::IMapRoute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.MapRoute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::MapRoute*> __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CMapRoute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapRoute*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapRoute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRoute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f9976360-b3b0-5a88-b1b6-f4339bb85bf0"))
IVectorView<ABI::Windows::Services::Maps::MapRouteLeg*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteLeg*, ABI::Windows::Services::Maps::IMapRouteLeg*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.MapRouteLeg>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::MapRouteLeg*> __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapRouteLeg*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapRouteLeg*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a3f56695-468f-55ef-b184-c98b4cc7e484"))
IVectorView<ABI::Windows::Services::Maps::MapRouteManeuver*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteManeuver*, ABI::Windows::Services::Maps::IMapRouteManeuver*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.MapRouteManeuver>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::MapRouteManeuver*> __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapRouteManeuver*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::IMapRouteManeuver*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapLocationFinderResult;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("26ceeb11-1221-5c2b-bbf9-cfea3663c2ed"))
IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::MapLocationFinderResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapLocationFinderResult*, ABI::Windows::Services::Maps::IMapLocationFinderResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Services.Maps.MapLocationFinderResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::MapLocationFinderResult*> __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::IMapLocationFinderResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::IMapLocationFinderResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_USE
#define DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e5e5ee33-abd8-5695-9fe5-ac95850d7198"))
IAsyncOperation<ABI::Windows::Services::Maps::MapLocationFinderResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapLocationFinderResult*, ABI::Windows::Services::Maps::IMapLocationFinderResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Services.Maps.MapLocationFinderResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Services::Maps::MapLocationFinderResult*> __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_t;
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::IMapLocationFinderResult*>
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::IMapLocationFinderResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapRouteFinderResult;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6e7a2b4f-811c-54c3-8938-6795f4e67009"))
IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::MapRouteFinderResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteFinderResult*, ABI::Windows::Services::Maps::IMapRouteFinderResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Services.Maps.MapRouteFinderResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::MapRouteFinderResult*> __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::IMapRouteFinderResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::IMapRouteFinderResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_USE
#define DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ecaa3e7f-c526-5097-b624-cf743d78a9ba"))
IAsyncOperation<ABI::Windows::Services::Maps::MapRouteFinderResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::MapRouteFinderResult*, ABI::Windows::Services::Maps::IMapRouteFinderResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Services.Maps.MapRouteFinderResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Services::Maps::MapRouteFinderResult*> __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_t;
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::IMapRouteFinderResult*>
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::IMapRouteFinderResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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
        namespace Devices {
            namespace Geolocation {
                class Geopoint;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

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
                class GeoboundingBox;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

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


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geopath;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
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
        namespace UI {
            namespace Popups {
                
                typedef enum Placement : int Placement;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum ManeuverWarningKind : int ManeuverWarningKind;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum ManeuverWarningSeverity : int ManeuverWarningSeverity;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapLocationDesiredAccuracy : int MapLocationDesiredAccuracy;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapLocationFinderStatus : int MapLocationFinderStatus;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapManeuverNotices : unsigned int MapManeuverNotices;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapRouteFinderStatus : int MapRouteFinderStatus;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapRouteManeuverKind : int MapRouteManeuverKind;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapRouteOptimization : int MapRouteOptimization;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapRouteRestrictions : unsigned int MapRouteRestrictions;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum MapServiceDataUsagePreference : int MapServiceDataUsagePreference;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum TrafficCongestion : int TrafficCongestion;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                
                typedef enum WaypointKind : int WaypointKind;
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */



































namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapAddress;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapRouteDrivingOptions;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class PlaceInfo;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class PlaceInfoCreateOptions;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */












/*
 *
 * Struct Windows.Services.Maps.ManeuverWarningKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum ManeuverWarningKind : int
                {
                    ManeuverWarningKind_None = 0,
                    ManeuverWarningKind_Accident = 1,
                    ManeuverWarningKind_AdministrativeDivisionChange = 2,
                    ManeuverWarningKind_Alert = 3,
                    ManeuverWarningKind_BlockedRoad = 4,
                    ManeuverWarningKind_CheckTimetable = 5,
                    ManeuverWarningKind_Congestion = 6,
                    ManeuverWarningKind_Construction = 7,
                    ManeuverWarningKind_CountryChange = 8,
                    ManeuverWarningKind_DisabledVehicle = 9,
                    ManeuverWarningKind_GateAccess = 10,
                    ManeuverWarningKind_GetOffTransit = 11,
                    ManeuverWarningKind_GetOnTransit = 12,
                    ManeuverWarningKind_IllegalUTurn = 13,
                    ManeuverWarningKind_MassTransit = 14,
                    ManeuverWarningKind_Miscellaneous = 15,
                    ManeuverWarningKind_NoIncident = 16,
                    ManeuverWarningKind_Other = 17,
                    ManeuverWarningKind_OtherNews = 18,
                    ManeuverWarningKind_OtherTrafficIncidents = 19,
                    ManeuverWarningKind_PlannedEvent = 20,
                    ManeuverWarningKind_PrivateRoad = 21,
                    ManeuverWarningKind_RestrictedTurn = 22,
                    ManeuverWarningKind_RoadClosures = 23,
                    ManeuverWarningKind_RoadHazard = 24,
                    ManeuverWarningKind_ScheduledConstruction = 25,
                    ManeuverWarningKind_SeasonalClosures = 26,
                    ManeuverWarningKind_Tollbooth = 27,
                    ManeuverWarningKind_TollRoad = 28,
                    ManeuverWarningKind_TollZoneEnter = 29,
                    ManeuverWarningKind_TollZoneExit = 30,
                    ManeuverWarningKind_TrafficFlow = 31,
                    ManeuverWarningKind_TransitLineChange = 32,
                    ManeuverWarningKind_UnpavedRoad = 33,
                    ManeuverWarningKind_UnscheduledConstruction = 34,
                    ManeuverWarningKind_Weather = 35,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.ManeuverWarningSeverity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum ManeuverWarningSeverity : int
                {
                    ManeuverWarningSeverity_None = 0,
                    ManeuverWarningSeverity_LowImpact = 1,
                    ManeuverWarningSeverity_Minor = 2,
                    ManeuverWarningSeverity_Moderate = 3,
                    ManeuverWarningSeverity_Serious = 4,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.MapLocationDesiredAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum MapLocationDesiredAccuracy : int
                {
                    MapLocationDesiredAccuracy_High = 0,
                    MapLocationDesiredAccuracy_Low = 1,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Services.Maps.MapLocationFinderStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum MapLocationFinderStatus : int
                {
                    MapLocationFinderStatus_Success = 0,
                    MapLocationFinderStatus_UnknownError = 1,
                    MapLocationFinderStatus_InvalidCredentials = 2,
                    MapLocationFinderStatus_BadLocation = 3,
                    MapLocationFinderStatus_IndexFailure = 4,
                    MapLocationFinderStatus_NetworkFailure = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    MapLocationFinderStatus_NotSupported = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapManeuverNotices
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, flags, contract] */
                enum MapManeuverNotices : unsigned int
                {
                    MapManeuverNotices_None = 0,
                    MapManeuverNotices_Toll = 0x1,
                    MapManeuverNotices_Unpaved = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(MapManeuverNotices)
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteFinderStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum MapRouteFinderStatus : int
                {
                    MapRouteFinderStatus_Success = 0,
                    MapRouteFinderStatus_UnknownError = 1,
                    MapRouteFinderStatus_InvalidCredentials = 2,
                    MapRouteFinderStatus_NoRouteFound = 3,
                    MapRouteFinderStatus_NoRouteFoundWithGivenOptions = 4,
                    MapRouteFinderStatus_StartPointNotFound = 5,
                    MapRouteFinderStatus_EndPointNotFound = 6,
                    MapRouteFinderStatus_NoPedestrianRouteFound = 7,
                    MapRouteFinderStatus_NetworkFailure = 8,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    MapRouteFinderStatus_NotSupported = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteManeuverKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum MapRouteManeuverKind : int
                {
                    MapRouteManeuverKind_None = 0,
                    MapRouteManeuverKind_Start = 1,
                    MapRouteManeuverKind_Stopover = 2,
                    MapRouteManeuverKind_StopoverResume = 3,
                    MapRouteManeuverKind_End = 4,
                    MapRouteManeuverKind_GoStraight = 5,
                    MapRouteManeuverKind_UTurnLeft = 6,
                    MapRouteManeuverKind_UTurnRight = 7,
                    MapRouteManeuverKind_TurnKeepLeft = 8,
                    MapRouteManeuverKind_TurnKeepRight = 9,
                    MapRouteManeuverKind_TurnLightLeft = 10,
                    MapRouteManeuverKind_TurnLightRight = 11,
                    MapRouteManeuverKind_TurnLeft = 12,
                    MapRouteManeuverKind_TurnRight = 13,
                    MapRouteManeuverKind_TurnHardLeft = 14,
                    MapRouteManeuverKind_TurnHardRight = 15,
                    MapRouteManeuverKind_FreewayEnterLeft = 16,
                    MapRouteManeuverKind_FreewayEnterRight = 17,
                    MapRouteManeuverKind_FreewayLeaveLeft = 18,
                    MapRouteManeuverKind_FreewayLeaveRight = 19,
                    MapRouteManeuverKind_FreewayContinueLeft = 20,
                    MapRouteManeuverKind_FreewayContinueRight = 21,
                    MapRouteManeuverKind_TrafficCircleLeft = 22,
                    MapRouteManeuverKind_TrafficCircleRight = 23,
                    MapRouteManeuverKind_TakeFerry = 24,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteOptimization
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum MapRouteOptimization : int
                {
                    MapRouteOptimization_Time = 0,
                    MapRouteOptimization_Distance = 1,
                    MapRouteOptimization_TimeWithTraffic = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    MapRouteOptimization_Scenic = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteRestrictions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, flags, contract] */
                enum MapRouteRestrictions : unsigned int
                {
                    MapRouteRestrictions_None = 0,
                    MapRouteRestrictions_Highways = 0x1,
                    MapRouteRestrictions_TollRoads = 0x2,
                    MapRouteRestrictions_Ferries = 0x4,
                    MapRouteRestrictions_Tunnels = 0x8,
                    MapRouteRestrictions_DirtRoads = 0x10,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    MapRouteRestrictions_Motorail = 0x20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(MapRouteRestrictions)
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapServiceDataUsagePreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum MapServiceDataUsagePreference : int
                {
                    MapServiceDataUsagePreference_Default = 0,
                    MapServiceDataUsagePreference_OfflineMapDataOnly = 1,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.TrafficCongestion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum TrafficCongestion : int
                {
                    TrafficCongestion_Unknown = 0,
                    TrafficCongestion_Light = 1,
                    TrafficCongestion_Mild = 2,
                    TrafficCongestion_Medium = 3,
                    TrafficCongestion_Heavy = 4,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.WaypointKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [v1_enum, contract] */
                enum WaypointKind : int
                {
                    WaypointKind_Stop = 0,
                    WaypointKind_Via = 1,
                };
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IEnhancedWaypoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.EnhancedWaypoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IEnhancedWaypoint[] = L"Windows.Services.Maps.IEnhancedWaypoint";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("ED268C74-5913-11E6-8B77-86F30CA893D3"), exclusiveto, contract] */
                MIDL_INTERFACE("ED268C74-5913-11E6-8B77-86F30CA893D3")
                IEnhancedWaypoint : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Point(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::WaypointKind * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEnhancedWaypoint=_uuidof(IEnhancedWaypoint);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IEnhancedWaypointFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.EnhancedWaypoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IEnhancedWaypointFactory[] = L"Windows.Services.Maps.IEnhancedWaypointFactory";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("AF868477-A2AA-46DD-B645-23B31B8AA6C7"), exclusiveto, contract] */
                MIDL_INTERFACE("AF868477-A2AA-46DD-B645-23B31B8AA6C7")
                IEnhancedWaypointFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * point,
                        /* [in] */ABI::Windows::Services::Maps::WaypointKind kind,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IEnhancedWaypoint * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEnhancedWaypointFactory=_uuidof(IEnhancedWaypointFactory);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IManeuverWarning
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.ManeuverWarning
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IManeuverWarning[] = L"Windows.Services.Maps.IManeuverWarning";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("C1A36D8A-2630-4378-9E4A-6E44253DCEBA"), exclusiveto, contract] */
                MIDL_INTERFACE("C1A36D8A-2630-4378-9E4A-6E44253DCEBA")
                IManeuverWarning : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::ManeuverWarningKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Severity(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::ManeuverWarningSeverity * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IManeuverWarning=_uuidof(IManeuverWarning);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIManeuverWarning;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapAddress[] = L"Windows.Services.Maps.IMapAddress";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("CFA7A973-A3B4-4494-B3FF-CBA94DB69699"), exclusiveto, contract] */
                MIDL_INTERFACE("CFA7A973-A3B4-4494-B3FF-CBA94DB69699")
                IMapAddress : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BuildingName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BuildingFloor(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BuildingRoom(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BuildingWing(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StreetNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Street(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Neighborhood(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_District(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Town(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Region(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RegionCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Country(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CountryCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PostCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Continent(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapAddress=_uuidof(IMapAddress);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapAddress;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapAddress2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapAddress2[] = L"Windows.Services.Maps.IMapAddress2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("75CD6DF1-E5AD-45A9-BF40-6CF256C1DD13"), exclusiveto, contract] */
                MIDL_INTERFACE("75CD6DF1-E5AD-45A9-BF40-6CF256C1DD13")
                IMapAddress2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedAddress(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapAddress2=_uuidof(IMapAddress2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapAddress2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocation[] = L"Windows.Services.Maps.IMapLocation";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("3C073F57-0DA4-42E8-9EE2-A96FCF2371DC"), exclusiveto, contract] */
                MIDL_INTERFACE("3C073F57-0DA4-42E8-9EE2-A96FCF2371DC")
                IMapLocation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Point(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Address(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IMapAddress * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapLocation=_uuidof(IMapLocation);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocation;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocationFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocationFinderResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderResult[] = L"Windows.Services.Maps.IMapLocationFinderResult";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("43F1F179-E8CC-45F6-BED2-54CCBF965D9A"), exclusiveto, contract] */
                MIDL_INTERFACE("43F1F179-E8CC-45F6-BED2-54CCBF965D9A")
                IMapLocationFinderResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Locations(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapLocationFinderStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapLocationFinderResult=_uuidof(IMapLocationFinderResult);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocationFinderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocationFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderStatics[] = L"Windows.Services.Maps.IMapLocationFinderStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("318ADB5D-1C5D-4F35-A2DF-AACA94959517"), exclusiveto, contract] */
                MIDL_INTERFACE("318ADB5D-1C5D-4F35-A2DF-AACA94959517")
                IMapLocationFinderStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindLocationsAtAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * queryPoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindLocationsAsync(
                        /* [in] */__RPC__in HSTRING searchText,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * referencePoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindLocationsWithMaxCountAsync(
                        /* [in] */__RPC__in HSTRING searchText,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * referencePoint,
                        /* [in] */UINT32 maxCount,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapLocationFinderStatics=_uuidof(IMapLocationFinderStatics);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocationFinderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocationFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderStatics2[] = L"Windows.Services.Maps.IMapLocationFinderStatics2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("959A8B96-6485-4DFD-851A-33AC317E3AF6"), exclusiveto, contract] */
                MIDL_INTERFACE("959A8B96-6485-4DFD-851A-33AC317E3AF6")
                IMapLocationFinderStatics2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindLocationsAtWithAccuracyAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * queryPoint,
                        /* [in] */ABI::Windows::Services::Maps::MapLocationDesiredAccuracy accuracy,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapLocationFinderStatics2=_uuidof(IMapLocationFinderStatics2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.IMapManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapManagerStatics[] = L"Windows.Services.Maps.IMapManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("37E3E515-82B4-4D54-8FD9-AF2624B3011C"), exclusiveto, contract] */
                MIDL_INTERFACE("37E3E515-82B4-4D54-8FD9-AF2624B3011C")
                IMapManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ShowDownloadedMapsUI(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowMapsUpdateUI(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapManagerStatics=_uuidof(IMapManagerStatics);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute[] = L"Windows.Services.Maps.IMapRoute";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("FB07B732-584D-4583-9C60-641FEA274349"), exclusiveto, contract] */
                MIDL_INTERFACE("FB07B732-584D-4583-9C60-641FEA274349")
                IMapRoute : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingBox(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LengthInMeters(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EstimatedDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Legs(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTrafficBased(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRoute=_uuidof(IMapRoute);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute2[] = L"Windows.Services.Maps.IMapRoute2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("D1C5D40C-2213-4AB0-A260-46B38169BEAC"), exclusiveto, contract] */
                MIDL_INTERFACE("D1C5D40C-2213-4AB0-A260-46B38169BEAC")
                IMapRoute2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViolatedRestrictions(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapRouteRestrictions * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasBlockedRoads(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRoute2=_uuidof(IMapRoute2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute3[] = L"Windows.Services.Maps.IMapRoute3";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("858D1EAE-F2AD-429F-BB37-CD21094FFC92"), exclusiveto, contract] */
                MIDL_INTERFACE("858D1EAE-F2AD-429F-BB37-CD21094FFC92")
                IMapRoute3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DurationWithoutTraffic(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrafficCongestion(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::TrafficCongestion * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRoute3=_uuidof(IMapRoute3);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute4[] = L"Windows.Services.Maps.IMapRoute4";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("366C8CA5-3053-4FA1-80FF-D475F3ED1E6E"), exclusiveto, contract] */
                MIDL_INTERFACE("366C8CA5-3053-4FA1-80FF-D475F3ED1E6E")
                IMapRoute4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsScenic(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRoute4=_uuidof(IMapRoute4);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute4;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteDrivingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteDrivingOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteDrivingOptions[] = L"Windows.Services.Maps.IMapRouteDrivingOptions";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("6815364D-C6DC-4697-A452-B18F8F0B67A1"), exclusiveto, contract] */
                MIDL_INTERFACE("6815364D-C6DC-4697-A452-B18F8F0B67A1")
                IMapRouteDrivingOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxAlternateRouteCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxAlternateRouteCount(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialHeading(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InitialHeading(
                        /* [in] */__RPC__in_opt __FIReference_1_double * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RouteOptimization(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapRouteOptimization * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RouteOptimization(
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RouteRestrictions(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapRouteRestrictions * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RouteRestrictions(
                        /* [in] */ABI::Windows::Services::Maps::MapRouteRestrictions value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteDrivingOptions=_uuidof(IMapRouteDrivingOptions);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinderResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderResult[] = L"Windows.Services.Maps.IMapRouteFinderResult";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("A868A31A-9422-46AC-8CA1-B1614D4BFBE2"), exclusiveto, contract] */
                MIDL_INTERFACE("A868A31A-9422-46AC-8CA1-B1614D4BFBE2")
                IMapRouteFinderResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Route(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IMapRoute * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapRouteFinderStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteFinderResult=_uuidof(IMapRouteFinderResult);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinderResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderResult2[] = L"Windows.Services.Maps.IMapRouteFinderResult2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("20709C6D-D90C-46C8-91C6-7D4BE4EFB215"), exclusiveto, contract] */
                MIDL_INTERFACE("20709C6D-D90C-46C8-91C6-7D4BE4EFB215")
                IMapRouteFinderResult2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlternateRoutes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteFinderResult2=_uuidof(IMapRouteFinderResult2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics[] = L"Windows.Services.Maps.IMapRouteFinderStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("B8A5C50F-1C64-4C3A-81EB-1F7C152AFBBB"), exclusiveto, contract] */
                MIDL_INTERFACE("B8A5C50F-1C64-4C3A-81EB-1F7C152AFBBB")
                IMapRouteFinderStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * startPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * endPoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteWithOptimizationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * startPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * endPoint,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization optimization,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteWithOptimizationAndRestrictionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * startPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * endPoint,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization optimization,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteRestrictions restrictions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * startPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * endPoint,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization optimization,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteRestrictions restrictions,
                        /* [in] */DOUBLE headingInDegrees,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteFromWaypointsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteFromWaypointsAndOptimizationAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization optimization,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization optimization,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteRestrictions restrictions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteOptimization optimization,
                        /* [in] */ABI::Windows::Services::Maps::MapRouteRestrictions restrictions,
                        /* [in] */DOUBLE headingInDegrees,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetWalkingRouteAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * startPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * endPoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetWalkingRouteFromWaypointsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteFinderStatics=_uuidof(IMapRouteFinderStatics);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics2[] = L"Windows.Services.Maps.IMapRouteFinderStatics2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("AFCC2C73-7760-49AF-B3BD-BAF135B703E1"), exclusiveto, contract] */
                MIDL_INTERFACE("AFCC2C73-7760-49AF-B3BD-BAF135B703E1")
                IMapRouteFinderStatics2 : IInspectable
                {
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteWithOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * startPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * endPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IMapRouteDrivingOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteFinderStatics2=_uuidof(IMapRouteFinderStatics2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics3[] = L"Windows.Services.Maps.IMapRouteFinderStatics3";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("F6098134-5913-11E6-8B77-86F30CA893D3"), exclusiveto, contract] */
                MIDL_INTERFACE("F6098134-5913-11E6-8B77-86F30CA893D3")
                IMapRouteFinderStatics3 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteFromEnhancedWaypointsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * waypoints,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * waypoints,
                        /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IMapRouteDrivingOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteFinderStatics3=_uuidof(IMapRouteFinderStatics3);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteLeg
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteLeg
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteLeg[] = L"Windows.Services.Maps.IMapRouteLeg";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("96F8B2F6-5BBA-4D17-9DB6-1A263FEC7471"), exclusiveto, contract] */
                MIDL_INTERFACE("96F8B2F6-5BBA-4D17-9DB6-1A263FEC7471")
                IMapRouteLeg : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingBox(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LengthInMeters(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EstimatedDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maneuvers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteLeg=_uuidof(IMapRouteLeg);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteLeg2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteLeg
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteLeg2[] = L"Windows.Services.Maps.IMapRouteLeg2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("02E2062D-C9C6-45B8-8E54-1A10B57A17E8"), exclusiveto, contract] */
                MIDL_INTERFACE("02E2062D-C9C6-45B8-8E54-1A10B57A17E8")
                IMapRouteLeg2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DurationWithoutTraffic(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrafficCongestion(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::TrafficCongestion * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteLeg2=_uuidof(IMapRouteLeg2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteManeuver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteManeuver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver[] = L"Windows.Services.Maps.IMapRouteManeuver";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("ED5C17F0-A6AB-4D65-A086-FA8A7E340DF2"), exclusiveto, contract] */
                MIDL_INTERFACE("ED5C17F0-A6AB-4D65-A086-FA8A7E340DF2")
                IMapRouteManeuver : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartingPoint(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LengthInMeters(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstructionText(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapRouteManeuverKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManeuverNotices(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapManeuverNotices * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteManeuver=_uuidof(IMapRouteManeuver);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteManeuver2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteManeuver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver2[] = L"Windows.Services.Maps.IMapRouteManeuver2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("5D7BCD9C-7C9B-41DF-838B-EAE21E4B05A9"), exclusiveto, contract] */
                MIDL_INTERFACE("5D7BCD9C-7C9B-41DF-838B-EAE21E4B05A9")
                IMapRouteManeuver2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartHeading(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndHeading(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StreetName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteManeuver2=_uuidof(IMapRouteManeuver2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteManeuver3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteManeuver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver3[] = L"Windows.Services.Maps.IMapRouteManeuver3";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("A6A138DF-0483-4166-85BE-B99336C11875"), exclusiveto, contract] */
                MIDL_INTERFACE("A6A138DF-0483-4166-85BE-B99336C11875")
                IMapRouteManeuver3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Warnings(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapRouteManeuver3=_uuidof(IMapRouteManeuver3);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics[] = L"Windows.Services.Maps.IMapServiceStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("0144AD85-C04C-4CDD-871A-A0726D097CD4"), exclusiveto, contract] */
                MIDL_INTERFACE("0144AD85-C04C-4CDD-871A-A0726D097CD4")
                IMapServiceStatics : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServiceToken(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceToken(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapServiceStatics=_uuidof(IMapServiceStatics);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics2[] = L"Windows.Services.Maps.IMapServiceStatics2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("F8193EED-9C85-40A9-8896-0FC3FD2B7C2A"), exclusiveto, contract] */
                MIDL_INTERFACE("F8193EED-9C85-40A9-8896-0FC3FD2B7C2A")
                IMapServiceStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WorldViewRegionCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapServiceStatics2=_uuidof(IMapServiceStatics2);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics3[] = L"Windows.Services.Maps.IMapServiceStatics3";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("0A11CE20-63A7-4854-B355-D6DCDA223D1B"), exclusiveto, contract] */
                MIDL_INTERFACE("0A11CE20-63A7-4854-B355-D6DCDA223D1B")
                IMapServiceStatics3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataAttributions(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapServiceStatics3=_uuidof(IMapServiceStatics3);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics4[] = L"Windows.Services.Maps.IMapServiceStatics4";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("088A2862-6ABC-420E-945F-4CFD89C67356"), exclusiveto, contract] */
                MIDL_INTERFACE("088A2862-6ABC-420E-945F-4CFD89C67356")
                IMapServiceStatics4 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataUsagePreference(
                        /* [in] */ABI::Windows::Services::Maps::MapServiceDataUsagePreference value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataUsagePreference(
                        /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::MapServiceDataUsagePreference * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMapServiceStatics4=_uuidof(IMapServiceStatics4);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IPlaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.PlaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfo[] = L"Windows.Services.Maps.IPlaceInfo";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("9A0810B6-31C8-4F6A-9F18-950B4C38951A"), exclusiveto, contract] */
                MIDL_INTERFACE("9A0810B6-31C8-4F6A-9F18-950B4C38951A")
                IPlaceInfo : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Show(
                        /* [in] */ABI::Windows::Foundation::Rect selection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowWithPreferredPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identifier(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayAddress(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Geoshape(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoshape * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPlaceInfo=_uuidof(IPlaceInfo);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Services.Maps.IPlaceInfoCreateOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.PlaceInfoCreateOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoCreateOptions[] = L"Windows.Services.Maps.IPlaceInfoCreateOptions";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("CD33C125-67F1-4BB3-9907-ECCE939B0399"), exclusiveto, contract] */
                MIDL_INTERFACE("CD33C125-67F1-4BB3-9907-ECCE939B0399")
                IPlaceInfoCreateOptions : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayAddress(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayAddress(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPlaceInfoCreateOptions=_uuidof(IPlaceInfoCreateOptions);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Services.Maps.IPlaceInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.PlaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoStatics[] = L"Windows.Services.Maps.IPlaceInfoStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                /* [object, uuid("82B9FF71-6CD0-48A4-AFD9-5ED82097936B"), exclusiveto, contract] */
                MIDL_INTERFACE("82B9FF71-6CD0-48A4-AFD9-5ED82097936B")
                IPlaceInfoStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * referencePoint,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IPlaceInfo * * resultValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWithGeopointAndOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * referencePoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IPlaceInfoCreateOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IPlaceInfo * * resultValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromIdentifier(
                        /* [in] */__RPC__in HSTRING identifier,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IPlaceInfo * * resultValue
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromIdentifierWithOptions(
                        /* [in] */__RPC__in HSTRING identifier,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeopoint * defaultPoint,
                        /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IPlaceInfoCreateOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IPlaceInfo * * resultValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFromMapLocation(
                        /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IMapLocation * location,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IPlaceInfo * * resultValue
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsShowSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPlaceInfoStatics=_uuidof(IPlaceInfoStatics);
                
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Services.Maps.EnhancedWaypoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Services.Maps.IEnhancedWaypointFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IEnhancedWaypoint ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_EnhancedWaypoint_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_EnhancedWaypoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_EnhancedWaypoint[] = L"Windows.Services.Maps.EnhancedWaypoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.ManeuverWarning
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IManeuverWarning ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_ManeuverWarning_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_ManeuverWarning_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_ManeuverWarning[] = L"Windows.Services.Maps.ManeuverWarning";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.MapAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapAddress ** Default Interface **
 *    Windows.Services.Maps.IMapAddress2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapAddress_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapAddress[] = L"Windows.Services.Maps.MapAddress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapLocation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapLocation_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocation[] = L"Windows.Services.Maps.MapLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapLocationFinder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapLocationFinderStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapLocationFinderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapLocationFinder_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapLocationFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocationFinder[] = L"Windows.Services.Maps.MapLocationFinder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapLocationFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapLocationFinderResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapLocationFinderResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapLocationFinderResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocationFinderResult[] = L"Windows.Services.Maps.MapLocationFinderResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapManager_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapManager[] = L"Windows.Services.Maps.MapManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRoute ** Default Interface **
 *    Windows.Services.Maps.IMapRoute2
 *    Windows.Services.Maps.IMapRoute3
 *    Windows.Services.Maps.IMapRoute4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRoute_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRoute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRoute[] = L"Windows.Services.Maps.MapRoute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteDrivingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteDrivingOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteDrivingOptions_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteDrivingOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteDrivingOptions[] = L"Windows.Services.Maps.MapRouteDrivingOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteFinder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapRouteFinderStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapRouteFinderStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapRouteFinderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteFinder_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteFinder[] = L"Windows.Services.Maps.MapRouteFinder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteFinderResult ** Default Interface **
 *    Windows.Services.Maps.IMapRouteFinderResult2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteFinderResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteFinderResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteFinderResult[] = L"Windows.Services.Maps.MapRouteFinderResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteLeg
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteLeg ** Default Interface **
 *    Windows.Services.Maps.IMapRouteLeg2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteLeg_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteLeg_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteLeg[] = L"Windows.Services.Maps.MapRouteLeg";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteManeuver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteManeuver ** Default Interface **
 *    Windows.Services.Maps.IMapRouteManeuver2
 *    Windows.Services.Maps.IMapRouteManeuver3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteManeuver_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteManeuver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteManeuver[] = L"Windows.Services.Maps.MapRouteManeuver";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics3 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapService_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapService_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapService[] = L"Windows.Services.Maps.MapService";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.PlaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IPlaceInfoStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IPlaceInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Services_Maps_PlaceInfo_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_PlaceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_PlaceInfo[] = L"Windows.Services.Maps.PlaceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Services.Maps.PlaceInfoCreateOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IPlaceInfoCreateOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Services_Maps_PlaceInfoCreateOptions_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_PlaceInfoCreateOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_PlaceInfoCreateOptions[] = L"Windows.Services.Maps.PlaceInfoCreateOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress __x_ABI_CWindows_CServices_CMaps_CIMapAddress;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 __x_ABI_CWindows_CServices_CMaps_CIMapAddress2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocation __x_ABI_CWindows_CServices_CMaps_CIMapLocation;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute __x_ABI_CWindows_CServices_CMaps_CIMapRoute;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 __x_ABI_CWindows_CServices_CMaps_CIMapRoute2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 __x_ABI_CWindows_CServices_CMaps_CIMapRoute3;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 __x_ABI_CWindows_CServices_CMaps_CIMapRoute4;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CEnhancedWaypoint **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypointVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CManeuverWarning;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CManeuverWarningVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CManeuverWarningVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CManeuverWarningVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CManeuverWarning;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CManeuverWarningVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CManeuverWarning **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CManeuverWarningVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CManeuverWarningVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapLocation __FIIterator_1_Windows__CServices__CMaps__CMapLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapLocation;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapLocation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapLocationVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CMapLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapLocation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapLocation __FIIterable_1_Windows__CServices__CMaps__CMapLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapLocation;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CMapLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapLocation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapLocation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapLocationVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CMapLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapLocation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapRoute __FIIterator_1_Windows__CServices__CMaps__CMapRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapRoute;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRoute * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapRouteVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CMapRoute
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRoute_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapRoute __FIIterable_1_Windows__CServices__CMaps__CMapRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapRoute;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRoute * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapRoute **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapRouteVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CMapRoute
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapRoute_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteLegVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapRouteLegVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteLegVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteLegVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapRouteLeg **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapRouteLegVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteLegVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CMapRouteManeuver **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarningVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarningVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarningVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapLocation __FIVectorView_1_Windows__CServices__CMaps__CMapLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapLocation;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CIMapLocation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapLocation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapLocationVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CMapLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapLocation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CMapLocation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapRoute __FIVectorView_1_Windows__CServices__CMaps__CMapRoute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapRoute;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CIMapRoute * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRoute * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapRouteVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CMapRoute
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRoute_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CMapRoute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLegVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLegVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLegVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuverVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult;

typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapLocationFinderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl;

interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult;

typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CMapRouteFinderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl;

interface __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__


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


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;







typedef enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind;


typedef enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions;


typedef enum __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference;


typedef enum __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion;


typedef enum __x_ABI_CWindows_CServices_CMaps_CWaypointKind __x_ABI_CWindows_CServices_CMaps_CWaypointKind;



























































/*
 *
 * Struct Windows.Services.Maps.ManeuverWarningKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind
{
    ManeuverWarningKind_None = 0,
    ManeuverWarningKind_Accident = 1,
    ManeuverWarningKind_AdministrativeDivisionChange = 2,
    ManeuverWarningKind_Alert = 3,
    ManeuverWarningKind_BlockedRoad = 4,
    ManeuverWarningKind_CheckTimetable = 5,
    ManeuverWarningKind_Congestion = 6,
    ManeuverWarningKind_Construction = 7,
    ManeuverWarningKind_CountryChange = 8,
    ManeuverWarningKind_DisabledVehicle = 9,
    ManeuverWarningKind_GateAccess = 10,
    ManeuverWarningKind_GetOffTransit = 11,
    ManeuverWarningKind_GetOnTransit = 12,
    ManeuverWarningKind_IllegalUTurn = 13,
    ManeuverWarningKind_MassTransit = 14,
    ManeuverWarningKind_Miscellaneous = 15,
    ManeuverWarningKind_NoIncident = 16,
    ManeuverWarningKind_Other = 17,
    ManeuverWarningKind_OtherNews = 18,
    ManeuverWarningKind_OtherTrafficIncidents = 19,
    ManeuverWarningKind_PlannedEvent = 20,
    ManeuverWarningKind_PrivateRoad = 21,
    ManeuverWarningKind_RestrictedTurn = 22,
    ManeuverWarningKind_RoadClosures = 23,
    ManeuverWarningKind_RoadHazard = 24,
    ManeuverWarningKind_ScheduledConstruction = 25,
    ManeuverWarningKind_SeasonalClosures = 26,
    ManeuverWarningKind_Tollbooth = 27,
    ManeuverWarningKind_TollRoad = 28,
    ManeuverWarningKind_TollZoneEnter = 29,
    ManeuverWarningKind_TollZoneExit = 30,
    ManeuverWarningKind_TrafficFlow = 31,
    ManeuverWarningKind_TransitLineChange = 32,
    ManeuverWarningKind_UnpavedRoad = 33,
    ManeuverWarningKind_UnscheduledConstruction = 34,
    ManeuverWarningKind_Weather = 35,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.ManeuverWarningSeverity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity
{
    ManeuverWarningSeverity_None = 0,
    ManeuverWarningSeverity_LowImpact = 1,
    ManeuverWarningSeverity_Minor = 2,
    ManeuverWarningSeverity_Moderate = 3,
    ManeuverWarningSeverity_Serious = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.MapLocationDesiredAccuracy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy
{
    MapLocationDesiredAccuracy_High = 0,
    MapLocationDesiredAccuracy_Low = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Services.Maps.MapLocationFinderStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus
{
    MapLocationFinderStatus_Success = 0,
    MapLocationFinderStatus_UnknownError = 1,
    MapLocationFinderStatus_InvalidCredentials = 2,
    MapLocationFinderStatus_BadLocation = 3,
    MapLocationFinderStatus_IndexFailure = 4,
    MapLocationFinderStatus_NetworkFailure = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    MapLocationFinderStatus_NotSupported = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapManeuverNotices
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices
{
    MapManeuverNotices_None = 0,
    MapManeuverNotices_Toll = 0x1,
    MapManeuverNotices_Unpaved = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteFinderStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus
{
    MapRouteFinderStatus_Success = 0,
    MapRouteFinderStatus_UnknownError = 1,
    MapRouteFinderStatus_InvalidCredentials = 2,
    MapRouteFinderStatus_NoRouteFound = 3,
    MapRouteFinderStatus_NoRouteFoundWithGivenOptions = 4,
    MapRouteFinderStatus_StartPointNotFound = 5,
    MapRouteFinderStatus_EndPointNotFound = 6,
    MapRouteFinderStatus_NoPedestrianRouteFound = 7,
    MapRouteFinderStatus_NetworkFailure = 8,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    MapRouteFinderStatus_NotSupported = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteManeuverKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind
{
    MapRouteManeuverKind_None = 0,
    MapRouteManeuverKind_Start = 1,
    MapRouteManeuverKind_Stopover = 2,
    MapRouteManeuverKind_StopoverResume = 3,
    MapRouteManeuverKind_End = 4,
    MapRouteManeuverKind_GoStraight = 5,
    MapRouteManeuverKind_UTurnLeft = 6,
    MapRouteManeuverKind_UTurnRight = 7,
    MapRouteManeuverKind_TurnKeepLeft = 8,
    MapRouteManeuverKind_TurnKeepRight = 9,
    MapRouteManeuverKind_TurnLightLeft = 10,
    MapRouteManeuverKind_TurnLightRight = 11,
    MapRouteManeuverKind_TurnLeft = 12,
    MapRouteManeuverKind_TurnRight = 13,
    MapRouteManeuverKind_TurnHardLeft = 14,
    MapRouteManeuverKind_TurnHardRight = 15,
    MapRouteManeuverKind_FreewayEnterLeft = 16,
    MapRouteManeuverKind_FreewayEnterRight = 17,
    MapRouteManeuverKind_FreewayLeaveLeft = 18,
    MapRouteManeuverKind_FreewayLeaveRight = 19,
    MapRouteManeuverKind_FreewayContinueLeft = 20,
    MapRouteManeuverKind_FreewayContinueRight = 21,
    MapRouteManeuverKind_TrafficCircleLeft = 22,
    MapRouteManeuverKind_TrafficCircleRight = 23,
    MapRouteManeuverKind_TakeFerry = 24,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteOptimization
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization
{
    MapRouteOptimization_Time = 0,
    MapRouteOptimization_Distance = 1,
    MapRouteOptimization_TimeWithTraffic = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    MapRouteOptimization_Scenic = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapRouteRestrictions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions
{
    MapRouteRestrictions_None = 0,
    MapRouteRestrictions_Highways = 0x1,
    MapRouteRestrictions_TollRoads = 0x2,
    MapRouteRestrictions_Ferries = 0x4,
    MapRouteRestrictions_Tunnels = 0x8,
    MapRouteRestrictions_DirtRoads = 0x10,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    MapRouteRestrictions_Motorail = 0x20,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.MapServiceDataUsagePreference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference
{
    MapServiceDataUsagePreference_Default = 0,
    MapServiceDataUsagePreference_OfflineMapDataOnly = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.TrafficCongestion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion
{
    TrafficCongestion_Unknown = 0,
    TrafficCongestion_Light = 1,
    TrafficCongestion_Mild = 2,
    TrafficCongestion_Medium = 3,
    TrafficCongestion_Heavy = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Services.Maps.WaypointKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CWaypointKind
{
    WaypointKind_Stop = 0,
    WaypointKind_Via = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IEnhancedWaypoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.EnhancedWaypoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IEnhancedWaypoint[] = L"Windows.Services.Maps.IEnhancedWaypoint";
/* [object, uuid("ED268C74-5913-11E6-8B77-86F30CA893D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CWaypointKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_get_Point(This,value) \
    ( (This)->lpVtbl->get_Point(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IEnhancedWaypointFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.EnhancedWaypoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IEnhancedWaypointFactory[] = L"Windows.Services.Maps.IEnhancedWaypointFactory";
/* [object, uuid("AF868477-A2AA-46DD-B645-23B31B8AA6C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * point,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CWaypointKind kind,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypoint * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactoryVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_Create(This,point,kind,value) \
    ( (This)->lpVtbl->Create(This,point,kind,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIEnhancedWaypointFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IManeuverWarning
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.ManeuverWarning
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IManeuverWarning[] = L"Windows.Services.Maps.IManeuverWarning";
/* [object, uuid("C1A36D8A-2630-4378-9E4A-6E44253DCEBA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIManeuverWarningVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CManeuverWarningKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Severity )(
        __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CManeuverWarningSeverity * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIManeuverWarningVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIManeuverWarningVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_get_Severity(This,value) \
    ( (This)->lpVtbl->get_Severity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIManeuverWarning;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIManeuverWarning_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapAddress[] = L"Windows.Services.Maps.IMapAddress";
/* [object, uuid("CFA7A973-A3B4-4494-B3FF-CBA94DB69699"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BuildingName )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BuildingFloor )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BuildingRoom )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BuildingWing )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StreetNumber )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Street )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Neighborhood )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_District )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Town )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RegionCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PostCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Continent )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapAddressVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapAddressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_BuildingName(This,value) \
    ( (This)->lpVtbl->get_BuildingName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_BuildingFloor(This,value) \
    ( (This)->lpVtbl->get_BuildingFloor(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_BuildingRoom(This,value) \
    ( (This)->lpVtbl->get_BuildingRoom(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_BuildingWing(This,value) \
    ( (This)->lpVtbl->get_BuildingWing(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_StreetNumber(This,value) \
    ( (This)->lpVtbl->get_StreetNumber(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_Street(This,value) \
    ( (This)->lpVtbl->get_Street(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_Neighborhood(This,value) \
    ( (This)->lpVtbl->get_Neighborhood(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_District(This,value) \
    ( (This)->lpVtbl->get_District(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_Town(This,value) \
    ( (This)->lpVtbl->get_Town(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_Region(This,value) \
    ( (This)->lpVtbl->get_Region(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_RegionCode(This,value) \
    ( (This)->lpVtbl->get_RegionCode(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_Country(This,value) \
    ( (This)->lpVtbl->get_Country(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_CountryCode(This,value) \
    ( (This)->lpVtbl->get_CountryCode(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_PostCode(This,value) \
    ( (This)->lpVtbl->get_PostCode(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress_get_Continent(This,value) \
    ( (This)->lpVtbl->get_Continent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapAddress;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapAddress2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapAddress2[] = L"Windows.Services.Maps.IMapAddress2";
/* [object, uuid("75CD6DF1-E5AD-45A9-BF40-6CF256C1DD13"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapAddress2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIMapAddress2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapAddress2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapAddress2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapAddress2_get_FormattedAddress(This,value) \
    ( (This)->lpVtbl->get_FormattedAddress(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapAddress2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapAddress2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocation[] = L"Windows.Services.Maps.IMapLocation";
/* [object, uuid("3C073F57-0DA4-42E8-9EE2-A96FCF2371DC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapAddress * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_get_Point(This,value) \
    ( (This)->lpVtbl->get_Point(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocation_get_Address(This,value) \
    ( (This)->lpVtbl->get_Address(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocation;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocationFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocationFinderResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderResult[] = L"Windows.Services.Maps.IMapLocationFinderResult";
/* [object, uuid("43F1F179-E8CC-45F6-BED2-54CCBF965D9A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Locations )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapLocation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapLocationFinderStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResultVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_get_Locations(This,value) \
    ( (This)->lpVtbl->get_Locations(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocationFinderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocationFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderStatics[] = L"Windows.Services.Maps.IMapLocationFinderStatics";
/* [object, uuid("318ADB5D-1C5D-4F35-A2DF-AACA94959517"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FindLocationsAtAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * queryPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindLocationsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
        /* [in] */__RPC__in HSTRING searchText,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindLocationsWithMaxCountAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics * This,
        /* [in] */__RPC__in HSTRING searchText,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
        /* [in] */UINT32 maxCount,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FindLocationsAtAsync(This,queryPoint,result) \
    ( (This)->lpVtbl->FindLocationsAtAsync(This,queryPoint,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FindLocationsAsync(This,searchText,referencePoint,result) \
    ( (This)->lpVtbl->FindLocationsAsync(This,searchText,referencePoint,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_FindLocationsWithMaxCountAsync(This,searchText,referencePoint,maxCount,result) \
    ( (This)->lpVtbl->FindLocationsWithMaxCountAsync(This,searchText,referencePoint,maxCount,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapLocationFinderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapLocationFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapLocationFinderStatics2[] = L"Windows.Services.Maps.IMapLocationFinderStatics2";
/* [object, uuid("959A8B96-6485-4DFD-851A-33AC317E3AF6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FindLocationsAtWithAccuracyAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * queryPoint,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapLocationDesiredAccuracy accuracy,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapLocationFinderResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_FindLocationsAtWithAccuracyAsync(This,queryPoint,accuracy,result) \
    ( (This)->lpVtbl->FindLocationsAtWithAccuracyAsync(This,queryPoint,accuracy,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapLocationFinderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.IMapManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapManagerStatics[] = L"Windows.Services.Maps.IMapManagerStatics";
/* [object, uuid("37E3E515-82B4-4D54-8FD9-AF2624B3011C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowDownloadedMapsUI )(
        __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *ShowMapsUpdateUI )(
        __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapManagerStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_ShowDownloadedMapsUI(This) \
    ( (This)->lpVtbl->ShowDownloadedMapsUI(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_ShowMapsUpdateUI(This) \
    ( (This)->lpVtbl->ShowMapsUpdateUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute[] = L"Windows.Services.Maps.IMapRoute";
/* [object, uuid("FB07B732-584D-4583-9C60-641FEA274349"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LengthInMeters )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EstimatedDuration )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Legs )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRouteLeg * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTrafficBased )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_get_BoundingBox(This,value) \
    ( (This)->lpVtbl->get_BoundingBox(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_get_LengthInMeters(This,value) \
    ( (This)->lpVtbl->get_LengthInMeters(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_get_EstimatedDuration(This,value) \
    ( (This)->lpVtbl->get_EstimatedDuration(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_get_Legs(This,value) \
    ( (This)->lpVtbl->get_Legs(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute_get_IsTrafficBased(This,value) \
    ( (This)->lpVtbl->get_IsTrafficBased(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute2[] = L"Windows.Services.Maps.IMapRoute2";
/* [object, uuid("D1C5D40C-2213-4AB0-A260-46B38169BEAC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViolatedRestrictions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasBlockedRoads )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRoute2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_get_ViolatedRestrictions(This,value) \
    ( (This)->lpVtbl->get_ViolatedRestrictions(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute2_get_HasBlockedRoads(This,value) \
    ( (This)->lpVtbl->get_HasBlockedRoads(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute3[] = L"Windows.Services.Maps.IMapRoute3";
/* [object, uuid("858D1EAE-F2AD-429F-BB37-CD21094FFC92"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DurationWithoutTraffic )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrafficCongestion )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRoute3Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_get_DurationWithoutTraffic(This,value) \
    ( (This)->lpVtbl->get_DurationWithoutTraffic(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute3_get_TrafficCongestion(This,value) \
    ( (This)->lpVtbl->get_TrafficCongestion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapRoute4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRoute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRoute4[] = L"Windows.Services.Maps.IMapRoute4";
/* [object, uuid("366C8CA5-3053-4FA1-80FF-D475F3ED1E6E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsScenic )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRoute4 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRoute4Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute4
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRoute4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRoute4_get_IsScenic(This,value) \
    ( (This)->lpVtbl->get_IsScenic(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRoute4;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRoute4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteDrivingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteDrivingOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteDrivingOptions[] = L"Windows.Services.Maps.IMapRouteDrivingOptions";
/* [object, uuid("6815364D-C6DC-4697-A452-B18F8F0B67A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxAlternateRouteCount )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxAlternateRouteCount )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InitialHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [in] */__RPC__in_opt __FIReference_1_double * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RouteOptimization )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RouteOptimization )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RouteRestrictions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RouteRestrictions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * This,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptionsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_get_MaxAlternateRouteCount(This,value) \
    ( (This)->lpVtbl->get_MaxAlternateRouteCount(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_put_MaxAlternateRouteCount(This,value) \
    ( (This)->lpVtbl->put_MaxAlternateRouteCount(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_get_InitialHeading(This,value) \
    ( (This)->lpVtbl->get_InitialHeading(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_put_InitialHeading(This,value) \
    ( (This)->lpVtbl->put_InitialHeading(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_get_RouteOptimization(This,value) \
    ( (This)->lpVtbl->get_RouteOptimization(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_put_RouteOptimization(This,value) \
    ( (This)->lpVtbl->put_RouteOptimization(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_get_RouteRestrictions(This,value) \
    ( (This)->lpVtbl->get_RouteRestrictions(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_put_RouteRestrictions(This,value) \
    ( (This)->lpVtbl->put_RouteRestrictions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinderResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderResult[] = L"Windows.Services.Maps.IMapRouteFinderResult";
/* [object, uuid("A868A31A-9422-46AC-8CA1-B1614D4BFBE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteFinderStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResultVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_get_Route(This,value) \
    ( (This)->lpVtbl->get_Route(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinderResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderResult2[] = L"Windows.Services.Maps.IMapRouteFinderResult2";
/* [object, uuid("20709C6D-D90C-46C8-91C6-7D4BE4EFB215"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlternateRoutes )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRoute * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_get_AlternateRoutes(This,value) \
    ( (This)->lpVtbl->get_AlternateRoutes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics[] = L"Windows.Services.Maps.IMapRouteFinderStatics";
/* [object, uuid("B8A5C50F-1C64-4C3A-81EB-1F7C152AFBBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptimizationAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptimizationAndRestrictionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
        /* [in] */DOUBLE headingInDegrees,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsAndOptimizationAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteOptimization optimization,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapRouteRestrictions restrictions,
        /* [in] */DOUBLE headingInDegrees,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetWalkingRouteAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetWalkingRouteFromWaypointsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CGeolocation__CGeopoint * wayPoints,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteAsync(This,startPoint,endPoint,result) \
    ( (This)->lpVtbl->GetDrivingRouteAsync(This,startPoint,endPoint,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteWithOptimizationAsync(This,startPoint,endPoint,optimization,result) \
    ( (This)->lpVtbl->GetDrivingRouteWithOptimizationAsync(This,startPoint,endPoint,optimization,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteWithOptimizationAndRestrictionsAsync(This,startPoint,endPoint,optimization,restrictions,result) \
    ( (This)->lpVtbl->GetDrivingRouteWithOptimizationAndRestrictionsAsync(This,startPoint,endPoint,optimization,restrictions,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(This,startPoint,endPoint,optimization,restrictions,headingInDegrees,result) \
    ( (This)->lpVtbl->GetDrivingRouteWithOptimizationRestrictionsAndHeadingAsync(This,startPoint,endPoint,optimization,restrictions,headingInDegrees,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteFromWaypointsAsync(This,wayPoints,result) \
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsAsync(This,wayPoints,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteFromWaypointsAndOptimizationAsync(This,wayPoints,optimization,result) \
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsAndOptimizationAsync(This,wayPoints,optimization,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(This,wayPoints,optimization,restrictions,result) \
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsOptimizationAndRestrictionsAsync(This,wayPoints,optimization,restrictions,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(This,wayPoints,optimization,restrictions,headingInDegrees,result) \
    ( (This)->lpVtbl->GetDrivingRouteFromWaypointsOptimizationRestrictionsAndHeadingAsync(This,wayPoints,optimization,restrictions,headingInDegrees,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetWalkingRouteAsync(This,startPoint,endPoint,result) \
    ( (This)->lpVtbl->GetWalkingRouteAsync(This,startPoint,endPoint,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_GetWalkingRouteFromWaypointsAsync(This,wayPoints,result) \
    ( (This)->lpVtbl->GetWalkingRouteFromWaypointsAsync(This,wayPoints,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics2[] = L"Windows.Services.Maps.IMapRouteFinderStatics2";
/* [object, uuid("AFCC2C73-7760-49AF-B3BD-BAF135B703E1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * startPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * endPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_GetDrivingRouteWithOptionsAsync(This,startPoint,endPoint,options,result) \
    ( (This)->lpVtbl->GetDrivingRouteWithOptionsAsync(This,startPoint,endPoint,options,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteFinderStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteFinder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteFinderStatics3[] = L"Windows.Services.Maps.IMapRouteFinderStatics3";
/* [object, uuid("F6098134-5913-11E6-8B77-86F30CA893D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromEnhancedWaypointsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * waypoints,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CServices__CMaps__CEnhancedWaypoint * waypoints,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRouteDrivingOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CMapRouteFinderResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_GetDrivingRouteFromEnhancedWaypointsAsync(This,waypoints,result) \
    ( (This)->lpVtbl->GetDrivingRouteFromEnhancedWaypointsAsync(This,waypoints,result) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(This,waypoints,options,result) \
    ( (This)->lpVtbl->GetDrivingRouteFromEnhancedWaypointsWithOptionsAsync(This,waypoints,options,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteFinderStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteLeg
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteLeg
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteLeg[] = L"Windows.Services.Maps.IMapRouteLeg";
/* [object, uuid("96F8B2F6-5BBA-4D17-9DB6-1A263FEC7471"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLegVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LengthInMeters )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EstimatedDuration )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maneuvers )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CMapRouteManeuver * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteLegVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLegVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_get_BoundingBox(This,value) \
    ( (This)->lpVtbl->get_BoundingBox(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_get_LengthInMeters(This,value) \
    ( (This)->lpVtbl->get_LengthInMeters(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_get_EstimatedDuration(This,value) \
    ( (This)->lpVtbl->get_EstimatedDuration(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_get_Maneuvers(This,value) \
    ( (This)->lpVtbl->get_Maneuvers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteLeg2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteLeg
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteLeg2[] = L"Windows.Services.Maps.IMapRouteLeg2";
/* [object, uuid("02E2062D-C9C6-45B8-8E54-1A10B57A17E8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DurationWithoutTraffic )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrafficCongestion )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CTrafficCongestion * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_get_DurationWithoutTraffic(This,value) \
    ( (This)->lpVtbl->get_DurationWithoutTraffic(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_get_TrafficCongestion(This,value) \
    ( (This)->lpVtbl->get_TrafficCongestion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteLeg2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteManeuver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteManeuver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver[] = L"Windows.Services.Maps.IMapRouteManeuver";
/* [object, uuid("ED5C17F0-A6AB-4D65-A086-FA8A7E340DF2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartingPoint )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LengthInMeters )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstructionText )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapRouteManeuverKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitNumber )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManeuverNotices )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapManeuverNotices * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuverVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_get_StartingPoint(This,value) \
    ( (This)->lpVtbl->get_StartingPoint(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_get_LengthInMeters(This,value) \
    ( (This)->lpVtbl->get_LengthInMeters(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_get_InstructionText(This,value) \
    ( (This)->lpVtbl->get_InstructionText(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_get_ExitNumber(This,value) \
    ( (This)->lpVtbl->get_ExitNumber(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_get_ManeuverNotices(This,value) \
    ( (This)->lpVtbl->get_ManeuverNotices(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteManeuver2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteManeuver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver2[] = L"Windows.Services.Maps.IMapRouteManeuver2";
/* [object, uuid("5D7BCD9C-7C9B-41DF-838B-EAE21E4B05A9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndHeading )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StreetName )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_get_StartHeading(This,value) \
    ( (This)->lpVtbl->get_StartHeading(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_get_EndHeading(This,value) \
    ( (This)->lpVtbl->get_EndHeading(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_get_StreetName(This,value) \
    ( (This)->lpVtbl->get_StreetName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapRouteManeuver3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapRouteManeuver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapRouteManeuver3[] = L"Windows.Services.Maps.IMapRouteManeuver3";
/* [object, uuid("A6A138DF-0483-4166-85BE-B99336C11875"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Warnings )(
        __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CManeuverWarning * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_get_Warnings(This,value) \
    ( (This)->lpVtbl->get_Warnings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapRouteManeuver3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics[] = L"Windows.Services.Maps.IMapServiceStatics";
/* [object, uuid("0144AD85-C04C-4CDD-871A-A0726D097CD4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServiceToken )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceToken )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_put_ServiceToken(This,value) \
    ( (This)->lpVtbl->put_ServiceToken(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_get_ServiceToken(This,value) \
    ( (This)->lpVtbl->get_ServiceToken(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics2[] = L"Windows.Services.Maps.IMapServiceStatics2";
/* [object, uuid("F8193EED-9C85-40A9-8896-0FC3FD2B7C2A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WorldViewRegionCode )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_get_WorldViewRegionCode(This,value) \
    ( (This)->lpVtbl->get_WorldViewRegionCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics3[] = L"Windows.Services.Maps.IMapServiceStatics3";
/* [object, uuid("0A11CE20-63A7-4854-B355-D6DCDA223D1B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataAttributions )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_get_DataAttributions(This,value) \
    ( (This)->lpVtbl->get_DataAttributions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.IMapServiceStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.MapService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IMapServiceStatics4[] = L"Windows.Services.Maps.IMapServiceStatics4";
/* [object, uuid("088A2862-6ABC-420E-945F-4CFD89C67356"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataUsagePreference )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataUsagePreference )(
        __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CMapServiceDataUsagePreference * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_put_DataUsagePreference(This,value) \
    ( (This)->lpVtbl->put_DataUsagePreference(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_get_DataUsagePreference(This,value) \
    ( (This)->lpVtbl->get_DataUsagePreference(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIMapServiceStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Services.Maps.IPlaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.PlaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfo[] = L"Windows.Services.Maps.IPlaceInfo";
/* [object, uuid("9A0810B6-31C8-4F6A-9F18-950B4C38951A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowWithPreferredPlacement )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Geoshape )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_Show(This,selection) \
    ( (This)->lpVtbl->Show(This,selection) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_ShowWithPreferredPlacement(This,selection,preferredPlacement) \
    ( (This)->lpVtbl->ShowWithPreferredPlacement(This,selection,preferredPlacement) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_get_Identifier(This,value) \
    ( (This)->lpVtbl->get_Identifier(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_get_DisplayAddress(This,value) \
    ( (This)->lpVtbl->get_DisplayAddress(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_get_Geoshape(This,value) \
    ( (This)->lpVtbl->get_Geoshape(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Services.Maps.IPlaceInfoCreateOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.PlaceInfoCreateOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoCreateOptions[] = L"Windows.Services.Maps.IPlaceInfoCreateOptions";
/* [object, uuid("CD33C125-67F1-4BB3-9907-ECCE939B0399"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayAddress )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptionsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_put_DisplayAddress(This,value) \
    ( (This)->lpVtbl->put_DisplayAddress(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_get_DisplayAddress(This,value) \
    ( (This)->lpVtbl->get_DisplayAddress(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Services.Maps.IPlaceInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.PlaceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_IPlaceInfoStatics[] = L"Windows.Services.Maps.IPlaceInfoStatics";
/* [object, uuid("82B9FF71-6CD0-48A4-AFD9-5ED82097936B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWithGeopointAndOptions )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * referencePoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromIdentifier )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
        /* [in] */__RPC__in HSTRING identifier,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromIdentifierWithOptions )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
        /* [in] */__RPC__in HSTRING identifier,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * defaultPoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoCreateOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromMapLocation )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapLocation * location,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsShowSupported )(
        __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_Create(This,referencePoint,resultValue) \
    ( (This)->lpVtbl->Create(This,referencePoint,resultValue) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_CreateWithGeopointAndOptions(This,referencePoint,options,resultValue) \
    ( (This)->lpVtbl->CreateWithGeopointAndOptions(This,referencePoint,options,resultValue) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_CreateFromIdentifier(This,identifier,resultValue) \
    ( (This)->lpVtbl->CreateFromIdentifier(This,identifier,resultValue) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_CreateFromIdentifierWithOptions(This,identifier,defaultPoint,options,resultValue) \
    ( (This)->lpVtbl->CreateFromIdentifierWithOptions(This,identifier,defaultPoint,options,resultValue) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_CreateFromMapLocation(This,location,resultValue) \
    ( (This)->lpVtbl->CreateFromMapLocation(This,location,resultValue) )

#define __x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_get_IsShowSupported(This,value) \
    ( (This)->lpVtbl->get_IsShowSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CIPlaceInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Services.Maps.EnhancedWaypoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Services.Maps.IEnhancedWaypointFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IEnhancedWaypoint ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_EnhancedWaypoint_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_EnhancedWaypoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_EnhancedWaypoint[] = L"Windows.Services.Maps.EnhancedWaypoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.ManeuverWarning
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IManeuverWarning ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Services_Maps_ManeuverWarning_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_ManeuverWarning_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_ManeuverWarning[] = L"Windows.Services.Maps.ManeuverWarning";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.MapAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapAddress ** Default Interface **
 *    Windows.Services.Maps.IMapAddress2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapAddress_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapAddress[] = L"Windows.Services.Maps.MapAddress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapLocation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapLocation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapLocation_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocation[] = L"Windows.Services.Maps.MapLocation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapLocationFinder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapLocationFinderStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapLocationFinderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapLocationFinder_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapLocationFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocationFinder[] = L"Windows.Services.Maps.MapLocationFinder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapLocationFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapLocationFinderResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapLocationFinderResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapLocationFinderResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapLocationFinderResult[] = L"Windows.Services.Maps.MapLocationFinderResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapManager_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapManager[] = L"Windows.Services.Maps.MapManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRoute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRoute ** Default Interface **
 *    Windows.Services.Maps.IMapRoute2
 *    Windows.Services.Maps.IMapRoute3
 *    Windows.Services.Maps.IMapRoute4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRoute_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRoute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRoute[] = L"Windows.Services.Maps.MapRoute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteDrivingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteDrivingOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteDrivingOptions_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteDrivingOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteDrivingOptions[] = L"Windows.Services.Maps.MapRouteDrivingOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteFinder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapRouteFinderStatics3 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapRouteFinderStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapRouteFinderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteFinder_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteFinder[] = L"Windows.Services.Maps.MapRouteFinder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteFinderResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteFinderResult ** Default Interface **
 *    Windows.Services.Maps.IMapRouteFinderResult2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteFinderResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteFinderResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteFinderResult[] = L"Windows.Services.Maps.MapRouteFinderResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteLeg
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteLeg ** Default Interface **
 *    Windows.Services.Maps.IMapRouteLeg2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteLeg_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteLeg_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteLeg[] = L"Windows.Services.Maps.MapRouteLeg";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapRouteManeuver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IMapRouteManeuver ** Default Interface **
 *    Windows.Services.Maps.IMapRouteManeuver2
 *    Windows.Services.Maps.IMapRouteManeuver3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_MapRouteManeuver_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapRouteManeuver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapRouteManeuver[] = L"Windows.Services.Maps.MapRouteManeuver";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.MapService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics3 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Services.Maps.IMapServiceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_MapService_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_MapService_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_MapService[] = L"Windows.Services.Maps.MapService";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.PlaceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.IPlaceInfoStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IPlaceInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Services_Maps_PlaceInfo_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_PlaceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_PlaceInfo[] = L"Windows.Services.Maps.PlaceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Services.Maps.PlaceInfoCreateOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.IPlaceInfoCreateOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Services_Maps_PlaceInfoCreateOptions_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_PlaceInfoCreateOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_PlaceInfoCreateOptions[] = L"Windows.Services.Maps.PlaceInfoCreateOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eservices2Emaps_p_h__

#endif // __windows2Eservices2Emaps_h__
