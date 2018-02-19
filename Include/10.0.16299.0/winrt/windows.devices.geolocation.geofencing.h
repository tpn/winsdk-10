/* Header file automatically generated from windows.devices.geolocation.geofencing.idl */
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
#ifndef __windows2Edevices2Egeolocation2Egeofencing_h__
#define __windows2Edevices2Egeolocation2Egeofencing_h__
#ifndef __windows2Edevices2Egeolocation2Egeofencing_p_h__
#define __windows2Edevices2Egeolocation2Egeofencing_p_h__


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
#include "Windows.Devices.Geolocation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    interface IGeofence;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence ABI::Windows::Devices::Geolocation::Geofencing::IGeofence

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    interface IGeofenceFactory;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceFactory

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    interface IGeofenceMonitor;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    interface IGeofenceMonitorStatics;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    interface IGeofenceStateChangeReport;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    class Geofence;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e7a9e144-202d-5708-a9bd-e3dc0e14df46"))
IIterator<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.Geofencing.Geofence>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ce697733-595c-51c0-ad5f-324af5cdf2dd"))
IIterable<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.Geofencing.Geofence>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    class GeofenceStateChangeReport;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE
#define DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eaff2de4-6650-544a-b7ac-6d5b819d4698"))
IIterator<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*> __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t;
#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>
//#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE
#define DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("76f50b4e-7aa7-565b-aada-b0c1cc144ed0"))
IIterable<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*> __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t;
#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>
//#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d8039aca-1a45-5d13-8cfd-4900c22b8ef1"))
IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geofencing.Geofence>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t;
#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ea91593d-ecf4-5041-86f2-837a282c4d94"))
IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport*> __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t;
#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>
//#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#define DEF___FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("096dc936-5f66-5c6e-95ce-ef5541fbf4c4"))
IVector<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Geolocation.Geofencing.Geofence>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Devices::Geolocation::Geofencing::Geofence*> __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t;
#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
//#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Geolocation::Geofencing::IGeofence*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    class GeofenceMonitor;
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ecc5af2c-e47a-59ce-86be-9c3066fe26f7"))
ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor*, ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Geolocation.Geofencing.GeofenceMonitor, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                class Geoposition;
            } /* Windows */
        } /* Devices */
    } /* Geolocation */} /* ABI */

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
                namespace Geofencing {
                    
                    typedef enum GeofenceMonitorStatus : int GeofenceMonitorStatus;
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    
                    typedef enum GeofenceRemovalReason : int GeofenceRemovalReason;
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    
                    typedef enum GeofenceState : unsigned int GeofenceState;
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    
                    typedef enum MonitoredGeofenceStates : unsigned int MonitoredGeofenceStates;
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */



















/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.GeofenceMonitorStatus
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
                namespace Geofencing {
                    /* [v1_enum, contract] */
                    enum GeofenceMonitorStatus : int
                    {
                        GeofenceMonitorStatus_Ready = 0,
                        GeofenceMonitorStatus_Initializing = 1,
                        GeofenceMonitorStatus_NoData = 2,
                        GeofenceMonitorStatus_Disabled = 3,
                        GeofenceMonitorStatus_NotInitialized = 4,
                        GeofenceMonitorStatus_NotAvailable = 5,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.GeofenceRemovalReason
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
                namespace Geofencing {
                    /* [v1_enum, contract] */
                    enum GeofenceRemovalReason : int
                    {
                        GeofenceRemovalReason_Used = 0,
                        GeofenceRemovalReason_Expired = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.GeofenceState
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
                namespace Geofencing {
                    /* [v1_enum, flags, contract] */
                    enum GeofenceState : unsigned int
                    {
                        GeofenceState_None = 0,
                        GeofenceState_Entered = 0x1,
                        GeofenceState_Exited = 0x2,
                        GeofenceState_Removed = 0x4,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(GeofenceState)
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.MonitoredGeofenceStates
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
                namespace Geofencing {
                    /* [v1_enum, flags, contract] */
                    enum MonitoredGeofenceStates : unsigned int
                    {
                        MonitoredGeofenceStates_None = 0,
                        MonitoredGeofenceStates_Entered = 0x1,
                        MonitoredGeofenceStates_Exited = 0x2,
                        MonitoredGeofenceStates_Removed = 0x4,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(MonitoredGeofenceStates)
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.Geofence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofence[] = L"Windows.Devices.Geolocation.Geofencing.IGeofence";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    /* [object, uuid("9C090823-EDB8-47E0-8245-5BF61D321F2D"), exclusiveto, contract] */
                    MIDL_INTERFACE("9C090823-EDB8-47E0-8245-5BF61D321F2D")
                    IGeofence : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DwellTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MonitoredStates(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Geoshape(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoshape * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SingleUse(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGeofence=_uuidof(IGeofence);
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.Geofence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    /* [object, uuid("841F624B-325F-4B90-BCA7-2B8022A93796"), exclusiveto, contract] */
                    MIDL_INTERFACE("841F624B-325F-4B90-BCA7-2B8022A93796")
                    IGeofenceFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeoshape * geoshape,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::Geofencing::IGeofence * * geofence
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithMonitorStates(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeoshape * geoshape,
                            /* [in] */ABI::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates,
                            /* [in] */boolean singleUse,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::Geofencing::IGeofence * * geofence
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithMonitorStatesAndDwellTime(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeoshape * geoshape,
                            /* [in] */ABI::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates,
                            /* [in] */boolean singleUse,
                            /* [in] */ABI::Windows::Foundation::TimeSpan dwellTime,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::Geofencing::IGeofence * * geofence
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithMonitorStatesDwellTimeStartTimeAndDuration(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Geolocation::IGeoshape * geoshape,
                            /* [in] */ABI::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates,
                            /* [in] */boolean singleUse,
                            /* [in] */ABI::Windows::Foundation::TimeSpan dwellTime,
                            /* [in] */ABI::Windows::Foundation::DateTime startTime,
                            /* [in] */ABI::Windows::Foundation::TimeSpan duration,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::Geofencing::IGeofence * * geofence
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGeofenceFactory=_uuidof(IGeofenceFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    /* [object, uuid("4C0F5F78-1C1F-4621-BBBD-833B92247226"), exclusiveto, contract] */
                    MIDL_INTERFACE("4C0F5F78-1C1F-4621-BBBD-833B92247226")
                    IGeofenceMonitor : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Geofences(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastKnownGeoposition(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoposition * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GeofenceStateChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * eventHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GeofenceStateChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReadReports(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StatusChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * eventHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StatusChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGeofenceMonitor=_uuidof(IGeofenceMonitor);
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    /* [object, uuid("2DD32FCF-7E75-4899-ACE3-2BD0A65CCE06"), exclusiveto, contract] */
                    MIDL_INTERFACE("2DD32FCF-7E75-4899-ACE3-2BD0A65CCE06")
                    IGeofenceMonitorStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGeofenceMonitorStatics=_uuidof(IGeofenceMonitorStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Geolocation {
                namespace Geofencing {
                    /* [object, uuid("9A243C18-2464-4C89-BE05-B3FFFF5BABC5"), exclusiveto, contract] */
                    MIDL_INTERFACE("9A243C18-2464-4C89-BE05-B3FFFF5BABC5")
                    IGeofenceStateChangeReport : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewState(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::Geofencing::GeofenceState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Geofence(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::Geofencing::IGeofence * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Geoposition(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Geolocation::IGeoposition * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemovalReason(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGeofenceStateChangeReport=_uuidof(IGeofenceStateChangeReport);
                    
                } /* Windows */
            } /* Devices */
        } /* Geolocation */
    } /* Geofencing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geofencing.Geofence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.Geofencing.IGeofenceFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.Geofencing.IGeofence ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_Geofence_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_Geofence_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_Geofence[] = L"Windows.Devices.Geolocation.Geofencing.Geofence";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor[] = L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport[] = L"Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;

typedef struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl;

interface __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;

typedef  struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl;

interface __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;

interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport;

typedef struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl;

interface __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReportVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence;

typedef struct __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This, /* [in] */ __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl;

interface __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape;

#endif // ____x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState;


typedef enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates;



















/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.GeofenceMonitorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus
{
    GeofenceMonitorStatus_Ready = 0,
    GeofenceMonitorStatus_Initializing = 1,
    GeofenceMonitorStatus_NoData = 2,
    GeofenceMonitorStatus_Disabled = 3,
    GeofenceMonitorStatus_NotInitialized = 4,
    GeofenceMonitorStatus_NotAvailable = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.GeofenceRemovalReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason
{
    GeofenceRemovalReason_Used = 0,
    GeofenceRemovalReason_Expired = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.GeofenceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState
{
    GeofenceState_None = 0,
    GeofenceState_Entered = 0x1,
    GeofenceState_Exited = 0x2,
    GeofenceState_Removed = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Geolocation.Geofencing.MonitoredGeofenceStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates
{
    MonitoredGeofenceStates_None = 0,
    MonitoredGeofenceStates_Entered = 0x1,
    MonitoredGeofenceStates_Exited = 0x2,
    MonitoredGeofenceStates_Removed = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.Geofence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofence[] = L"Windows.Devices.Geolocation.Geofencing.IGeofence";
/* [object, uuid("9C090823-EDB8-47E0-8245-5BF61D321F2D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DwellTime )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MonitoredStates )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Geoshape )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SingleUse )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_DwellTime(This,value) \
    ( (This)->lpVtbl->get_DwellTime(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_MonitoredStates(This,value) \
    ( (This)->lpVtbl->get_MonitoredStates(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_Geoshape(This,value) \
    ( (This)->lpVtbl->get_Geoshape(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_get_SingleUse(This,value) \
    ( (This)->lpVtbl->get_SingleUse(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.Geofence
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceFactory";
/* [object, uuid("841F624B-325F-4B90-BCA7-2B8022A93796"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMonitorStates )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates monitoredStates,
        /* [in] */boolean singleUse,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMonitorStatesAndDwellTime )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates monitoredStates,
        /* [in] */boolean singleUse,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan dwellTime,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMonitorStatesDwellTimeStartTimeAndDuration )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoshape * geoshape,
        /* [in] */__x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CMonitoredGeofenceStates monitoredStates,
        /* [in] */boolean singleUse,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan dwellTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * geofence
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_Create(This,id,geoshape,geofence) \
    ( (This)->lpVtbl->Create(This,id,geoshape,geofence) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_CreateWithMonitorStates(This,id,geoshape,monitoredStates,singleUse,geofence) \
    ( (This)->lpVtbl->CreateWithMonitorStates(This,id,geoshape,monitoredStates,singleUse,geofence) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_CreateWithMonitorStatesAndDwellTime(This,id,geoshape,monitoredStates,singleUse,dwellTime,geofence) \
    ( (This)->lpVtbl->CreateWithMonitorStatesAndDwellTime(This,id,geoshape,monitoredStates,singleUse,dwellTime,geofence) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_CreateWithMonitorStatesDwellTimeStartTimeAndDuration(This,id,geoshape,monitoredStates,singleUse,dwellTime,startTime,duration,geofence) \
    ( (This)->lpVtbl->CreateWithMonitorStatesDwellTimeStartTimeAndDuration(This,id,geoshape,monitoredStates,singleUse,dwellTime,startTime,duration,geofence) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor";
/* [object, uuid("4C0F5F78-1C1F-4621-BBBD-833B92247226"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceMonitorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Geofences )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofence * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastKnownGeoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GeofenceStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GeofenceStateChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ReadReports )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceStateChangeReport * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGeolocation__CGeofencing__CGeofenceMonitor_IInspectable * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_get_Geofences(This,value) \
    ( (This)->lpVtbl->get_Geofences(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_get_LastKnownGeoposition(This,value) \
    ( (This)->lpVtbl->get_LastKnownGeoposition(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_add_GeofenceStateChanged(This,eventHandler,token) \
    ( (This)->lpVtbl->add_GeofenceStateChanged(This,eventHandler,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_remove_GeofenceStateChanged(This,token) \
    ( (This)->lpVtbl->remove_GeofenceStateChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_ReadReports(This,value) \
    ( (This)->lpVtbl->ReadReports(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_add_StatusChanged(This,eventHandler,token) \
    ( (This)->lpVtbl->add_StatusChanged(This,eventHandler,token) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_remove_StatusChanged(This,token) \
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics";
/* [object, uuid("2DD32FCF-7E75-4899-ACE3-2BD0A65CCE06"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitor * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceMonitorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport[] = L"Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport";
/* [object, uuid("9A243C18-2464-4C89-BE05-B3FFFF5BABC5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewState )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Geofence )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofence * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Geoposition )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGeolocation_CIGeoposition * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemovalReason )(
        __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CGeofenceRemovalReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReportVtbl;

interface __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_get_NewState(This,value) \
    ( (This)->lpVtbl->get_NewState(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_get_Geofence(This,value) \
    ( (This)->lpVtbl->get_Geofence(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_get_Geoposition(This,value) \
    ( (This)->lpVtbl->get_Geoposition(This,value) )

#define __x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_get_RemovalReason(This,value) \
    ( (This)->lpVtbl->get_RemovalReason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGeolocation_CGeofencing_CIGeofenceStateChangeReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geofencing.Geofence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Geolocation.Geofencing.IGeofenceFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.Geofencing.IGeofence ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_Geofence_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_Geofence_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_Geofence[] = L"Windows.Devices.Geolocation.Geofencing.Geofence";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geofencing.GeofenceMonitor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_GeofenceMonitor[] = L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Geolocation_Geofencing_GeofenceStateChangeReport[] = L"Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport";
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
#endif // __windows2Edevices2Egeolocation2Egeofencing_p_h__

#endif // __windows2Edevices2Egeolocation2Egeofencing_h__
