/* Header file automatically generated from windows.services.maps.guidance.idl */
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
#ifndef __windows2Eservices2Emaps2Eguidance_h__
#define __windows2Eservices2Emaps2Eguidance_h__
#ifndef __windows2Eservices2Emaps2Eguidance_p_h__
#define __windows2Eservices2Emaps2Eguidance_p_h__


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
#include "Windows.Services.Maps.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceAudioNotificationRequestedEventArgs;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs ABI::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceLaneInfo;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceManeuver;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceMapMatchedCoordinate;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate ABI::Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceNavigator;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceNavigator2;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator2

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceNavigatorStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics ABI::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceNavigatorStatics2;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 ABI::Windows::Services::Maps::Guidance::IGuidanceNavigatorStatics2

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceReroutedEventArgs;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs ABI::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceRoadSegment;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceRoadSegment2;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment2

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceRoadSignpost;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSignpost

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceRoute;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute ABI::Windows::Services::Maps::Guidance::IGuidanceRoute

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceRouteStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics ABI::Windows::Services::Maps::Guidance::IGuidanceRouteStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceTelemetryCollector;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector ABI::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceTelemetryCollectorStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics ABI::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollectorStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    interface IGuidanceUpdatedEventArgs;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs ABI::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceLaneInfo;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4d4ce4d8-7ce0-5168-ab29-6bcf7f198a58"))
IIterator<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*, ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.Guidance.GuidanceLaneInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*> __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t;
#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>
//#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("45960d72-1bf6-5a1d-a17f-e83f56f1ab57"))
IIterable<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*, ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.Guidance.GuidanceLaneInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*> __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t;
#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>
//#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceManeuver;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("74a37092-2641-5c3d-b3cb-689dc8aba22e"))
IIterator<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*, ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.Guidance.GuidanceManeuver>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*> __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t;
#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>
//#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b5780d67-8a8b-558f-a4b6-c4531ef32ec8"))
IIterable<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*, ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.Guidance.GuidanceManeuver>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*> __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t;
#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>
//#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceRoadSegment;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("148cb8ff-3ab9-53ab-8824-256a62047b43"))
IIterator<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*, ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.Guidance.GuidanceRoadSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*> __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t;
#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>
//#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f7c614c4-0fca-5eda-804c-85c829956334"))
IIterable<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*, ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.Guidance.GuidanceRoadSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*> __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t;
#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>
//#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("81493670-e515-5c62-b34c-6e3d996cad31"))
IVectorView<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*, ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.Guidance.GuidanceLaneInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::Guidance::GuidanceLaneInfo*> __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::Guidance::IGuidanceLaneInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("875644d8-57a4-59d6-9d2c-5d450d39d2f6"))
IVectorView<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*, ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.Guidance.GuidanceManeuver>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::Guidance::GuidanceManeuver*> __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f04c7cc2-4d54-5244-beb2-8f4f05c184e6"))
IVectorView<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*, ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.Guidance.GuidanceRoadSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::Guidance::GuidanceRoadSegment*> __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceNavigator;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */



#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3f496c35-3dca-5e91-8730-6ef77e9d70bd"))
ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*, ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Services.Maps.Guidance.GuidanceNavigator, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,IInspectable*> __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceAudioNotificationRequestedEventArgs;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("743db36f-e9aa-557a-9fd7-304c9b0499df"))
ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*, ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs*, ABI::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Services.Maps.Guidance.GuidanceNavigator, Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotificationRequestedEventArgs*> __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::IGuidanceAudioNotificationRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceReroutedEventArgs;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("61b92b1b-f22f-581b-bfa0-4868c314c63a"))
ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*, ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs*, ABI::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Services.Maps.Guidance.GuidanceNavigator, Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::GuidanceReroutedEventArgs*> __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::IGuidanceReroutedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceUpdatedEventArgs;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("82b3f7df-bf13-5445-aadc-ec61b50fbb46"))
ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*, ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs*, ABI::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Services.Maps.Guidance.GuidanceNavigator, Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::GuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::GuidanceUpdatedEventArgs*> __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator*,ABI::Windows::Services::Maps::Guidance::IGuidanceUpdatedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_USE */


#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


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
                class Geocoordinate;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapRoute;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

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





namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    
                    typedef enum GuidanceAudioMeasurementSystem : int GuidanceAudioMeasurementSystem;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    
                    typedef enum GuidanceAudioNotificationKind : int GuidanceAudioNotificationKind;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    
                    typedef enum GuidanceAudioNotifications : unsigned int GuidanceAudioNotifications;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    
                    typedef enum GuidanceLaneMarkers : unsigned int GuidanceLaneMarkers;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    
                    typedef enum GuidanceManeuverKind : int GuidanceManeuverKind;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    
                    typedef enum GuidanceMode : int GuidanceMode;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */





















namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceMapMatchedCoordinate;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceRoadSignpost;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceRoute;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    class GuidanceTelemetryCollector;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */













/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceAudioMeasurementSystem
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [v1_enum, contract] */
                    enum GuidanceAudioMeasurementSystem : int
                    {
                        GuidanceAudioMeasurementSystem_Meters = 0,
                        GuidanceAudioMeasurementSystem_MilesAndYards = 1,
                        GuidanceAudioMeasurementSystem_MilesAndFeet = 2,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceAudioNotificationKind
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [v1_enum, contract] */
                    enum GuidanceAudioNotificationKind : int
                    {
                        GuidanceAudioNotificationKind_Maneuver = 0,
                        GuidanceAudioNotificationKind_Route = 1,
                        GuidanceAudioNotificationKind_Gps = 2,
                        GuidanceAudioNotificationKind_SpeedLimit = 3,
                        GuidanceAudioNotificationKind_Traffic = 4,
                        GuidanceAudioNotificationKind_TrafficCamera = 5,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceAudioNotifications
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [v1_enum, flags, contract] */
                    enum GuidanceAudioNotifications : unsigned int
                    {
                        GuidanceAudioNotifications_None = 0,
                        GuidanceAudioNotifications_Maneuver = 0x1,
                        GuidanceAudioNotifications_Route = 0x2,
                        GuidanceAudioNotifications_Gps = 0x4,
                        GuidanceAudioNotifications_SpeedLimit = 0x8,
                        GuidanceAudioNotifications_Traffic = 0x10,
                        GuidanceAudioNotifications_TrafficCamera = 0x20,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(GuidanceAudioNotifications)
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceLaneMarkers
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [v1_enum, flags, contract] */
                    enum GuidanceLaneMarkers : unsigned int
                    {
                        GuidanceLaneMarkers_None = 0,
                        GuidanceLaneMarkers_LightRight = 0x1,
                        GuidanceLaneMarkers_Right = 0x2,
                        GuidanceLaneMarkers_HardRight = 0x4,
                        GuidanceLaneMarkers_Straight = 0x8,
                        GuidanceLaneMarkers_UTurnLeft = 0x10,
                        GuidanceLaneMarkers_HardLeft = 0x20,
                        GuidanceLaneMarkers_Left = 0x40,
                        GuidanceLaneMarkers_LightLeft = 0x80,
                        GuidanceLaneMarkers_UTurnRight = 0x100,
                        GuidanceLaneMarkers_Unknown = 0xffffffff,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(GuidanceLaneMarkers)
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceManeuverKind
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [v1_enum, contract] */
                    enum GuidanceManeuverKind : int
                    {
                        GuidanceManeuverKind_None = 0,
                        GuidanceManeuverKind_GoStraight = 1,
                        GuidanceManeuverKind_UTurnRight = 2,
                        GuidanceManeuverKind_UTurnLeft = 3,
                        GuidanceManeuverKind_TurnKeepRight = 4,
                        GuidanceManeuverKind_TurnLightRight = 5,
                        GuidanceManeuverKind_TurnRight = 6,
                        GuidanceManeuverKind_TurnHardRight = 7,
                        GuidanceManeuverKind_KeepMiddle = 8,
                        GuidanceManeuverKind_TurnKeepLeft = 9,
                        GuidanceManeuverKind_TurnLightLeft = 10,
                        GuidanceManeuverKind_TurnLeft = 11,
                        GuidanceManeuverKind_TurnHardLeft = 12,
                        GuidanceManeuverKind_FreewayEnterRight = 13,
                        GuidanceManeuverKind_FreewayEnterLeft = 14,
                        GuidanceManeuverKind_FreewayLeaveRight = 15,
                        GuidanceManeuverKind_FreewayLeaveLeft = 16,
                        GuidanceManeuverKind_FreewayKeepRight = 17,
                        GuidanceManeuverKind_FreewayKeepLeft = 18,
                        GuidanceManeuverKind_TrafficCircleRight1 = 19,
                        GuidanceManeuverKind_TrafficCircleRight2 = 20,
                        GuidanceManeuverKind_TrafficCircleRight3 = 21,
                        GuidanceManeuverKind_TrafficCircleRight4 = 22,
                        GuidanceManeuverKind_TrafficCircleRight5 = 23,
                        GuidanceManeuverKind_TrafficCircleRight6 = 24,
                        GuidanceManeuverKind_TrafficCircleRight7 = 25,
                        GuidanceManeuverKind_TrafficCircleRight8 = 26,
                        GuidanceManeuverKind_TrafficCircleRight9 = 27,
                        GuidanceManeuverKind_TrafficCircleRight10 = 28,
                        GuidanceManeuverKind_TrafficCircleRight11 = 29,
                        GuidanceManeuverKind_TrafficCircleRight12 = 30,
                        GuidanceManeuverKind_TrafficCircleLeft1 = 31,
                        GuidanceManeuverKind_TrafficCircleLeft2 = 32,
                        GuidanceManeuverKind_TrafficCircleLeft3 = 33,
                        GuidanceManeuverKind_TrafficCircleLeft4 = 34,
                        GuidanceManeuverKind_TrafficCircleLeft5 = 35,
                        GuidanceManeuverKind_TrafficCircleLeft6 = 36,
                        GuidanceManeuverKind_TrafficCircleLeft7 = 37,
                        GuidanceManeuverKind_TrafficCircleLeft8 = 38,
                        GuidanceManeuverKind_TrafficCircleLeft9 = 39,
                        GuidanceManeuverKind_TrafficCircleLeft10 = 40,
                        GuidanceManeuverKind_TrafficCircleLeft11 = 41,
                        GuidanceManeuverKind_TrafficCircleLeft12 = 42,
                        GuidanceManeuverKind_Start = 43,
                        GuidanceManeuverKind_End = 44,
                        GuidanceManeuverKind_TakeFerry = 45,
                        GuidanceManeuverKind_PassTransitStation = 46,
                        GuidanceManeuverKind_LeaveTransitStation = 47,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceMode
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [v1_enum, contract] */
                    enum GuidanceMode : int
                    {
                        GuidanceMode_None = 0,
                        GuidanceMode_Simulation = 1,
                        GuidanceMode_Navigation = 2,
                        GuidanceMode_Tracking = 3,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("CA2AA24A-C7C2-4D4C-9D7C-499576BCEDDB"), exclusiveto, contract] */
                    MIDL_INTERFACE("CA2AA24A-C7C2-4D4C-9D7C-499576BCEDDB")
                    IGuidanceAudioNotificationRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioNotification(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotificationKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioFilePaths(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioText(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceAudioNotificationRequestedEventArgs=_uuidof(IGuidanceAudioNotificationRequestedEventArgs);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceLaneInfo
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceLaneInfo
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceLaneInfo[] = L"Windows.Services.Maps.Guidance.IGuidanceLaneInfo";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("8404D114-6581-43B7-AC15-C9079BF90DF1"), exclusiveto, contract] */
                    MIDL_INTERFACE("8404D114-6581-43B7-AC15-C9079BF90DF1")
                    IGuidanceLaneInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaneMarkers(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::Guidance::GuidanceLaneMarkers * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOnRoute(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceLaneInfo=_uuidof(IGuidanceLaneInfo);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceManeuver
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceManeuver
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceManeuver[] = L"Windows.Services.Maps.Guidance.IGuidanceManeuver";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("FC09326C-ECC9-4928-A2A1-7232B99B94A1"), exclusiveto, contract] */
                    MIDL_INTERFACE("FC09326C-ECC9-4928-A2A1-7232B99B94A1")
                    IGuidanceManeuver : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartLocation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DistanceFromRouteStart(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DistanceFromPreviousManeuver(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepartureRoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextRoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DepartureShortRoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextShortRoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::Guidance::GuidanceManeuverKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartAngle(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndAngle(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoadSignpost(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSignpost * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstructionText(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceManeuver=_uuidof(IGuidanceManeuver);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate[] = L"Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("B7ACB168-2912-4A99-AFF1-798609B981FE"), exclusiveto, contract] */
                    MIDL_INTERFACE("B7ACB168-2912-4A99-AFF1-798609B981FE")
                    IGuidanceMapMatchedCoordinate : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Location(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentHeading(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentSpeed(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOnStreet(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Road(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoadSegment * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceMapMatchedCoordinate=_uuidof(IGuidanceMapMatchedCoordinate);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigator
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigator[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigator";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("08F17EF7-8E3F-4D9A-BE8A-108F9A012C67"), exclusiveto, contract] */
                    MIDL_INTERFACE("08F17EF7-8E3F-4D9A-BE8A-108F9A012C67")
                    IGuidanceNavigator : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE StartNavigating(
                            /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoute * route
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StartSimulating(
                            /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoute * route,
                            /* [in] */INT32 speedInMetersPerSecond
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StartTracking(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Pause(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Resume(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RepeatLastAudioNotification(void) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioMeasurementSystem(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AudioMeasurementSystem(
                            /* [in] */ABI::Windows::Services::Maps::Guidance::GuidanceAudioMeasurementSystem value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioNotifications(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotifications * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AudioNotifications(
                            /* [in] */ABI::Windows::Services::Maps::Guidance::GuidanceAudioNotifications value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GuidanceUpdated(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GuidanceUpdated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DestinationReached(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DestinationReached(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Rerouting(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Rerouting(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Rerouted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Rerouted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RerouteFailed(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RerouteFailed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UserLocationLost(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UserLocationLost(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UserLocationRestored(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UserLocationRestored(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetGuidanceVoice(
                            /* [in] */INT32 voiceId,
                            /* [in] */__RPC__in HSTRING voiceFolder
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE UpdateUserLocation(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeocoordinate * userLocation
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE UpdateUserLocationWithPositionOverride(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeocoordinate * userLocation,
                            /* [in] */ABI::Windows::Devices::Geolocation::BasicGeoposition positionOverride
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceNavigator=_uuidof(IGuidanceNavigator);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigator2
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigator2[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigator2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("6CDC50D1-041C-4BF3-B633-A101FC2F6B57"), exclusiveto, contract] */
                    MIDL_INTERFACE("6CDC50D1-041C-4BF3-B633-A101FC2F6B57")
                    IGuidanceNavigator2 : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AudioNotificationRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AudioNotificationRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGuidanceAudioMuted(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsGuidanceAudioMuted(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceNavigator2=_uuidof(IGuidanceNavigator2);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("00FD9513-4456-4E66-A143-3ADD6BE08426"), exclusiveto, contract] */
                    MIDL_INTERFACE("00FD9513-4456-4E66-A143-3ADD6BE08426")
                    IGuidanceNavigatorStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetCurrent(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceNavigator * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceNavigatorStatics=_uuidof(IGuidanceNavigatorStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics2[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("54C5C3E2-7784-4C85-8C95-D0C6EFB43965"), exclusiveto, contract] */
                    MIDL_INTERFACE("54C5C3E2-7784-4C85-8C95-D0C6EFB43965")
                    IGuidanceNavigatorStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UseAppProvidedVoice(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceNavigatorStatics2=_uuidof(IGuidanceNavigatorStatics2);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceReroutedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("115D4008-D528-454E-BB94-A50341D2C9F1"), exclusiveto, contract] */
                    MIDL_INTERFACE("115D4008-D528-454E-BB94-A50341D2C9F1")
                    IGuidanceReroutedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Route(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoute * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceReroutedEventArgs=_uuidof(IGuidanceReroutedEventArgs);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoadSegment
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoadSegment
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSegment[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("B32758A6-BE78-4C63-AFE7-6C2957479B3E"), exclusiveto, contract] */
                    MIDL_INTERFACE("B32758A6-BE78-4C63-AFE7-6C2957479B3E")
                    IGuidanceRoadSegment : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShortRoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpeedLimit(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TravelTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHighway(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTunnel(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTollRoad(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceRoadSegment=_uuidof(IGuidanceRoadSegment);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoadSegment2
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoadSegment
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSegment2[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("2474A61D-1723-49F1-895B-47A2C4AA9C55"), exclusiveto, contract] */
                    MIDL_INTERFACE("2474A61D-1723-49F1-895B-47A2C4AA9C55")
                    IGuidanceRoadSegment2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsScenic(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceRoadSegment2=_uuidof(IGuidanceRoadSegment2);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoadSignpost
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoadSignpost
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSignpost";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("F1A728B6-F77A-4742-8312-53300F9845F0"), exclusiveto, contract] */
                    MIDL_INTERFACE("F1A728B6-F77A-4742-8312-53300F9845F0")
                    IGuidanceRoadSignpost : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitNumber(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Exit(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundColor(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitDirections(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceRoadSignpost=_uuidof(IGuidanceRoadSignpost);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoute
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoute
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoute[] = L"Windows.Services.Maps.Guidance.IGuidanceRoute";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("3A14545D-801A-40BD-A286-AFB2010CCE6C"), exclusiveto, contract] */
                    MIDL_INTERFACE("3A14545D-801A-40BD-A286-AFB2010CCE6C")
                    IGuidanceRoute : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Distance(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maneuvers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingBox(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoboundingBox * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopath * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoadSegments(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ConvertToMapRoute(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IMapRoute * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceRoute=_uuidof(IGuidanceRoute);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRouteStatics
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoute
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRouteStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceRouteStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("F56D926A-55ED-49C1-B09C-4B8223B50DB3"), exclusiveto, contract] */
                    MIDL_INTERFACE("F56D926A-55ED-49C1-B09C-4B8223B50DB3")
                    IGuidanceRouteStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CanCreateFromMapRoute(
                            /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IMapRoute * mapRoute,
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryCreateFromMapRoute(
                            /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::IMapRoute * mapRoute,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoute * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceRouteStatics=_uuidof(IGuidanceRouteStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceTelemetryCollector
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector[] = L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("DB1F8DA5-B878-4D92-98DD-347D23D38262"), exclusiveto, contract] */
                    MIDL_INTERFACE("DB1F8DA5-B878-4D92-98DD-347D23D38262")
                    IGuidanceTelemetryCollector : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Enabled(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ClearLocalData(void) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpeedTrigger(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpeedTrigger(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UploadFrequency(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UploadFrequency(
                            /* [in] */INT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceTelemetryCollector=_uuidof(IGuidanceTelemetryCollector);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceTelemetryCollector
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollectorStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("36532047-F160-44FB-B578-94577CA05990"), exclusiveto, contract] */
                    MIDL_INTERFACE("36532047-F160-44FB-B578-94577CA05990")
                    IGuidanceTelemetryCollectorStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetCurrent(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceTelemetryCollector * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceTelemetryCollectorStatics=_uuidof(IGuidanceTelemetryCollectorStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace Guidance {
                    /* [object, uuid("FDAC160B-9E8D-4DE3-A9FA-B06321D18DB9"), exclusiveto, contract] */
                    MIDL_INTERFACE("FDAC160B-9E8D-4DE3-A9FA-B06321D18DB9")
                    IGuidanceUpdatedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::Guidance::GuidanceMode * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextManeuver(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextManeuverDistance(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AfterNextManeuver(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceManeuver * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AfterNextManeuverDistance(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DistanceToDestination(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElapsedDistance(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElapsedTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeToDestination(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoadName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Route(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceRoute * * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentLocation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::Guidance::IGuidanceMapMatchedCoordinate * * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsNewManeuver(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaneInfo(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGuidanceUpdatedEventArgs=_uuidof(IGuidanceUpdatedEventArgs);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* Guidance */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceLaneInfo
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceLaneInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceLaneInfo_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceLaneInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceLaneInfo[] = L"Windows.Services.Maps.Guidance.GuidanceLaneInfo";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceManeuver
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceManeuver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceManeuver_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceManeuver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceManeuver[] = L"Windows.Services.Maps.Guidance.GuidanceManeuver";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate[] = L"Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2 interface starting with version 2.0 of the Windows.Services.Maps.GuidanceContract API contract
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics interface starting with version 1.0 of the Windows.Services.Maps.GuidanceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceNavigator ** Default Interface **
 *    Windows.Services.Maps.Guidance.IGuidanceNavigator2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceNavigator_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceNavigator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceNavigator[] = L"Windows.Services.Maps.Guidance.GuidanceNavigator";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceRoadSegment
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceRoadSegment ** Default Interface **
 *    Windows.Services.Maps.Guidance.IGuidanceRoadSegment2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSegment_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoadSegment[] = L"Windows.Services.Maps.Guidance.GuidanceRoadSegment";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceRoadSignpost
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceRoadSignpost ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSignpost_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSignpost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoadSignpost[] = L"Windows.Services.Maps.Guidance.GuidanceRoadSignpost";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceRoute
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceRouteStatics interface starting with version 1.0 of the Windows.Services.Maps.GuidanceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceRoute ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoute_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoute[] = L"Windows.Services.Maps.Guidance.GuidanceRoute";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceTelemetryCollector
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics interface starting with version 1.0 of the Windows.Services.Maps.GuidanceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector[] = L"Windows.Services.Maps.Guidance.GuidanceTelemetryCollector";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs;

#endif // ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuverVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000



#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000



#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000



#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000



#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

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




typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition;

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopath_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapRoute __x_ABI_CWindows_CServices_CMaps_CIMapRoute;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapRoute_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem;


typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind;


typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications;


typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers;


typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind;


typedef enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode;







































/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceAudioMeasurementSystem
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem
{
    GuidanceAudioMeasurementSystem_Meters = 0,
    GuidanceAudioMeasurementSystem_MilesAndYards = 1,
    GuidanceAudioMeasurementSystem_MilesAndFeet = 2,
};
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceAudioNotificationKind
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind
{
    GuidanceAudioNotificationKind_Maneuver = 0,
    GuidanceAudioNotificationKind_Route = 1,
    GuidanceAudioNotificationKind_Gps = 2,
    GuidanceAudioNotificationKind_SpeedLimit = 3,
    GuidanceAudioNotificationKind_Traffic = 4,
    GuidanceAudioNotificationKind_TrafficCamera = 5,
};
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceAudioNotifications
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications
{
    GuidanceAudioNotifications_None = 0,
    GuidanceAudioNotifications_Maneuver = 0x1,
    GuidanceAudioNotifications_Route = 0x2,
    GuidanceAudioNotifications_Gps = 0x4,
    GuidanceAudioNotifications_SpeedLimit = 0x8,
    GuidanceAudioNotifications_Traffic = 0x10,
    GuidanceAudioNotifications_TrafficCamera = 0x20,
};
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceLaneMarkers
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers
{
    GuidanceLaneMarkers_None = 0,
    GuidanceLaneMarkers_LightRight = 0x1,
    GuidanceLaneMarkers_Right = 0x2,
    GuidanceLaneMarkers_HardRight = 0x4,
    GuidanceLaneMarkers_Straight = 0x8,
    GuidanceLaneMarkers_UTurnLeft = 0x10,
    GuidanceLaneMarkers_HardLeft = 0x20,
    GuidanceLaneMarkers_Left = 0x40,
    GuidanceLaneMarkers_LightLeft = 0x80,
    GuidanceLaneMarkers_UTurnRight = 0x100,
    GuidanceLaneMarkers_Unknown = 0xffffffff,
};
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceManeuverKind
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind
{
    GuidanceManeuverKind_None = 0,
    GuidanceManeuverKind_GoStraight = 1,
    GuidanceManeuverKind_UTurnRight = 2,
    GuidanceManeuverKind_UTurnLeft = 3,
    GuidanceManeuverKind_TurnKeepRight = 4,
    GuidanceManeuverKind_TurnLightRight = 5,
    GuidanceManeuverKind_TurnRight = 6,
    GuidanceManeuverKind_TurnHardRight = 7,
    GuidanceManeuverKind_KeepMiddle = 8,
    GuidanceManeuverKind_TurnKeepLeft = 9,
    GuidanceManeuverKind_TurnLightLeft = 10,
    GuidanceManeuverKind_TurnLeft = 11,
    GuidanceManeuverKind_TurnHardLeft = 12,
    GuidanceManeuverKind_FreewayEnterRight = 13,
    GuidanceManeuverKind_FreewayEnterLeft = 14,
    GuidanceManeuverKind_FreewayLeaveRight = 15,
    GuidanceManeuverKind_FreewayLeaveLeft = 16,
    GuidanceManeuverKind_FreewayKeepRight = 17,
    GuidanceManeuverKind_FreewayKeepLeft = 18,
    GuidanceManeuverKind_TrafficCircleRight1 = 19,
    GuidanceManeuverKind_TrafficCircleRight2 = 20,
    GuidanceManeuverKind_TrafficCircleRight3 = 21,
    GuidanceManeuverKind_TrafficCircleRight4 = 22,
    GuidanceManeuverKind_TrafficCircleRight5 = 23,
    GuidanceManeuverKind_TrafficCircleRight6 = 24,
    GuidanceManeuverKind_TrafficCircleRight7 = 25,
    GuidanceManeuverKind_TrafficCircleRight8 = 26,
    GuidanceManeuverKind_TrafficCircleRight9 = 27,
    GuidanceManeuverKind_TrafficCircleRight10 = 28,
    GuidanceManeuverKind_TrafficCircleRight11 = 29,
    GuidanceManeuverKind_TrafficCircleRight12 = 30,
    GuidanceManeuverKind_TrafficCircleLeft1 = 31,
    GuidanceManeuverKind_TrafficCircleLeft2 = 32,
    GuidanceManeuverKind_TrafficCircleLeft3 = 33,
    GuidanceManeuverKind_TrafficCircleLeft4 = 34,
    GuidanceManeuverKind_TrafficCircleLeft5 = 35,
    GuidanceManeuverKind_TrafficCircleLeft6 = 36,
    GuidanceManeuverKind_TrafficCircleLeft7 = 37,
    GuidanceManeuverKind_TrafficCircleLeft8 = 38,
    GuidanceManeuverKind_TrafficCircleLeft9 = 39,
    GuidanceManeuverKind_TrafficCircleLeft10 = 40,
    GuidanceManeuverKind_TrafficCircleLeft11 = 41,
    GuidanceManeuverKind_TrafficCircleLeft12 = 42,
    GuidanceManeuverKind_Start = 43,
    GuidanceManeuverKind_End = 44,
    GuidanceManeuverKind_TakeFerry = 45,
    GuidanceManeuverKind_PassTransitStation = 46,
    GuidanceManeuverKind_LeaveTransitStation = 47,
};
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Services.Maps.Guidance.GuidanceMode
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode
{
    GuidanceMode_None = 0,
    GuidanceMode_Simulation = 1,
    GuidanceMode_Navigation = 2,
    GuidanceMode_Tracking = 3,
};
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceAudioNotificationRequestedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs";
/* [object, uuid("CA2AA24A-C7C2-4D4C-9D7C-499576BCEDDB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioNotification )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotificationKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioFilePaths )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioText )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_get_AudioNotification(This,value) \
    ( (This)->lpVtbl->get_AudioNotification(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_get_AudioFilePaths(This,value) \
    ( (This)->lpVtbl->get_AudioFilePaths(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_get_AudioText(This,value) \
    ( (This)->lpVtbl->get_AudioText(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceAudioNotificationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceLaneInfo
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceLaneInfo
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceLaneInfo[] = L"Windows.Services.Maps.Guidance.IGuidanceLaneInfo";
/* [object, uuid("8404D114-6581-43B7-AC15-C9079BF90DF1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LaneMarkers )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceLaneMarkers * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOnRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfoVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_get_LaneMarkers(This,value) \
    ( (This)->lpVtbl->get_LaneMarkers(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_get_IsOnRoute(This,value) \
    ( (This)->lpVtbl->get_IsOnRoute(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceLaneInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceManeuver
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceManeuver
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceManeuver[] = L"Windows.Services.Maps.Guidance.IGuidanceManeuver";
/* [object, uuid("FC09326C-ECC9-4928-A2A1-7232B99B94A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartLocation )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DistanceFromRouteStart )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DistanceFromPreviousManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepartureRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DepartureShortRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextShortRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceManeuverKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartAngle )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndAngle )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoadSignpost )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstructionText )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuverVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_StartLocation(This,value) \
    ( (This)->lpVtbl->get_StartLocation(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_DistanceFromRouteStart(This,value) \
    ( (This)->lpVtbl->get_DistanceFromRouteStart(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_DistanceFromPreviousManeuver(This,value) \
    ( (This)->lpVtbl->get_DistanceFromPreviousManeuver(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_DepartureRoadName(This,value) \
    ( (This)->lpVtbl->get_DepartureRoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_NextRoadName(This,value) \
    ( (This)->lpVtbl->get_NextRoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_DepartureShortRoadName(This,value) \
    ( (This)->lpVtbl->get_DepartureShortRoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_NextShortRoadName(This,value) \
    ( (This)->lpVtbl->get_NextShortRoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_StartAngle(This,value) \
    ( (This)->lpVtbl->get_StartAngle(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_EndAngle(This,value) \
    ( (This)->lpVtbl->get_EndAngle(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_RoadSignpost(This,value) \
    ( (This)->lpVtbl->get_RoadSignpost(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_get_InstructionText(This,value) \
    ( (This)->lpVtbl->get_InstructionText(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceMapMatchedCoordinate[] = L"Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate";
/* [object, uuid("B7ACB168-2912-4A99-AFF1-798609B981FE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentHeading )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentSpeed )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOnStreet )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Road )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinateVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_get_Location(This,value) \
    ( (This)->lpVtbl->get_Location(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_get_CurrentHeading(This,value) \
    ( (This)->lpVtbl->get_CurrentHeading(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_get_CurrentSpeed(This,value) \
    ( (This)->lpVtbl->get_CurrentSpeed(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_get_IsOnStreet(This,value) \
    ( (This)->lpVtbl->get_IsOnStreet(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_get_Road(This,value) \
    ( (This)->lpVtbl->get_Road(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigator
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigator[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigator";
/* [object, uuid("08F17EF7-8E3F-4D9A-BE8A-108F9A012C67"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartNavigating )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * route
        );
    HRESULT ( STDMETHODCALLTYPE *StartSimulating )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * route,
        /* [in] */INT32 speedInMetersPerSecond
        );
    HRESULT ( STDMETHODCALLTYPE *StartTracking )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    HRESULT ( STDMETHODCALLTYPE *RepeatLastAudioNotification )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioMeasurementSystem )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AudioMeasurementSystem )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioMeasurementSystem value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioNotifications )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AudioNotifications )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceAudioNotifications value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GuidanceUpdated )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceUpdatedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GuidanceUpdated )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DestinationReached )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DestinationReached )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Rerouting )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Rerouting )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Rerouted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceReroutedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Rerouted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RerouteFailed )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RerouteFailed )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UserLocationLost )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UserLocationLost )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UserLocationRestored )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UserLocationRestored )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetGuidanceVoice )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */INT32 voiceId,
        /* [in] */__RPC__in HSTRING voiceFolder
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *UpdateUserLocation )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * userLocation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *UpdateUserLocationWithPositionOverride )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocoordinate * userLocation,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CBasicGeoposition positionOverride
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_StartNavigating(This,route) \
    ( (This)->lpVtbl->StartNavigating(This,route) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_StartSimulating(This,route,speedInMetersPerSecond) \
    ( (This)->lpVtbl->StartSimulating(This,route,speedInMetersPerSecond) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_StartTracking(This) \
    ( (This)->lpVtbl->StartTracking(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_Pause(This) \
    ( (This)->lpVtbl->Pause(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_Resume(This) \
    ( (This)->lpVtbl->Resume(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_RepeatLastAudioNotification(This) \
    ( (This)->lpVtbl->RepeatLastAudioNotification(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_get_AudioMeasurementSystem(This,value) \
    ( (This)->lpVtbl->get_AudioMeasurementSystem(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_put_AudioMeasurementSystem(This,value) \
    ( (This)->lpVtbl->put_AudioMeasurementSystem(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_get_AudioNotifications(This,value) \
    ( (This)->lpVtbl->get_AudioNotifications(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_put_AudioNotifications(This,value) \
    ( (This)->lpVtbl->put_AudioNotifications(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_GuidanceUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_GuidanceUpdated(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_GuidanceUpdated(This,token) \
    ( (This)->lpVtbl->remove_GuidanceUpdated(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_DestinationReached(This,handler,token) \
    ( (This)->lpVtbl->add_DestinationReached(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_DestinationReached(This,token) \
    ( (This)->lpVtbl->remove_DestinationReached(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_Rerouting(This,handler,token) \
    ( (This)->lpVtbl->add_Rerouting(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_Rerouting(This,token) \
    ( (This)->lpVtbl->remove_Rerouting(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_Rerouted(This,handler,token) \
    ( (This)->lpVtbl->add_Rerouted(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_Rerouted(This,token) \
    ( (This)->lpVtbl->remove_Rerouted(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_RerouteFailed(This,handler,token) \
    ( (This)->lpVtbl->add_RerouteFailed(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_RerouteFailed(This,token) \
    ( (This)->lpVtbl->remove_RerouteFailed(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_UserLocationLost(This,handler,token) \
    ( (This)->lpVtbl->add_UserLocationLost(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_UserLocationLost(This,token) \
    ( (This)->lpVtbl->remove_UserLocationLost(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_add_UserLocationRestored(This,handler,token) \
    ( (This)->lpVtbl->add_UserLocationRestored(This,handler,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_remove_UserLocationRestored(This,token) \
    ( (This)->lpVtbl->remove_UserLocationRestored(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_SetGuidanceVoice(This,voiceId,voiceFolder) \
    ( (This)->lpVtbl->SetGuidanceVoice(This,voiceId,voiceFolder) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_UpdateUserLocation(This,userLocation) \
    ( (This)->lpVtbl->UpdateUserLocation(This,userLocation) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_UpdateUserLocationWithPositionOverride(This,userLocation,positionOverride) \
    ( (This)->lpVtbl->UpdateUserLocationWithPositionOverride(This,userLocation,positionOverride) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigator2
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigator2[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigator2";
/* [object, uuid("6CDC50D1-041C-4BF3-B633-A101FC2F6B57"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AudioNotificationRequested )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CMaps__CGuidance__CGuidanceNavigator_Windows__CServices__CMaps__CGuidance__CGuidanceAudioNotificationRequestedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AudioNotificationRequested )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGuidanceAudioMuted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsGuidanceAudioMuted )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_add_AudioNotificationRequested(This,value,token) \
    ( (This)->lpVtbl->add_AudioNotificationRequested(This,value,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_remove_AudioNotificationRequested(This,token) \
    ( (This)->lpVtbl->remove_AudioNotificationRequested(This,token) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_get_IsGuidanceAudioMuted(This,value) \
    ( (This)->lpVtbl->get_IsGuidanceAudioMuted(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_put_IsGuidanceAudioMuted(This,value) \
    ( (This)->lpVtbl->put_IsGuidanceAudioMuted(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics";
/* [object, uuid("00FD9513-4456-4E66-A143-3ADD6BE08426"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigator * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_GetCurrent(This,result) \
    ( (This)->lpVtbl->GetCurrent(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceNavigatorStatics2[] = L"Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2";
/* [object, uuid("54C5C3E2-7784-4C85-8C95-D0C6EFB43965"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UseAppProvidedVoice )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_get_UseAppProvidedVoice(This,value) \
    ( (This)->lpVtbl->get_UseAppProvidedVoice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceNavigatorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceReroutedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs";
/* [object, uuid("115D4008-D528-454E-BB94-A50341D2C9F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_get_Route(This,result) \
    ( (This)->lpVtbl->get_Route(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceReroutedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoadSegment
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoadSegment
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSegment[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment";
/* [object, uuid("B32758A6-BE78-4C63-AFE7-6C2957479B3E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShortRoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpeedLimit )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TravelTime )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHighway )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTunnel )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTollRoad )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegmentVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_RoadName(This,value) \
    ( (This)->lpVtbl->get_RoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_ShortRoadName(This,value) \
    ( (This)->lpVtbl->get_ShortRoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_SpeedLimit(This,value) \
    ( (This)->lpVtbl->get_SpeedLimit(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_TravelTime(This,value) \
    ( (This)->lpVtbl->get_TravelTime(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_IsHighway(This,value) \
    ( (This)->lpVtbl->get_IsHighway(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_IsTunnel(This,value) \
    ( (This)->lpVtbl->get_IsTunnel(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_get_IsTollRoad(This,value) \
    ( (This)->lpVtbl->get_IsTollRoad(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoadSegment2
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoadSegment
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSegment2[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSegment2";
/* [object, uuid("2474A61D-1723-49F1-895B-47A2C4AA9C55"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsScenic )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_get_IsScenic(This,value) \
    ( (This)->lpVtbl->get_IsScenic(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSegment2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoadSignpost
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoadSignpost
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoadSignpost[] = L"Windows.Services.Maps.Guidance.IGuidanceRoadSignpost";
/* [object, uuid("F1A728B6-F77A-4742-8312-53300F9845F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitNumber )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Exit )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitDirections )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpostVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpostVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_get_ExitNumber(This,value) \
    ( (This)->lpVtbl->get_ExitNumber(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_get_Exit(This,value) \
    ( (This)->lpVtbl->get_Exit(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_get_ForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_get_ExitDirections(This,value) \
    ( (This)->lpVtbl->get_ExitDirections(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoadSignpost_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRoute
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoute
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRoute[] = L"Windows.Services.Maps.Guidance.IGuidanceRoute";
/* [object, uuid("3A14545D-801A-40BD-A286-AFB2010CCE6C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Distance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maneuvers )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceManeuver * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoboundingBox * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopath * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoadSegments )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceRoadSegment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertToMapRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_get_Distance(This,value) \
    ( (This)->lpVtbl->get_Distance(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_get_Maneuvers(This,value) \
    ( (This)->lpVtbl->get_Maneuvers(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_get_BoundingBox(This,value) \
    ( (This)->lpVtbl->get_BoundingBox(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_get_RoadSegments(This,value) \
    ( (This)->lpVtbl->get_RoadSegments(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_ConvertToMapRoute(This,result) \
    ( (This)->lpVtbl->ConvertToMapRoute(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceRouteStatics
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceRoute
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceRouteStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceRouteStatics";
/* [object, uuid("F56D926A-55ED-49C1-B09C-4B8223B50DB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CanCreateFromMapRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * mapRoute,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateFromMapRoute )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CIMapRoute * mapRoute,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_CanCreateFromMapRoute(This,mapRoute,result) \
    ( (This)->lpVtbl->CanCreateFromMapRoute(This,mapRoute,result) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_TryCreateFromMapRoute(This,mapRoute,result) \
    ( (This)->lpVtbl->TryCreateFromMapRoute(This,mapRoute,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRouteStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceTelemetryCollector
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollector[] = L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector";
/* [object, uuid("DB1F8DA5-B878-4D92-98DD-347D23D38262"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearLocalData )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpeedTrigger )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpeedTrigger )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UploadFrequency )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UploadFrequency )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_get_Enabled(This,value) \
    ( (This)->lpVtbl->get_Enabled(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_put_Enabled(This,value) \
    ( (This)->lpVtbl->put_Enabled(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_ClearLocalData(This) \
    ( (This)->lpVtbl->ClearLocalData(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_get_SpeedTrigger(This,value) \
    ( (This)->lpVtbl->get_SpeedTrigger(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_put_SpeedTrigger(This,value) \
    ( (This)->lpVtbl->put_SpeedTrigger(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_get_UploadFrequency(This,value) \
    ( (This)->lpVtbl->get_UploadFrequency(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_put_UploadFrequency(This,value) \
    ( (This)->lpVtbl->put_UploadFrequency(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceTelemetryCollector
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceTelemetryCollectorStatics[] = L"Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics";
/* [object, uuid("36532047-F160-44FB-B578-94577CA05990"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollector * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_GetCurrent(This,result) \
    ( (This)->lpVtbl->GetCurrent(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceTelemetryCollectorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_Guidance_IGuidanceUpdatedEventArgs[] = L"Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs";
/* [object, uuid("FDAC160B-9E8D-4DE3-A9FA-B06321D18DB9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CGuidance_CGuidanceMode * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextManeuverDistance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AfterNextManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceManeuver * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AfterNextManeuverDistance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DistanceToDestination )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElapsedDistance )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElapsedTime )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeToDestination )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoadName )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Route )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceRoute * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentLocation )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceMapMatchedCoordinate * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsNewManeuver )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LaneInfo )(
        __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CGuidance__CGuidanceLaneInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_NextManeuver(This,value) \
    ( (This)->lpVtbl->get_NextManeuver(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_NextManeuverDistance(This,value) \
    ( (This)->lpVtbl->get_NextManeuverDistance(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_AfterNextManeuver(This,value) \
    ( (This)->lpVtbl->get_AfterNextManeuver(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_AfterNextManeuverDistance(This,value) \
    ( (This)->lpVtbl->get_AfterNextManeuverDistance(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_DistanceToDestination(This,value) \
    ( (This)->lpVtbl->get_DistanceToDestination(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_ElapsedDistance(This,value) \
    ( (This)->lpVtbl->get_ElapsedDistance(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_ElapsedTime(This,value) \
    ( (This)->lpVtbl->get_ElapsedTime(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_TimeToDestination(This,value) \
    ( (This)->lpVtbl->get_TimeToDestination(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_RoadName(This,value) \
    ( (This)->lpVtbl->get_RoadName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_Route(This,result) \
    ( (This)->lpVtbl->get_Route(This,result) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_CurrentLocation(This,result) \
    ( (This)->lpVtbl->get_CurrentLocation(This,result) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_IsNewManeuver(This,value) \
    ( (This)->lpVtbl->get_IsNewManeuver(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_get_LaneInfo(This,value) \
    ( (This)->lpVtbl->get_LaneInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CGuidance_CIGuidanceUpdatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceAudioNotificationRequestedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceAudioNotificationRequestedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceAudioNotificationRequestedEventArgs";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceLaneInfo
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceLaneInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceLaneInfo_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceLaneInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceLaneInfo[] = L"Windows.Services.Maps.Guidance.GuidanceLaneInfo";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceManeuver
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceManeuver ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceManeuver_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceManeuver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceManeuver[] = L"Windows.Services.Maps.Guidance.GuidanceManeuver";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceMapMatchedCoordinate ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceMapMatchedCoordinate[] = L"Windows.Services.Maps.Guidance.GuidanceMapMatchedCoordinate";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceNavigator
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics2 interface starting with version 2.0 of the Windows.Services.Maps.GuidanceContract API contract
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceNavigatorStatics interface starting with version 1.0 of the Windows.Services.Maps.GuidanceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceNavigator ** Default Interface **
 *    Windows.Services.Maps.Guidance.IGuidanceNavigator2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceNavigator_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceNavigator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceNavigator[] = L"Windows.Services.Maps.Guidance.GuidanceNavigator";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceReroutedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceReroutedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceReroutedEventArgs";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceRoadSegment
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceRoadSegment ** Default Interface **
 *    Windows.Services.Maps.Guidance.IGuidanceRoadSegment2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSegment_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoadSegment[] = L"Windows.Services.Maps.Guidance.GuidanceRoadSegment";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceRoadSignpost
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceRoadSignpost ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSignpost_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoadSignpost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoadSignpost[] = L"Windows.Services.Maps.Guidance.GuidanceRoadSignpost";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceRoute
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceRouteStatics interface starting with version 1.0 of the Windows.Services.Maps.GuidanceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceRoute ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoute_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceRoute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceRoute[] = L"Windows.Services.Maps.Guidance.GuidanceRoute";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceTelemetryCollector
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.Guidance.IGuidanceTelemetryCollectorStatics interface starting with version 1.0 of the Windows.Services.Maps.GuidanceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceTelemetryCollector ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceTelemetryCollector[] = L"Windows.Services.Maps.Guidance.GuidanceTelemetryCollector";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs
 *
 * Introduced to Windows.Services.Maps.GuidanceContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.Guidance.IGuidanceUpdatedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_Guidance_GuidanceUpdatedEventArgs[] = L"Windows.Services.Maps.Guidance.GuidanceUpdatedEventArgs";
#endif
#endif // WINDOWS_SERVICES_MAPS_GUIDANCECONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eservices2Emaps2Eguidance_p_h__

#endif // __windows2Eservices2Emaps2Eguidance_h__
