/* Header file automatically generated from windows.devices.gpio.idl */
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
#ifndef __windows2Edevices2Egpio_h__
#define __windows2Edevices2Egpio_h__
#ifndef __windows2Edevices2Egpio_p_h__
#define __windows2Edevices2Egpio_p_h__


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

#if !defined(WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION)
#define WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION)

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
#include "Windows.Devices.h"
#include "Windows.Devices.Gpio.Provider.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioChangeCounter;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter ABI::Windows::Devices::Gpio::IGpioChangeCounter

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioChangeCounterFactory;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory ABI::Windows::Devices::Gpio::IGpioChangeCounterFactory

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioChangeReader;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader ABI::Windows::Devices::Gpio::IGpioChangeReader

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioChangeReaderFactory;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory ABI::Windows::Devices::Gpio::IGpioChangeReaderFactory

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioController;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController ABI::Windows::Devices::Gpio::IGpioController

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioControllerStatics;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics ABI::Windows::Devices::Gpio::IGpioControllerStatics

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioControllerStatics2;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 ABI::Windows::Devices::Gpio::IGpioControllerStatics2

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioPin;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin ABI::Windows::Devices::Gpio::IGpioPin

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                interface IGpioPinValueChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs ABI::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                struct GpioChangeRecord;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#define DEF___FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a4c620b9-cb89-5a25-bf16-5f412c1a3388"))
IIterator<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> : IIterator_impl<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Gpio.GpioChangeRecord>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_t;
#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Gpio::GpioChangeRecord>
//#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Gpio::GpioChangeRecord>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#define DEF___FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b4afbf4f-620e-5725-878a-78c6ed10374e"))
IIterable<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> : IIterable_impl<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Gpio.GpioChangeRecord>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_t;
#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Gpio::GpioChangeRecord>
//#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Gpio::GpioChangeRecord>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                class GpioController;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIIterator_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67944db0-6c56-5a2f-9e7b-63ca1aa8c411"))
IIterator<ABI::Windows::Devices::Gpio::GpioController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioController*, ABI::Windows::Devices::Gpio::IGpioController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Gpio.GpioController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Gpio::GpioController*> __FIIterator_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Gpio::IGpioController*>
//#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Gpio::IGpioController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIIterable_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("415c3794-b2b6-5f5c-9a05-ae9268514726"))
IIterable<ABI::Windows::Devices::Gpio::GpioController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioController*, ABI::Windows::Devices::Gpio::IGpioController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Gpio.GpioController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Gpio::GpioController*> __FIIterable_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Gpio::IGpioController*>
//#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Gpio::IGpioController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d30ab625-1264-539e-acef-306dd214dc3b"))
IVectorView<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> : IVectorView_impl<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Gpio.GpioChangeRecord>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_t;
#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::GpioChangeRecord>
//#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::GpioChangeRecord>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE */




#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7fc72a82-2c57-5c01-a652-a8bdac685d30"))
IVectorView<ABI::Windows::Devices::Gpio::GpioController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioController*, ABI::Windows::Devices::Gpio::IGpioController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Gpio.GpioController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Gpio::GpioController*> __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::IGpioController*>
//#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::IGpioController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#define DEF___FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c8c443c2-f7d4-5386-ad15-31838882bd9e"))
IVector<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> : IVector_impl<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.Gpio.GpioChangeRecord>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<struct ABI::Windows::Devices::Gpio::GpioChangeRecord> __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_t;
#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Gpio::GpioChangeRecord>
//#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::Gpio::GpioChangeRecord>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_USE */




#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("370167c0-0f7b-5e77-9bae-d35089a3db75"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Gpio::GpioController*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioController*, ABI::Windows::Devices::Gpio::IGpioController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Gpio.GpioController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Gpio::GpioController*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Gpio::IGpioController*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Gpio::IGpioController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ed045917-96c7-5735-b4be-d79619d4835e"))
IAsyncOperation<ABI::Windows::Devices::Gpio::GpioController*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioController*, ABI::Windows::Devices::Gpio::IGpioController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Gpio.GpioController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Gpio::GpioController*> __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Gpio::IGpioController*>
//#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Gpio::IGpioController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ee427f2e-7d37-558f-9718-9cbcbff40c94"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CGpio__CGpioController*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CGpio__CGpioController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Gpio.GpioController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CGpio__CGpioController*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::IGpioController*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::IGpioController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5da3faf4-60a7-5a14-9319-3941dfb13fed"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CGpio__CGpioController*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CGpio__CGpioController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Gpio.GpioController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CGpio__CGpioController*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::IGpioController*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::IGpioController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                class GpioPin;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                class GpioPinValueChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44ba689b-7d42-5374-add9-ab41e877a34b"))
ITypedEventHandler<ABI::Windows::Devices::Gpio::GpioPin*,ABI::Windows::Devices::Gpio::GpioPinValueChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioPin*, ABI::Windows::Devices::Gpio::IGpioPin*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::GpioPinValueChangedEventArgs*, ABI::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Gpio.GpioPin, Windows.Devices.Gpio.GpioPinValueChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Gpio::GpioPin*,ABI::Windows::Devices::Gpio::GpioPinValueChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Gpio::IGpioPin*,ABI::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Gpio::IGpioPin*,ABI::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000






#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    interface IGpioProvider;
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider ABI::Windows::Devices::Gpio::Provider::IGpioProvider

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__






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



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef enum GpioChangePolarity : int GpioChangePolarity;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef enum GpioOpenStatus : int GpioOpenStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef enum GpioPinDriveMode : int GpioPinDriveMode;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef enum GpioPinEdge : int GpioPinEdge;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef enum GpioPinValue : int GpioPinValue;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef enum GpioSharingMode : int GpioSharingMode;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef struct GpioChangeCount GpioChangeCount;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                
                typedef struct GpioChangeRecord GpioChangeRecord;
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                class GpioChangeCounter;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                class GpioChangeReader;
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */













/*
 *
 * Struct Windows.Devices.Gpio.GpioChangePolarity
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [v1_enum, contract] */
                enum GpioChangePolarity : int
                {
                    GpioChangePolarity_Falling = 0,
                    GpioChangePolarity_Rising = 1,
                    GpioChangePolarity_Both = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Devices.Gpio.GpioOpenStatus
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [v1_enum, contract] */
                enum GpioOpenStatus : int
                {
                    GpioOpenStatus_PinOpened = 0,
                    GpioOpenStatus_PinUnavailable = 1,
                    GpioOpenStatus_SharingViolation = 2,
                    GpioOpenStatus_MuxingConflict = 3,
                    GpioOpenStatus_UnknownError = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioPinDriveMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [v1_enum, contract] */
                enum GpioPinDriveMode : int
                {
                    GpioPinDriveMode_Input = 0,
                    GpioPinDriveMode_Output = 1,
                    GpioPinDriveMode_InputPullUp = 2,
                    GpioPinDriveMode_InputPullDown = 3,
                    GpioPinDriveMode_OutputOpenDrain = 4,
                    GpioPinDriveMode_OutputOpenDrainPullUp = 5,
                    GpioPinDriveMode_OutputOpenSource = 6,
                    GpioPinDriveMode_OutputOpenSourcePullDown = 7,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioPinEdge
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [v1_enum, contract] */
                enum GpioPinEdge : int
                {
                    GpioPinEdge_FallingEdge = 0,
                    GpioPinEdge_RisingEdge = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioPinValue
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [v1_enum, contract] */
                enum GpioPinValue : int
                {
                    GpioPinValue_Low = 0,
                    GpioPinValue_High = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [v1_enum, contract] */
                enum GpioSharingMode : int
                {
                    GpioSharingMode_Exclusive = 0,
                    GpioSharingMode_SharedReadOnly = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioChangeCount
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [contract] */
                struct GpioChangeCount
                {
                    UINT64 Count;
                    ABI::Windows::Foundation::TimeSpan RelativeTime;
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Devices.Gpio.GpioChangeRecord
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [contract] */
                struct GpioChangeRecord
                {
                    ABI::Windows::Foundation::TimeSpan RelativeTime;
                    ABI::Windows::Devices::Gpio::GpioPinEdge Edge;
                };
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeCounter
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeCounter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeCounter[] = L"Windows.Devices.Gpio.IGpioChangeCounter";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("CB5EC0DE-6801-43FF-803D-4576628A8B26"), exclusiveto, contract] */
                MIDL_INTERFACE("CB5EC0DE-6801-43FF-803D-4576628A8B26")
                IGpioChangeCounter : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Polarity(
                        /* [in] */ABI::Windows::Devices::Gpio::GpioChangePolarity value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Polarity(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioChangePolarity * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStarted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Read(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioChangeCount * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Reset(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioChangeCount * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioChangeCounter=_uuidof(IGpioChangeCounter);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeCounterFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeCounter
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeCounterFactory[] = L"Windows.Devices.Gpio.IGpioChangeCounterFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("147D94B6-0A9E-410C-B4FA-F89F4052084D"), exclusiveto, contract] */
                MIDL_INTERFACE("147D94B6-0A9E-410C-B4FA-F89F4052084D")
                IGpioChangeCounterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Gpio::IGpioPin * pin,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioChangeCounter * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioChangeCounterFactory=_uuidof(IGpioChangeCounterFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeReader
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeReader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeReader[] = L"Windows.Devices.Gpio.IGpioChangeReader";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("0ABC885F-E031-48E8-8590-70DE78363C6D"), exclusiveto, contract] */
                MIDL_INTERFACE("0ABC885F-E031-48E8-8590-70DE78363C6D")
                IGpioChangeReader : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capacity(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEmpty(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOverflowed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Polarity(
                        /* [in] */ABI::Windows::Devices::Gpio::GpioChangePolarity value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Polarity(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioChangePolarity * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStarted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNextItem(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioChangeRecord * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PeekNextItem(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioChangeRecord * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAllItems(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WaitForItemsAsync(
                        /* [in] */INT32 count,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioChangeReader=_uuidof(IGpioChangeReader);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeReaderFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeReader
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeReaderFactory[] = L"Windows.Devices.Gpio.IGpioChangeReaderFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("A9598EF3-390E-441A-9D1C-E8DE0B2DF0DF"), exclusiveto, contract] */
                MIDL_INTERFACE("A9598EF3-390E-441A-9D1C-E8DE0B2DF0DF")
                IGpioChangeReaderFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Gpio::IGpioPin * pin,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioChangeReader * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithCapacity(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Gpio::IGpioPin * pin,
                        /* [in] */INT32 minCapacity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioChangeReader * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioChangeReaderFactory=_uuidof(IGpioChangeReaderFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioController[] = L"Windows.Devices.Gpio.IGpioController";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("284012E3-7461-469C-A8BC-61D69D08A53C"), exclusiveto, contract] */
                MIDL_INTERFACE("284012E3-7461-469C-A8BC-61D69D08A53C")
                IGpioController : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PinCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenPin(
                        /* [in] */INT32 pinNumber,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioPin * * pin
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE OpenPinWithSharingMode(
                        /* [in] */INT32 pinNumber,
                        /* [in] */ABI::Windows::Devices::Gpio::GpioSharingMode sharingMode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioPin * * pin
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryOpenPin(
                        /* [in] */INT32 pinNumber,
                        /* [in] */ABI::Windows::Devices::Gpio::GpioSharingMode sharingMode,
                        /* [out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioPin * * pin,
                        /* [out] */__RPC__out ABI::Windows::Devices::Gpio::GpioOpenStatus * openStatus,
                        /* [retval, out] */__RPC__out boolean * succeeded
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioController=_uuidof(IGpioController);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioControllerStatics[] = L"Windows.Devices.Gpio.IGpioControllerStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("2ED6F42E-7AF7-4116-9533-C43D99A1FB64"), exclusiveto, contract] */
                MIDL_INTERFACE("2ED6F42E-7AF7-4116-9533-C43D99A1FB64")
                IGpioControllerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::IGpioController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioControllerStatics=_uuidof(IGpioControllerStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioControllerStatics2
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioControllerStatics2[] = L"Windows.Devices.Gpio.IGpioControllerStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("912B7D20-6CA4-4106-A373-FFFD346B0E5B"), exclusiveto, contract] */
                MIDL_INTERFACE("912B7D20-6CA4-4106-A373-FFFD346B0E5B")
                IGpioControllerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetControllersAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Gpio::Provider::IGpioProvider * provider,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioControllerStatics2=_uuidof(IGpioControllerStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioPin
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioPin
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioPin[] = L"Windows.Devices.Gpio.IGpioPin";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("11D9B087-AFAE-4790-9EE9-E0EAC942D201"), exclusiveto, contract] */
                MIDL_INTERFACE("11D9B087-AFAE-4790-9EE9-E0EAC942D201")
                IGpioPin : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ValueChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ValueChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DebounceTimeout(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DebounceTimeout(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PinNumber(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SharingMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioSharingMode * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsDriveModeSupported(
                        /* [in] */ABI::Windows::Devices::Gpio::GpioPinDriveMode driveMode,
                        /* [retval, out] */__RPC__out boolean * supported
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDriveMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioPinDriveMode * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDriveMode(
                        /* [in] */ABI::Windows::Devices::Gpio::GpioPinDriveMode value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Write(
                        /* [in] */ABI::Windows::Devices::Gpio::GpioPinValue value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Read(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioPinValue * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioPin=_uuidof(IGpioPin);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioPin;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioPinValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioPinValueChangedEventArgs
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs[] = L"Windows.Devices.Gpio.IGpioPinValueChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                /* [object, uuid("3137AAE1-703D-4059-BD24-B5B25DFFB84E"), exclusiveto, contract] */
                MIDL_INTERFACE("3137AAE1-703D-4059-BD24-B5B25DFFB84E")
                IGpioPinValueChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Edge(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::GpioPinEdge * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IGpioPinValueChangedEventArgs=_uuidof(IGpioPinValueChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Gpio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Gpio.GpioChangeCounter
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Gpio.IGpioChangeCounterFactory interface starting with version 3.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioChangeCounter ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeCounter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeCounter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioChangeCounter[] = L"Windows.Devices.Gpio.GpioChangeCounter";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.Gpio.GpioChangeReader
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Gpio.IGpioChangeReaderFactory interface starting with version 3.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioChangeReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeReader_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioChangeReader[] = L"Windows.Devices.Gpio.GpioChangeReader";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.Gpio.GpioController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Gpio.IGpioControllerStatics2 interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *   Static Methods exist on the Windows.Devices.Gpio.IGpioControllerStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioController[] = L"Windows.Devices.Gpio.GpioController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Gpio.GpioPin
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioPin ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioPin_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioPin_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioPin[] = L"Windows.Devices.Gpio.GpioPin";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Gpio.GpioPinValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioPinValueChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioPinValueChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioPinValueChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioPinValueChangedEventArgs[] = L"Windows.Devices.Gpio.GpioPinValueChangedEventArgs";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioController __x_ABI_CWindows_CDevices_CGpio_CIGpioController;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPin __x_ABI_CWindows_CDevices_CGpio_CIGpioPin;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord;

#if !defined(____FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord;

typedef struct __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;

interface __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord;

typedef  struct __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGpio__CGpioChangeRecord **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;

interface __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__



#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGpio__CGpioController __FIIterator_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGpio__CGpioController;

typedef struct __FIIterator_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIIterator_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CGpioController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGpio__CGpioController __FIIterable_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGpio__CGpioController;

typedef  struct __FIIterable_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGpio__CGpioController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIIterable_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGpio__CGpioController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord;

typedef struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
            /* [in] */ struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;

interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__



#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

typedef struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGpio_CIGpioController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIVectorView_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if !defined(____FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord;

typedef struct __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGpio__CGpioChangeRecord **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This, /* [in] */ __RPC__in struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl;

interface __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecordVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord_INTERFACE_DEFINED__



#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CGpio__CGpioController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGpio_CIGpioController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CGpio__CGpioController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000



#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000





#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode;


typedef struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount;


typedef struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord;























/*
 *
 * Struct Windows.Devices.Gpio.GpioChangePolarity
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity
{
    GpioChangePolarity_Falling = 0,
    GpioChangePolarity_Rising = 1,
    GpioChangePolarity_Both = 2,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Devices.Gpio.GpioOpenStatus
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus
{
    GpioOpenStatus_PinOpened = 0,
    GpioOpenStatus_PinUnavailable = 1,
    GpioOpenStatus_SharingViolation = 2,
    GpioOpenStatus_MuxingConflict = 3,
    GpioOpenStatus_UnknownError = 4,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioPinDriveMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode
{
    GpioPinDriveMode_Input = 0,
    GpioPinDriveMode_Output = 1,
    GpioPinDriveMode_InputPullUp = 2,
    GpioPinDriveMode_InputPullDown = 3,
    GpioPinDriveMode_OutputOpenDrain = 4,
    GpioPinDriveMode_OutputOpenDrainPullUp = 5,
    GpioPinDriveMode_OutputOpenSource = 6,
    GpioPinDriveMode_OutputOpenSourcePullDown = 7,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioPinEdge
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge
{
    GpioPinEdge_FallingEdge = 0,
    GpioPinEdge_RisingEdge = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioPinValue
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue
{
    GpioPinValue_Low = 0,
    GpioPinValue_High = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode
{
    GpioSharingMode_Exclusive = 0,
    GpioSharingMode_SharedReadOnly = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Gpio.GpioChangeCount
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount
{
    UINT64 Count;
    __x_ABI_CWindows_CFoundation_CTimeSpan RelativeTime;
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Devices.Gpio.GpioChangeRecord
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord
{
    __x_ABI_CWindows_CFoundation_CTimeSpan RelativeTime;
    __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge Edge;
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeCounter
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeCounter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeCounter[] = L"Windows.Devices.Gpio.IGpioChangeCounter";
/* [object, uuid("CB5EC0DE-6801-43FF-803D-4576628A8B26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStarted )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeCount * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_put_Polarity(This,value) \
    ( (This)->lpVtbl->put_Polarity(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_get_Polarity(This,value) \
    ( (This)->lpVtbl->get_Polarity(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_get_IsStarted(This,value) \
    ( (This)->lpVtbl->get_IsStarted(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_Read(This,value) \
    ( (This)->lpVtbl->Read(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_Reset(This,value) \
    ( (This)->lpVtbl->Reset(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeCounterFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeCounter
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeCounterFactory[] = L"Windows.Devices.Gpio.IGpioChangeCounterFactory";
/* [object, uuid("147D94B6-0A9E-410C-B4FA-F89F4052084D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * pin,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_Create(This,pin,value) \
    ( (This)->lpVtbl->Create(This,pin,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeCounterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeReader
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeReader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeReader[] = L"Windows.Devices.Gpio.IGpioChangeReader";
/* [object, uuid("0ABC885F-E031-48E8-8590-70DE78363C6D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capacity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOverflowed )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Polarity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangePolarity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStarted )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord * value
        );
    HRESULT ( STDMETHODCALLTYPE *PeekNextItem )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioChangeRecord * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAllItems )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CGpio__CGpioChangeRecord * * value
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForItemsAsync )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * This,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_get_Capacity(This,value) \
    ( (This)->lpVtbl->get_Capacity(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_get_IsEmpty(This,value) \
    ( (This)->lpVtbl->get_IsEmpty(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_get_IsOverflowed(This,value) \
    ( (This)->lpVtbl->get_IsOverflowed(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_put_Polarity(This,value) \
    ( (This)->lpVtbl->put_Polarity(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_get_Polarity(This,value) \
    ( (This)->lpVtbl->get_Polarity(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_get_IsStarted(This,value) \
    ( (This)->lpVtbl->get_IsStarted(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_GetNextItem(This,value) \
    ( (This)->lpVtbl->GetNextItem(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_PeekNextItem(This,value) \
    ( (This)->lpVtbl->PeekNextItem(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_GetAllItems(This,value) \
    ( (This)->lpVtbl->GetAllItems(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_WaitForItemsAsync(This,count,operation) \
    ( (This)->lpVtbl->WaitForItemsAsync(This,count,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioChangeReaderFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioChangeReader
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioChangeReaderFactory[] = L"Windows.Devices.Gpio.IGpioChangeReaderFactory";
/* [object, uuid("A9598EF3-390E-441A-9D1C-E8DE0B2DF0DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * pin,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithCapacity )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * pin,
        /* [in] */INT32 minCapacity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReader * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_Create(This,pin,value) \
    ( (This)->lpVtbl->Create(This,pin,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_CreateWithCapacity(This,pin,minCapacity,value) \
    ( (This)->lpVtbl->CreateWithCapacity(This,pin,minCapacity,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioChangeReaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioController[] = L"Windows.Devices.Gpio.IGpioController";
/* [object, uuid("284012E3-7461-469C-A8BC-61D69D08A53C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenPin )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
        /* [in] */INT32 pinNumber,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * * pin
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *OpenPinWithSharingMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
        /* [in] */INT32 pinNumber,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode sharingMode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * * pin
        );
    HRESULT ( STDMETHODCALLTYPE *TryOpenPin )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioController * This,
        /* [in] */INT32 pinNumber,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode sharingMode,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * * pin,
        /* [out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioOpenStatus * openStatus,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_get_PinCount(This,value) \
    ( (This)->lpVtbl->get_PinCount(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_OpenPin(This,pinNumber,pin) \
    ( (This)->lpVtbl->OpenPin(This,pinNumber,pin) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_OpenPinWithSharingMode(This,pinNumber,sharingMode,pin) \
    ( (This)->lpVtbl->OpenPinWithSharingMode(This,pinNumber,sharingMode,pin) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioController_TryOpenPin(This,pinNumber,sharingMode,pin,openStatus,succeeded) \
    ( (This)->lpVtbl->TryOpenPin(This,pinNumber,sharingMode,pin,openStatus,succeeded) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioControllerStatics[] = L"Windows.Devices.Gpio.IGpioControllerStatics";
/* [object, uuid("2ED6F42E-7AF7-4116-9533-C43D99A1FB64"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CIGpioController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_GetDefault(This,value) \
    ( (This)->lpVtbl->GetDefault(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioControllerStatics2
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioControllerStatics2[] = L"Windows.Devices.Gpio.IGpioControllerStatics2";
/* [object, uuid("912B7D20-6CA4-4106-A373-FFFD346B0E5B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CGpio__CGpioController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CGpio__CGpioController * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_GetControllersAsync(This,provider,operation) \
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioControllerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioPin
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioPin
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioPin[] = L"Windows.Devices.Gpio.IGpioPin";
/* [object, uuid("11D9B087-AFAE-4790-9EE9-E0EAC942D201"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGpio__CGpioPin_Windows__CDevices__CGpio__CGpioPinValueChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PinNumber )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioSharingMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsDriveModeSupported )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode driveMode,
        /* [retval, out] */__RPC__out boolean * supported
        );
    HRESULT ( STDMETHODCALLTYPE *GetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioPinDriveMode value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CGpioPinValue value
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPin * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioPinValue * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioPinVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPin
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_add_ValueChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ValueChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_remove_ValueChanged(This,token) \
    ( (This)->lpVtbl->remove_ValueChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_get_DebounceTimeout(This,value) \
    ( (This)->lpVtbl->get_DebounceTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_put_DebounceTimeout(This,value) \
    ( (This)->lpVtbl->put_DebounceTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_get_PinNumber(This,value) \
    ( (This)->lpVtbl->get_PinNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_get_SharingMode(This,value) \
    ( (This)->lpVtbl->get_SharingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_IsDriveModeSupported(This,driveMode,supported) \
    ( (This)->lpVtbl->IsDriveModeSupported(This,driveMode,supported) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_GetDriveMode(This,value) \
    ( (This)->lpVtbl->GetDriveMode(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_SetDriveMode(This,value) \
    ( (This)->lpVtbl->SetDriveMode(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_Write(This,value) \
    ( (This)->lpVtbl->Write(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPin_Read(This,value) \
    ( (This)->lpVtbl->Read(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioPin;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPin_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Gpio.IGpioPinValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.GpioPinValueChangedEventArgs
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs[] = L"Windows.Devices.Gpio.IGpioPinValueChangedEventArgs";
/* [object, uuid("3137AAE1-703D-4059-BD24-B5B25DFFB84E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Edge )(
        __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CGpioPinEdge * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_get_Edge(This,value) \
    ( (This)->lpVtbl->get_Edge(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CIGpioPinValueChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Gpio.GpioChangeCounter
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Gpio.IGpioChangeCounterFactory interface starting with version 3.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioChangeCounter ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeCounter_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeCounter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioChangeCounter[] = L"Windows.Devices.Gpio.GpioChangeCounter";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.Gpio.GpioChangeReader
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Gpio.IGpioChangeReaderFactory interface starting with version 3.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioChangeReader ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeReader_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioChangeReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioChangeReader[] = L"Windows.Devices.Gpio.GpioChangeReader";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.Gpio.GpioController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Gpio.IGpioControllerStatics2 interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *   Static Methods exist on the Windows.Devices.Gpio.IGpioControllerStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioController[] = L"Windows.Devices.Gpio.GpioController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Gpio.GpioPin
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioPin ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioPin_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioPin_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioPin[] = L"Windows.Devices.Gpio.GpioPin";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Gpio.GpioPinValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.IGpioPinValueChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_GpioPinValueChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_GpioPinValueChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_GpioPinValueChangedEventArgs[] = L"Windows.Devices.Gpio.GpioPinValueChangedEventArgs";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Egpio_p_h__

#endif // __windows2Edevices2Egpio_h__
