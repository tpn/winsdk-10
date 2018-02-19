/* Header file automatically generated from windows.devices.i2c.idl */
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
#ifndef __windows2Edevices2Ei2c_h__
#define __windows2Edevices2Ei2c_h__
#ifndef __windows2Edevices2Ei2c_p_h__
#define __windows2Edevices2Ei2c_p_h__


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
#include "Windows.Devices.I2c.Provider.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                interface II2cConnectionSettings;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings ABI::Windows::Devices::I2c::II2cConnectionSettings

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                interface II2cConnectionSettingsFactory;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory ABI::Windows::Devices::I2c::II2cConnectionSettingsFactory

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                interface II2cController;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CII2cController ABI::Windows::Devices::I2c::II2cController

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                interface II2cControllerStatics;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics ABI::Windows::Devices::I2c::II2cControllerStatics

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                interface II2cDevice;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice ABI::Windows::Devices::I2c::II2cDevice

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                interface II2cDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics ABI::Windows::Devices::I2c::II2cDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                class I2cController;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIIterator_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8f6822fc-e4ea-5b35-939a-27f3b3d550d2"))
IIterator<ABI::Windows::Devices::I2c::I2cController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cController*, ABI::Windows::Devices::I2c::II2cController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.I2c.I2cController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::I2c::I2cController*> __FIIterator_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::I2c::II2cController*>
//#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::I2c::II2cController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIIterable_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a5ee8233-2429-5b26-9a02-993e4e7edfa9"))
IIterable<ABI::Windows::Devices::I2c::I2cController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cController*, ABI::Windows::Devices::I2c::II2cController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.I2c.I2cController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::I2c::I2cController*> __FIIterable_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::I2c::II2cController*>
//#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::I2c::II2cController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c5dd481d-a441-5a8c-865f-08fa31490de5"))
IVectorView<ABI::Windows::Devices::I2c::I2cController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cController*, ABI::Windows::Devices::I2c::II2cController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.I2c.I2cController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::I2c::I2cController*> __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::II2cController*>
//#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::II2cController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6ff64b72-a5aa-5986-b563-27612afb373c"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::I2cController*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cController*, ABI::Windows::Devices::I2c::II2cController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.I2c.I2cController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::I2cController*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::II2cController*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::II2cController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a4fb1dd4-80c9-5a61-ae8d-c8a7afc03275"))
IAsyncOperation<ABI::Windows::Devices::I2c::I2cController*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cController*, ABI::Windows::Devices::I2c::II2cController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.I2c.I2cController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::I2c::I2cController*> __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::I2c::II2cController*>
//#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::I2c::II2cController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                class I2cDevice;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2df5bb6a-5e73-5ae3-a0b2-22e1c9d8ef4d"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::I2cDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cDevice*, ABI::Windows::Devices::I2c::II2cDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.I2c.I2cDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::I2cDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::II2cDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::I2c::II2cDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1e8a7cd8-e41b-5a41-82b1-80055012ae00"))
IAsyncOperation<ABI::Windows::Devices::I2c::I2cDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::I2c::I2cDevice*, ABI::Windows::Devices::I2c::II2cDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.I2c.I2cDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::I2c::I2cDevice*> __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::I2c::II2cDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::I2c::II2cDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3b9d7cb1-ae0b-56af-8ed5-6856b1e7cd5b"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CI2c__CI2cController*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CI2c__CI2cController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.I2c.I2cController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CI2c__CI2cController*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::II2cController*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::II2cController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("77f52ff7-aba0-54bb-891a-49351a838e33"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CI2c__CI2cController*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CI2c__CI2cController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.I2c.I2cController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CI2c__CI2cController*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::II2cController*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::I2c::II2cController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000






#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                namespace Provider {
                    interface II2cProvider;
                } /* Windows */
            } /* Devices */
        } /* I2c */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider ABI::Windows::Devices::I2c::Provider::II2cProvider

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__






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
        namespace Devices {
            namespace I2c {
                
                typedef enum I2cBusSpeed : int I2cBusSpeed;
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                
                typedef enum I2cSharingMode : int I2cSharingMode;
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                
                typedef enum I2cTransferStatus : int I2cTransferStatus;
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                
                typedef struct I2cTransferResult I2cTransferResult;
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                class I2cConnectionSettings;
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */












/*
 *
 * Struct Windows.Devices.I2c.I2cBusSpeed
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [v1_enum, contract] */
                enum I2cBusSpeed : int
                {
                    I2cBusSpeed_StandardMode = 0,
                    I2cBusSpeed_FastMode = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.I2c.I2cSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [v1_enum, contract] */
                enum I2cSharingMode : int
                {
                    I2cSharingMode_Exclusive = 0,
                    I2cSharingMode_Shared = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.I2c.I2cTransferStatus
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [v1_enum, contract] */
                enum I2cTransferStatus : int
                {
                    I2cTransferStatus_FullTransfer = 0,
                    I2cTransferStatus_PartialTransfer = 1,
                    I2cTransferStatus_SlaveAddressNotAcknowledged = 2,
                    I2cTransferStatus_ClockStretchTimeout = 3,
                    I2cTransferStatus_UnknownError = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.I2c.I2cTransferResult
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [contract] */
                struct I2cTransferResult
                {
                    ABI::Windows::Devices::I2c::I2cTransferStatus Status;
                    UINT32 BytesTransferred;
                };
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cConnectionSettings[] = L"Windows.Devices.I2c.II2cConnectionSettings";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [object, uuid("F2DB1307-AB6F-4639-A767-54536DC3460F"), exclusiveto, contract] */
                MIDL_INTERFACE("F2DB1307-AB6F-4639-A767-54536DC3460F")
                II2cConnectionSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlaveAddress(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SlaveAddress(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BusSpeed(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::I2cBusSpeed * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BusSpeed(
                        /* [in] */ABI::Windows::Devices::I2c::I2cBusSpeed value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SharingMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::I2cSharingMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SharingMode(
                        /* [in] */ABI::Windows::Devices::I2c::I2cSharingMode value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_II2cConnectionSettings=_uuidof(II2cConnectionSettings);
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cConnectionSettingsFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cConnectionSettingsFactory[] = L"Windows.Devices.I2c.II2cConnectionSettingsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [object, uuid("81B586B3-9693-41B1-A243-DED4F6E66926"), exclusiveto, contract] */
                MIDL_INTERFACE("81B586B3-9693-41B1-A243-DED4F6E66926")
                II2cConnectionSettingsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */INT32 slaveAddress,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::I2c::II2cConnectionSettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_II2cConnectionSettingsFactory=_uuidof(II2cConnectionSettingsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cController[] = L"Windows.Devices.I2c.II2cController";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [object, uuid("C48AB1B2-87A0-4166-8E3E-B4B8F97CD729"), exclusiveto, contract] */
                MIDL_INTERFACE("C48AB1B2-87A0-4166-8E3E-B4B8F97CD729")
                II2cController : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDevice(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::I2c::II2cConnectionSettings * settings,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::I2c::II2cDevice * * device
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_II2cController=_uuidof(II2cController);
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.II2cControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cControllerStatics[] = L"Windows.Devices.I2c.II2cControllerStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [object, uuid("40FC0365-5F05-4E7E-84BD-100DB8E0AEC5"), exclusiveto, contract] */
                MIDL_INTERFACE("40FC0365-5F05-4E7E-84BD-100DB8E0AEC5")
                II2cControllerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetControllersAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::I2c::Provider::II2cProvider * provider,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_II2cControllerStatics=_uuidof(II2cControllerStatics);
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.II2cDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cDevice[] = L"Windows.Devices.I2c.II2cDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [object, uuid("8636C136-B9C5-4F70-9449-CC46DC6F57EB"), exclusiveto, contract] */
                MIDL_INTERFACE("8636C136-B9C5-4F70-9449-CC46DC6F57EB")
                II2cDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionSettings(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::I2c::II2cConnectionSettings * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Write(
                        /* [in] */UINT32 __bufferSize,
                        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WritePartial(
                        /* [in] */UINT32 __bufferSize,
                        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::I2cTransferResult * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Read(
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadPartial(
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer,
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::I2cTransferResult * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteRead(
                        /* [in] */UINT32 __writeBufferSize,
                        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WriteReadPartial(
                        /* [in] */UINT32 __writeBufferSize,
                        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer,
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::I2c::I2cTransferResult * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_II2cDevice=_uuidof(II2cDevice);
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cDeviceStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cDeviceStatics[] = L"Windows.Devices.I2c.II2cDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace I2c {
                /* [object, uuid("91A33BE3-7334-4512-96BC-FBAE9459F5F6"), contract] */
                MIDL_INTERFACE("91A33BE3-7334-4512-96BC-FBAE9459F5F6")
                II2cDeviceStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromFriendlyName(
                        /* [in] */__RPC__in HSTRING friendlyName,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::I2c::II2cConnectionSettings * settings,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_II2cDeviceStatics=_uuidof(II2cDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* I2c */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.I2c.I2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.I2c.II2cConnectionSettingsFactory interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.II2cConnectionSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_I2cConnectionSettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_I2cConnectionSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cConnectionSettings[] = L"Windows.Devices.I2c.I2cConnectionSettings";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.I2c.I2cController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.I2c.II2cControllerStatics interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.II2cController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_I2cController_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_I2cController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cController[] = L"Windows.Devices.I2c.I2cController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.I2c.I2cDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.I2c.II2cDeviceStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.II2cDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_I2cDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_I2cDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cDevice[] = L"Windows.Devices.I2c.I2cDevice";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cController __x_ABI_CWindows_CDevices_CI2c_CII2cController;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cDevice __x_ABI_CWindows_CDevices_CI2c_CII2cDevice;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CI2c__CI2cController __FIIterator_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CI2c__CI2cController;

typedef struct __FIIterator_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CII2cController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIIterator_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CI2c__CI2cController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CI2c__CI2cController __FIIterable_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CI2c__CI2cController;

typedef  struct __FIIterable_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CI2c__CI2cController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIIterable_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CI2c__CI2cController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

typedef struct __FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CI2c_CII2cController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CI2c_CII2cController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIVectorView_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CI2c__CI2cDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CI2c__CI2cController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000





#ifndef ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider;

#endif // ____x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed;


typedef enum __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode;


typedef enum __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus;


typedef struct __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult;


















/*
 *
 * Struct Windows.Devices.I2c.I2cBusSpeed
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed
{
    I2cBusSpeed_StandardMode = 0,
    I2cBusSpeed_FastMode = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.I2c.I2cSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode
{
    I2cSharingMode_Exclusive = 0,
    I2cSharingMode_Shared = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.I2c.I2cTransferStatus
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus
{
    I2cTransferStatus_FullTransfer = 0,
    I2cTransferStatus_PartialTransfer = 1,
    I2cTransferStatus_SlaveAddressNotAcknowledged = 2,
    I2cTransferStatus_ClockStretchTimeout = 3,
    I2cTransferStatus_UnknownError = 4,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.I2c.I2cTransferResult
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult
{
    __x_ABI_CWindows_CDevices_CI2c_CI2cTransferStatus Status;
    UINT32 BytesTransferred;
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cConnectionSettings[] = L"Windows.Devices.I2c.II2cConnectionSettings";
/* [object, uuid("F2DB1307-AB6F-4639-A767-54536DC3460F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SlaveAddress )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BusSpeed )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
        /* [in] */__x_ABI_CWindows_CDevices_CI2c_CI2cBusSpeed value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * This,
        /* [in] */__x_ABI_CWindows_CDevices_CI2c_CI2cSharingMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_get_SlaveAddress(This,value) \
    ( (This)->lpVtbl->get_SlaveAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_put_SlaveAddress(This,value) \
    ( (This)->lpVtbl->put_SlaveAddress(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_get_BusSpeed(This,value) \
    ( (This)->lpVtbl->get_BusSpeed(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_put_BusSpeed(This,value) \
    ( (This)->lpVtbl->put_BusSpeed(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_get_SharingMode(This,value) \
    ( (This)->lpVtbl->get_SharingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_put_SharingMode(This,value) \
    ( (This)->lpVtbl->put_SharingMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cConnectionSettingsFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cConnectionSettingsFactory[] = L"Windows.Devices.I2c.II2cConnectionSettingsFactory";
/* [object, uuid("81B586B3-9693-41B1-A243-DED4F6E66926"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory * This,
        /* [in] */INT32 slaveAddress,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_Create(This,slaveAddress,value) \
    ( (This)->lpVtbl->Create(This,slaveAddress,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cController[] = L"Windows.Devices.I2c.II2cController";
/* [object, uuid("C48AB1B2-87A0-4166-8E3E-B4B8F97CD729"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDevice )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * * device
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CII2cControllerVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CII2cController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cController_GetDevice(This,settings,device) \
    ( (This)->lpVtbl->GetDevice(This,settings,device) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.II2cControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cControllerStatics[] = L"Windows.Devices.I2c.II2cControllerStatics";
/* [object, uuid("40FC0365-5F05-4E7E-84BD-100DB8E0AEC5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CProvider_CII2cProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CI2c__CI2cController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cController * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_GetControllersAsync(This,provider,operation) \
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.I2c.II2cDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.I2c.I2cDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cDevice[] = L"Windows.Devices.I2c.II2cDevice";
/* [object, uuid("8636C136-B9C5-4F70-9449-CC46DC6F57EB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionSettings )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [in] */UINT32 __bufferSize,
        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *WritePartial )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [in] */UINT32 __bufferSize,
        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *ReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult * result
        );
    HRESULT ( STDMETHODCALLTYPE *WriteRead )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [in] */UINT32 __writeBufferSize,
        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *WriteReadPartial )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDevice * This,
        /* [in] */UINT32 __writeBufferSize,
        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CI2c_CI2cTransferResult * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CII2cDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_get_ConnectionSettings(This,value) \
    ( (This)->lpVtbl->get_ConnectionSettings(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_Write(This,__bufferSize,buffer) \
    ( (This)->lpVtbl->Write(This,__bufferSize,buffer) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_WritePartial(This,__bufferSize,buffer,result) \
    ( (This)->lpVtbl->WritePartial(This,__bufferSize,buffer,result) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_Read(This,__bufferSize,buffer) \
    ( (This)->lpVtbl->Read(This,__bufferSize,buffer) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_ReadPartial(This,__bufferSize,buffer,result) \
    ( (This)->lpVtbl->ReadPartial(This,__bufferSize,buffer,result) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_WriteRead(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) \
    ( (This)->lpVtbl->WriteRead(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDevice_WriteReadPartial(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer,result) \
    ( (This)->lpVtbl->WriteReadPartial(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.I2c.II2cDeviceStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_I2c_II2cDeviceStatics[] = L"Windows.Devices.I2c.II2cDeviceStatics";
/* [object, uuid("91A33BE3-7334-4512-96BC-FBAE9459F5F6"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromFriendlyName )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
        /* [in] */__RPC__in HSTRING friendlyName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CI2c_CII2cConnectionSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CI2c__CI2cDevice * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_GetDeviceSelectorFromFriendlyName(This,friendlyName,value) \
    ( (This)->lpVtbl->GetDeviceSelectorFromFriendlyName(This,friendlyName,value) )

#define __x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_FromIdAsync(This,deviceId,settings,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,settings,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CI2c_CII2cDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.I2c.I2cConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.I2c.II2cConnectionSettingsFactory interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.II2cConnectionSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_I2cConnectionSettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_I2cConnectionSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cConnectionSettings[] = L"Windows.Devices.I2c.I2cConnectionSettings";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.I2c.I2cController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.I2c.II2cControllerStatics interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.II2cController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_I2cController_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_I2cController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cController[] = L"Windows.Devices.I2c.I2cController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.I2c.I2cDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.I2c.II2cDeviceStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.I2c.II2cDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_I2c_I2cDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_I2c_I2cDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_I2c_I2cDevice[] = L"Windows.Devices.I2c.I2cDevice";
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
#endif // __windows2Edevices2Ei2c_p_h__

#endif // __windows2Edevices2Ei2c_h__
