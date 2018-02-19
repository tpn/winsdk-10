/* Header file automatically generated from windows.services.maps.localsearch.idl */
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
#ifndef __windows2Eservices2Emaps2Elocalsearch_h__
#define __windows2Eservices2Emaps2Elocalsearch_h__
#ifndef __windows2Eservices2Emaps2Elocalsearch_p_h__
#define __windows2Eservices2Emaps2Elocalsearch_p_h__


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

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

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
#include "Windows.Globalization.h"
#include "Windows.Services.Maps.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalCategoriesStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics ABI::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalLocation;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation ABI::Windows::Services::Maps::LocalSearch::ILocalLocation

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalLocation2;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 ABI::Windows::Services::Maps::LocalSearch::ILocalLocation2

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalLocationFinderResult;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalLocationFinderStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalLocationHoursOfOperationItem;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface ILocalLocationRatingInfo;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo ABI::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    interface IPlaceInfoHelperStatics;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics ABI::Windows::Services::Maps::LocalSearch::IPlaceInfoHelperStatics

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    class LocalLocation;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a23c2e87-a8e7-568f-96a1-69e98f86b9d3"))
IIterator<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.LocalSearch.LocalLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*> __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t;
#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>
//#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5474eefb-60f4-58ac-89e2-6e83f79fa76c"))
IIterable<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.LocalSearch.LocalLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*> __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t;
#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>
//#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    class LocalLocationHoursOfOperationItem;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE
#define DEF___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3f9ba5c0-b2dc-5777-a81e-b0a2839b152b"))
IIterator<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*> __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t;
#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>
//#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE
#define DEF___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f298f515-b9bd-5297-b8bd-1c0040daac76"))
IIterable<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*> __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t;
#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>
//#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("619192f2-4f9d-5629-ab01-b18512503d73"))
IVectorView<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.LocalSearch.LocalLocation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::LocalSearch::LocalLocation*> __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::LocalSearch::ILocalLocation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE
#define DEF___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("65535172-cd91-5b4c-aa60-dab146301284"))
IVectorView<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem*> __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t;
#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>
//#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    class LocalLocationFinderResult;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7b4a1b93-2943-5e50-a010-ee9aec1bbfe7"))
IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Services.Maps.LocalSearch.LocalLocationFinderResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult*> __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_USE
#define DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("08e69b32-f420-5280-a721-075b4fd03d94"))
IAsyncOperation<ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult*, ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Services.Maps.LocalSearch.LocalLocationFinderResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult*> __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_t;
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult*>
//#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_USE */


#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


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




#ifndef DEF___FIReference_1_int_USE
#define DEF___FIReference_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4"))
IReference<int> : IReference_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<int> __FIReference_1_int_t;
#define __FIReference_1_int ABI::Windows::Foundation::__FIReference_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_int ABI::Windows::Foundation::IReference<INT32>
//#define __FIReference_1_int_t ABI::Windows::Foundation::IReference<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_int_USE */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geocircle;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

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
        namespace Globalization {
            
            typedef enum DayOfWeek : int DayOfWeek;
            
        } /* Windows */
    } /* Globalization */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class MapAddress;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

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


namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                class PlaceInfo;
            } /* Windows */
        } /* Services */
    } /* Maps */} /* ABI */

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





namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    
                    typedef enum LocalLocationFinderStatus : int LocalLocationFinderStatus;
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */














namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    class LocalLocationRatingInfo;
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */













/*
 *
 * Struct Windows.Services.Maps.LocalSearch.LocalLocationFinderStatus
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [v1_enum, contract] */
                    enum LocalLocationFinderStatus : int
                    {
                        LocalLocationFinderStatus_Success = 0,
                        LocalLocationFinderStatus_UnknownError = 1,
                        LocalLocationFinderStatus_InvalidCredentials = 2,
                        LocalLocationFinderStatus_InvalidCategory = 3,
                        LocalLocationFinderStatus_InvalidSearchTerm = 4,
                        LocalLocationFinderStatus_InvalidSearchArea = 5,
                        LocalLocationFinderStatus_NetworkFailure = 6,
                        LocalLocationFinderStatus_NotSupported = 7,
                    };
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalCategories
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics[] = L"Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("F49399F5-8261-4321-9974-EF92D49A8DCA"), exclusiveto, contract] */
                    MIDL_INTERFACE("F49399F5-8261-4321-9974-EF92D49A8DCA")
                    ILocalCategoriesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BankAndCreditUnions(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EatDrink(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Hospitals(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HotelsAndMotels(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_All(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Parking(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SeeDo(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Shop(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalCategoriesStatics=_uuidof(ILocalCategoriesStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocation
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocation
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocation[] = L"Windows.Services.Maps.LocalSearch.ILocalLocation";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("BB0FE9AB-4502-4F2C-94A9-0D60DE0E2163"), exclusiveto, contract] */
                    MIDL_INTERFACE("BB0FE9AB-4502-4F2C-94A9-0D60DE0E2163")
                    ILocalLocation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Address(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IMapAddress * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identifier(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Point(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeopoint * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhoneNumber(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataAttribution(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalLocation=_uuidof(ILocalLocation);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocation2
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocation
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocation2[] = L"Windows.Services.Maps.LocalSearch.ILocalLocation2";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("6E9E307C-ECB5-4FFC-BB8C-BA50BA8C2DC6"), exclusiveto, contract] */
                    MIDL_INTERFACE("6E9E307C-ECB5-4FFC-BB8C-BA50BA8C2DC6")
                    ILocalLocation2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Category(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RatingInfo(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HoursOfOperation(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalLocation2=_uuidof(ILocalLocation2);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationFinderResult
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("D09B6CC6-F338-4191-9FD8-5440B9A68F52"), exclusiveto, contract] */
                    MIDL_INTERFACE("D09B6CC6-F338-4191-9FD8-5440B9A68F52")
                    ILocalLocationFinderResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalLocations(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalLocationFinderResult=_uuidof(ILocalLocationFinderResult);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationFinder
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("D2EF7344-A0DE-48CA-81A8-07C7DCFD37AB"), exclusiveto, contract] */
                    MIDL_INTERFACE("D2EF7344-A0DE-48CA-81A8-07C7DCFD37AB")
                    ILocalLocationFinderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE FindLocalLocationsAsync(
                            /* [in] */__RPC__in HSTRING searchTerm,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeocircle * searchArea,
                            /* [in] */__RPC__in HSTRING localCategory,
                            /* [in] */UINT32 maxResults,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalLocationFinderStatics=_uuidof(ILocalLocationFinderStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("23548C72-A1C7-43F1-A4F0-1091C39EC640"), exclusiveto, contract] */
                    MIDL_INTERFACE("23548C72-A1C7-43F1-A4F0-1091C39EC640")
                    ILocalLocationHoursOfOperationItem : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Day(
                            /* [retval, out] */__RPC__out ABI::Windows::Globalization::DayOfWeek * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Start(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Span(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalLocationHoursOfOperationItem=_uuidof(ILocalLocationHoursOfOperationItem);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("CB1DAB56-3354-4311-8BC0-A2D4D5EB806E"), exclusiveto, contract] */
                    MIDL_INTERFACE("CB1DAB56-3354-4311-8BC0-A2D4D5EB806E")
                    ILocalLocationRatingInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AggregateRating(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RatingCount(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderIdentifier(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILocalLocationRatingInfo=_uuidof(ILocalLocationRatingInfo);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.PlaceInfoHelper
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics[] = L"Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics";
namespace ABI {
    namespace Windows {
        namespace Services {
            namespace Maps {
                namespace LocalSearch {
                    /* [object, uuid("DD1CA9A7-A9C6-491B-BC09-E80FCEA48EE6"), exclusiveto, contract] */
                    MIDL_INTERFACE("DD1CA9A7-A9C6-491B-BC09-E80FCEA48EE6")
                    IPlaceInfoHelperStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateFromLocalLocation(
                            /* [in] */__RPC__in_opt ABI::Windows::Services::Maps::LocalSearch::ILocalLocation * location,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Services::Maps::IPlaceInfo * * resultValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlaceInfoHelperStatics=_uuidof(IPlaceInfoHelperStatics);
                    
                } /* Windows */
            } /* Services */
        } /* Maps */
    } /* LocalSearch */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalCategories
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics interface starting with version 1.0 of the Windows.Services.Maps.LocalSearchContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalCategories_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalCategories_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalCategories[] = L"Windows.Services.Maps.LocalSearch.LocalCategories";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocation
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocation ** Default Interface **
 *    Windows.Services.Maps.LocalSearch.ILocalLocation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocation_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocation[] = L"Windows.Services.Maps.LocalSearch.LocalLocation";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationFinder
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics interface starting with version 1.0 of the Windows.Services.Maps.LocalSearchContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinder_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationFinder[] = L"Windows.Services.Maps.LocalSearch.LocalLocationFinder";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationFinderResult
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult[] = L"Windows.Services.Maps.LocalSearch.LocalLocationFinderResult";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem[] = L"Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo[] = L"Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.PlaceInfoHelper
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics interface starting with version 4.0 of the Windows.Services.Maps.LocalSearchContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_PlaceInfoHelper_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_PlaceInfoHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_PlaceInfoHelper[] = L"Windows.Services.Maps.LocalSearch.PlaceInfoHelper";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics;

#endif // ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;

typedef struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl;

interface __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;

typedef  struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl;

interface __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem;

typedef struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
            /* [in] */ __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl;

interface __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult;

typedef struct __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl;

interface __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult_INTERFACE_DEFINED__

#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

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


#if !defined(____FIReference_1_int_INTERFACE_DEFINED__)
#define ____FIReference_1_int_INTERFACE_DEFINED__

typedef interface __FIReference_1_int __FIReference_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_int;

typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;

interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_int_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_int_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




typedef enum __x_ABI_CWindows_CGlobalization_CDayOfWeek __x_ABI_CWindows_CGlobalization_CDayOfWeek;




#ifndef ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIMapAddress __x_ABI_CWindows_CServices_CMaps_CIMapAddress;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIMapAddress_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo;

#endif // ____x_ABI_CWindows_CServices_CMaps_CIPlaceInfo_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus;


























/*
 *
 * Struct Windows.Services.Maps.LocalSearch.LocalLocationFinderStatus
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 */

#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus
{
    LocalLocationFinderStatus_Success = 0,
    LocalLocationFinderStatus_UnknownError = 1,
    LocalLocationFinderStatus_InvalidCredentials = 2,
    LocalLocationFinderStatus_InvalidCategory = 3,
    LocalLocationFinderStatus_InvalidSearchTerm = 4,
    LocalLocationFinderStatus_InvalidSearchArea = 5,
    LocalLocationFinderStatus_NetworkFailure = 6,
    LocalLocationFinderStatus_NotSupported = 7,
};
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalCategories
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics[] = L"Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics";
/* [object, uuid("F49399F5-8261-4321-9974-EF92D49A8DCA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BankAndCreditUnions )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EatDrink )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Hospitals )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HotelsAndMotels )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_All )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Parking )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SeeDo )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Shop )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_BankAndCreditUnions(This,value) \
    ( (This)->lpVtbl->get_BankAndCreditUnions(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_EatDrink(This,value) \
    ( (This)->lpVtbl->get_EatDrink(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_Hospitals(This,value) \
    ( (This)->lpVtbl->get_Hospitals(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_HotelsAndMotels(This,value) \
    ( (This)->lpVtbl->get_HotelsAndMotels(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_All(This,value) \
    ( (This)->lpVtbl->get_All(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_Parking(This,value) \
    ( (This)->lpVtbl->get_Parking(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_SeeDo(This,value) \
    ( (This)->lpVtbl->get_SeeDo(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_get_Shop(This,value) \
    ( (This)->lpVtbl->get_Shop(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalCategoriesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocation
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocation
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocation[] = L"Windows.Services.Maps.LocalSearch.ILocalLocation";
/* [object, uuid("BB0FE9AB-4502-4F2C-94A9-0D60DE0E2163"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIMapAddress * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeopoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataAttribution )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_Address(This,value) \
    ( (This)->lpVtbl->get_Address(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_Identifier(This,value) \
    ( (This)->lpVtbl->get_Identifier(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_Point(This,value) \
    ( (This)->lpVtbl->get_Point(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_PhoneNumber(This,value) \
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_get_DataAttribution(This,value) \
    ( (This)->lpVtbl->get_DataAttribution(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocation2
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocation
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocation2[] = L"Windows.Services.Maps.LocalSearch.ILocalLocation2";
/* [object, uuid("6E9E307C-ECB5-4FFC-BB8C-BA50BA8C2DC6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RatingInfo )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HoursOfOperation )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationHoursOfOperationItem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2Vtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_get_Category(This,value) \
    ( (This)->lpVtbl->get_Category(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_get_RatingInfo(This,value) \
    ( (This)->lpVtbl->get_RatingInfo(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_get_HoursOfOperation(This,value) \
    ( (This)->lpVtbl->get_HoursOfOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationFinderResult
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult";
/* [object, uuid("D09B6CC6-F338-4191-9FD8-5440B9A68F52"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalLocations )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CLocalLocationFinderStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResultVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_get_LocalLocations(This,value) \
    ( (This)->lpVtbl->get_LocalLocations(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationFinder
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics";
/* [object, uuid("D2EF7344-A0DE-48CA-81A8-07C7DCFD37AB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindLocalLocationsAsync )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics * This,
        /* [in] */__RPC__in HSTRING searchTerm,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeocircle * searchArea,
        /* [in] */__RPC__in HSTRING localCategory,
        /* [in] */UINT32 maxResults,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CMaps__CLocalSearch__CLocalLocationFinderResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_FindLocalLocationsAsync(This,searchTerm,searchArea,localCategory,maxResults,result) \
    ( (This)->lpVtbl->FindLocalLocationsAsync(This,searchTerm,searchArea,localCategory,maxResults,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationFinderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem";
/* [object, uuid("23548C72-A1C7-43F1-A4F0-1091C39EC640"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDayOfWeek * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Start )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Span )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItemVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_get_Day(This,value) \
    ( (This)->lpVtbl->get_Day(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_get_Start(This,value) \
    ( (This)->lpVtbl->get_Start(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_get_Span(This,value) \
    ( (This)->lpVtbl->get_Span(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationHoursOfOperationItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo[] = L"Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo";
/* [object, uuid("CB1DAB56-3354-4311-8BC0-A2D4D5EB806E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AggregateRating )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RatingCount )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderIdentifier )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfoVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_get_AggregateRating(This,value) \
    ( (This)->lpVtbl->get_AggregateRating(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_get_RatingCount(This,value) \
    ( (This)->lpVtbl->get_RatingCount(This,value) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_get_ProviderIdentifier(This,value) \
    ( (This)->lpVtbl->get_ProviderIdentifier(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocationRatingInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Services.Maps.LocalSearch.PlaceInfoHelper
 *
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_Maps_LocalSearch_IPlaceInfoHelperStatics[] = L"Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics";
/* [object, uuid("DD1CA9A7-A9C6-491B-BC09-E80FCEA48EE6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromLocalLocation )(
        __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CILocalLocation * location,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CServices_CMaps_CIPlaceInfo * * resultValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStaticsVtbl;

interface __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_CreateFromLocalLocation(This,location,resultValue) \
    ( (This)->lpVtbl->CreateFromLocalLocation(This,location,resultValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CServices_CMaps_CLocalSearch_CIPlaceInfoHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalCategories
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.LocalSearch.ILocalCategoriesStatics interface starting with version 1.0 of the Windows.Services.Maps.LocalSearchContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalCategories_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalCategories_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalCategories[] = L"Windows.Services.Maps.LocalSearch.LocalCategories";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocation
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocation ** Default Interface **
 *    Windows.Services.Maps.LocalSearch.ILocalLocation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocation_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocation[] = L"Windows.Services.Maps.LocalSearch.LocalLocation";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationFinder
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.LocalSearch.ILocalLocationFinderStatics interface starting with version 1.0 of the Windows.Services.Maps.LocalSearchContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinder_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationFinder[] = L"Windows.Services.Maps.LocalSearch.LocalLocationFinder";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationFinderResult
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocationFinderResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationFinderResult[] = L"Windows.Services.Maps.LocalSearch.LocalLocationFinderResult";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocationHoursOfOperationItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationHoursOfOperationItem[] = L"Windows.Services.Maps.LocalSearch.LocalLocationHoursOfOperationItem";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Services.Maps.LocalSearch.ILocalLocationRatingInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_LocalLocationRatingInfo[] = L"Windows.Services.Maps.LocalSearch.LocalLocationRatingInfo";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Services.Maps.LocalSearch.PlaceInfoHelper
 *
 * Introduced to Windows.Services.Maps.LocalSearchContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Services.Maps.LocalSearch.IPlaceInfoHelperStatics interface starting with version 4.0 of the Windows.Services.Maps.LocalSearchContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Services_Maps_LocalSearch_PlaceInfoHelper_DEFINED
#define RUNTIMECLASS_Windows_Services_Maps_LocalSearch_PlaceInfoHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_Maps_LocalSearch_PlaceInfoHelper[] = L"Windows.Services.Maps.LocalSearch.PlaceInfoHelper";
#endif
#endif // WINDOWS_SERVICES_MAPS_LOCALSEARCHCONTRACT_VERSION >= 0x40000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eservices2Emaps2Elocalsearch_p_h__

#endif // __windows2Eservices2Emaps2Elocalsearch_h__
