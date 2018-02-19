/* Header file automatically generated from windows.devices.sensors.custom.idl */
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
#ifndef __windows2Edevices2Esensors2Ecustom_h__
#define __windows2Edevices2Esensors2Ecustom_h__
#ifndef __windows2Edevices2Esensors2Ecustom_p_h__
#define __windows2Edevices2Esensors2Ecustom_p_h__


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
#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    interface ICustomSensor;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor ABI::Windows::Devices::Sensors::Custom::ICustomSensor

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    interface ICustomSensor2;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 ABI::Windows::Devices::Sensors::Custom::ICustomSensor2

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    interface ICustomSensorReading;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading ABI::Windows::Devices::Sensors::Custom::ICustomSensorReading

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    interface ICustomSensorReading2;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 ABI::Windows::Devices::Sensors::Custom::ICustomSensorReading2

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    interface ICustomSensorReadingChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs ABI::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    interface ICustomSensorStatics;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics ABI::Windows::Devices::Sensors::Custom::ICustomSensorStatics

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    class CustomSensor;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("808b62d7-6e02-5680-a59e-118a98a4e70f"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Sensors::Custom::CustomSensor*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Sensors::Custom::CustomSensor*, ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Sensors.Custom.CustomSensor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Sensors::Custom::CustomSensor*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7fbfbe55-9674-54e3-a269-9caa820ed23c"))
IAsyncOperation<ABI::Windows::Devices::Sensors::Custom::CustomSensor*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Sensors::Custom::CustomSensor*, ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Sensors.Custom.CustomSensor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Sensors::Custom::CustomSensor*> __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_t;
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>
//#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    class CustomSensorReadingChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("aa9460cb-f08c-5963-b232-cc4075e984e7"))
ITypedEventHandler<ABI::Windows::Devices::Sensors::Custom::CustomSensor*,ABI::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Sensors::Custom::CustomSensor*, ABI::Windows::Devices::Sensors::Custom::ICustomSensor*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs*, ABI::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Sensors.Custom.CustomSensor, Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Sensors::Custom::CustomSensor*,ABI::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Sensors::Custom::ICustomSensor*,ABI::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Sensors::Custom::ICustomSensor*,ABI::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
            namespace Sensors {
                namespace Custom {
                    class CustomSensorReading;
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */













/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensor[] = L"Windows.Devices.Sensors.Custom.ICustomSensor";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    /* [object, uuid("A136F9AD-4034-4B4D-99DD-531AAC649C09"), exclusiveto, contract] */
                    MIDL_INTERFACE("A136F9AD-4034-4B4D-99DD-531AAC649C09")
                    ICustomSensor : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetCurrentReading(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Sensors::Custom::ICustomSensorReading * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinimumReportInterval(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReportInterval(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportInterval(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ReadingChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ReadingChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomSensor=_uuidof(ICustomSensor);
                    
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensor2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensor2[] = L"Windows.Devices.Sensors.Custom.ICustomSensor2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    /* [object, uuid("20DB3111-EC58-4D9F-BFBD-E77825088510"), exclusiveto, contract] */
                    MIDL_INTERFACE("20DB3111-EC58-4D9F-BFBD-E77825088510")
                    ICustomSensor2 : IInspectable
                    {
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReportLatency(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReportLatency(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxBatchSize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomSensor2=_uuidof(ICustomSensor2);
                    
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensorReading
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorReading[] = L"Windows.Devices.Sensors.Custom.ICustomSensorReading";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    /* [object, uuid("64004F4D-446A-4366-A87A-5F963268EC53"), exclusiveto, contract] */
                    MIDL_INTERFACE("64004F4D-446A-4366-A87A-5F963268EC53")
                    ICustomSensorReading : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomSensorReading=_uuidof(ICustomSensorReading);
                    
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorReading2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensorReading
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorReading2[] = L"Windows.Devices.Sensors.Custom.ICustomSensorReading2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    /* [object, uuid("223C98EA-BF73-4992-9A48-D3C897594CCB"), exclusiveto, contract] */
                    MIDL_INTERFACE("223C98EA-BF73-4992-9A48-D3C897594CCB")
                    ICustomSensorReading2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PerformanceCount(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomSensorReading2=_uuidof(ICustomSensorReading2);
                    
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    /* [object, uuid("6B202023-CFFD-4CC1-8FF0-E21823D76FCC"), exclusiveto, contract] */
                    MIDL_INTERFACE("6B202023-CFFD-4CC1-8FF0-E21823D76FCC")
                    ICustomSensorReadingChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reading(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Sensors::Custom::ICustomSensorReading * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomSensorReadingChangedEventArgs=_uuidof(ICustomSensorReadingChangedEventArgs);
                    
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorStatics[] = L"Windows.Devices.Sensors.Custom.ICustomSensorStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Sensors {
                namespace Custom {
                    /* [object, uuid("992052CF-F422-4C7D-836B-E7DC74A7124B"), exclusiveto, contract] */
                    MIDL_INTERFACE("992052CF-F422-4C7D-836B-E7DC74A7124B")
                    ICustomSensorStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                            /* [in] */GUID interfaceId,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                            /* [in] */__RPC__in HSTRING sensorId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomSensorStatics=_uuidof(ICustomSensorStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Sensors */
    } /* Custom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Sensors.Custom.CustomSensor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Sensors.Custom.ICustomSensorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Sensors.Custom.ICustomSensor ** Default Interface **
 *    Windows.Devices.Sensors.Custom.ICustomSensor2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Custom_CustomSensor[] = L"Windows.Devices.Sensors.Custom.CustomSensor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Sensors.Custom.CustomSensorReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Sensors.Custom.ICustomSensorReading ** Default Interface **
 *    Windows.Devices.Sensors.Custom.ICustomSensorReading2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReading_DEFINED
#define RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReading_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Custom_CustomSensorReading[] = L"Windows.Devices.Sensors.Custom.CustomSensorReading";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReadingChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReadingChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Custom_CustomSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor;

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2;

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading;

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2;

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics;

#endif // ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensorVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSensors__CCustom__CCustomSensor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensorVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;























/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensor[] = L"Windows.Devices.Sensors.Custom.ICustomSensor";
/* [object, uuid("A136F9AD-4034-4B4D-99DD-531AAC649C09"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinimumReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSensors__CCustom__CCustomSensor_Windows__CDevices__CSensors__CCustom__CCustomSensorReadingChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ReadingChanged )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorVtbl;

interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_GetCurrentReading(This,value) \
    ( (This)->lpVtbl->GetCurrentReading(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_get_MinimumReportInterval(This,value) \
    ( (This)->lpVtbl->get_MinimumReportInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_put_ReportInterval(This,value) \
    ( (This)->lpVtbl->put_ReportInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_get_ReportInterval(This,value) \
    ( (This)->lpVtbl->get_ReportInterval(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_add_ReadingChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ReadingChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_remove_ReadingChanged(This,token) \
    ( (This)->lpVtbl->remove_ReadingChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensor2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensor2[] = L"Windows.Devices.Sensors.Custom.ICustomSensor2";
/* [object, uuid("20DB3111-EC58-4D9F-BFBD-E77825088510"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReportLatency )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxBatchSize )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2Vtbl;

interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_put_ReportLatency(This,value) \
    ( (This)->lpVtbl->put_ReportLatency(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_get_ReportLatency(This,value) \
    ( (This)->lpVtbl->get_ReportLatency(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_get_MaxBatchSize(This,value) \
    ( (This)->lpVtbl->get_MaxBatchSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensor2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensorReading
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorReading[] = L"Windows.Devices.Sensors.Custom.ICustomSensorReading";
/* [object, uuid("64004F4D-446A-4366-A87A-5F963268EC53"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingVtbl;

interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorReading2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensorReading
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorReading2[] = L"Windows.Devices.Sensors.Custom.ICustomSensorReading2";
/* [object, uuid("223C98EA-BF73-4992-9A48-D3C897594CCB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2Vtbl;

interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_get_PerformanceCount(This,value) \
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs";
/* [object, uuid("6B202023-CFFD-4CC1-8FF0-E21823D76FCC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReading * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_get_Reading(This,value) \
    ( (This)->lpVtbl->get_Reading(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorReadingChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Sensors.Custom.ICustomSensorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Sensors.Custom.CustomSensor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Sensors_Custom_ICustomSensorStatics[] = L"Windows.Devices.Sensors.Custom.ICustomSensorStatics";
/* [object, uuid("992052CF-F422-4C7D-836B-E7DC74A7124B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This,
        /* [in] */GUID interfaceId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics * This,
        /* [in] */__RPC__in HSTRING sensorId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSensors__CCustom__CCustomSensor * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_GetDeviceSelector(This,interfaceId,result) \
    ( (This)->lpVtbl->GetDeviceSelector(This,interfaceId,result) )

#define __x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_FromIdAsync(This,sensorId,result) \
    ( (This)->lpVtbl->FromIdAsync(This,sensorId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSensors_CCustom_CICustomSensorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Sensors.Custom.CustomSensor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Sensors.Custom.ICustomSensorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Sensors.Custom.ICustomSensor ** Default Interface **
 *    Windows.Devices.Sensors.Custom.ICustomSensor2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensor_DEFINED
#define RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Custom_CustomSensor[] = L"Windows.Devices.Sensors.Custom.CustomSensor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Sensors.Custom.CustomSensorReading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Sensors.Custom.ICustomSensorReading ** Default Interface **
 *    Windows.Devices.Sensors.Custom.ICustomSensorReading2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReading_DEFINED
#define RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReading_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Custom_CustomSensorReading[] = L"Windows.Devices.Sensors.Custom.CustomSensorReading";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReadingChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Sensors_Custom_CustomSensorReadingChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Sensors_Custom_CustomSensorReadingChangedEventArgs[] = L"Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs";
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
#endif // __windows2Edevices2Esensors2Ecustom_p_h__

#endif // __windows2Edevices2Esensors2Ecustom_h__
