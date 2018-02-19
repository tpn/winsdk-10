/* Header file automatically generated from windows.devices.spi.idl */
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
#ifndef __windows2Edevices2Espi_h__
#define __windows2Edevices2Espi_h__
#ifndef __windows2Edevices2Espi_p_h__
#define __windows2Edevices2Espi_p_h__


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
#include "Windows.Devices.Spi.Provider.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiBusInfo;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo ABI::Windows::Devices::Spi::ISpiBusInfo

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiConnectionSettings;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings ABI::Windows::Devices::Spi::ISpiConnectionSettings

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiConnectionSettingsFactory;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory ABI::Windows::Devices::Spi::ISpiConnectionSettingsFactory

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiController;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiController ABI::Windows::Devices::Spi::ISpiController

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiControllerStatics;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics ABI::Windows::Devices::Spi::ISpiControllerStatics

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiDevice;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice ABI::Windows::Devices::Spi::ISpiDevice

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                interface ISpiDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics ABI::Windows::Devices::Spi::ISpiDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                class SpiController;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIIterator_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fd7d5997-544c-5be9-b0fa-1d0efbfc4a03"))
IIterator<ABI::Windows::Devices::Spi::SpiController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiController*, ABI::Windows::Devices::Spi::ISpiController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Spi.SpiController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Spi::SpiController*> __FIIterator_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Spi::ISpiController*>
//#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Spi::ISpiController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIIterable_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7b076938-dc1b-5368-9003-059291d37f35"))
IIterable<ABI::Windows::Devices::Spi::SpiController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiController*, ABI::Windows::Devices::Spi::ISpiController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Spi.SpiController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Spi::SpiController*> __FIIterable_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Spi::ISpiController*>
//#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Spi::ISpiController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("35fec489-44a2-5543-8a0c-b52e2f9cf87c"))
IVectorView<ABI::Windows::Devices::Spi::SpiController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiController*, ABI::Windows::Devices::Spi::ISpiController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Spi.SpiController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Spi::SpiController*> __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Spi::ISpiController*>
//#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Spi::ISpiController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e94d949-a844-5b25-a3cc-afabeb18c1d2"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::SpiController*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiController*, ABI::Windows::Devices::Spi::ISpiController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Spi.SpiController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::SpiController*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::ISpiController*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::ISpiController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b6b0df6f-c097-5844-93bd-7821998fdb8e"))
IAsyncOperation<ABI::Windows::Devices::Spi::SpiController*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiController*, ABI::Windows::Devices::Spi::ISpiController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Spi.SpiController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Spi::SpiController*> __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Spi::ISpiController*>
//#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Spi::ISpiController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                class SpiDevice;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a88a28ba-6966-55e7-8c81-7c65f74e39c0"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::SpiDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiDevice*, ABI::Windows::Devices::Spi::ISpiDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Spi.SpiDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::SpiDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::ISpiDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Spi::ISpiDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("feb8466a-878f-577b-bbca-89575cfc56e4"))
IAsyncOperation<ABI::Windows::Devices::Spi::SpiDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Spi::SpiDevice*, ABI::Windows::Devices::Spi::ISpiDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Spi.SpiDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Spi::SpiDevice*> __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Spi::ISpiDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Spi::ISpiDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c8afc9cb-6807-57ec-84c9-9f3dbc003450"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CSpi__CSpiController*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CSpi__CSpiController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Spi.SpiController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CSpi__CSpiController*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Spi::ISpiController*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Spi::ISpiController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("89624331-f802-56f7-9b33-17c616ecbcfa"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CSpi__CSpiController*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CSpi__CSpiController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Spi.SpiController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CSpi__CSpiController*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Spi::ISpiController*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Spi::ISpiController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#ifndef DEF___FIIterator_1_int_USE
#define DEF___FIIterator_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bfea7f78-50c2-5f1d-a6ea-9e978d2699ff"))
IIterator<int> : IIterator_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<int> __FIIterator_1_int_t;
#define __FIIterator_1_int ABI::Windows::Foundation::Collections::__FIIterator_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_int ABI::Windows::Foundation::Collections::IIterator<INT32>
//#define __FIIterator_1_int_t ABI::Windows::Foundation::Collections::IIterator<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_int_USE */




#ifndef DEF___FIIterable_1_int_USE
#define DEF___FIIterable_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("81a643fb-f51c-5565-83c4-f96425777b66"))
IIterable<int> : IIterable_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<int> __FIIterable_1_int_t;
#define __FIIterable_1_int ABI::Windows::Foundation::Collections::__FIIterable_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_int ABI::Windows::Foundation::Collections::IIterable<INT32>
//#define __FIIterable_1_int_t ABI::Windows::Foundation::Collections::IIterable<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_int_USE */




#ifndef DEF___FIVectorView_1_int_USE
#define DEF___FIVectorView_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8d720cdf-3934-5d3f-9a55-40e8063b086a"))
IVectorView<int> : IVectorView_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<int> __FIVectorView_1_int_t;
#define __FIVectorView_1_int ABI::Windows::Foundation::Collections::__FIVectorView_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_int ABI::Windows::Foundation::Collections::IVectorView<INT32>
//#define __FIVectorView_1_int_t ABI::Windows::Foundation::Collections::IVectorView<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_int_USE */








#ifndef ____x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                namespace Provider {
                    interface ISpiProvider;
                } /* Windows */
            } /* Devices */
        } /* Spi */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider ABI::Windows::Devices::Spi::Provider::ISpiProvider

#endif // ____x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider_FWD_DEFINED__






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
            namespace Spi {
                
                typedef enum SpiMode : int SpiMode;
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                
                typedef enum SpiSharingMode : int SpiSharingMode;
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                class SpiBusInfo;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                class SpiConnectionSettings;
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */












/*
 *
 * Struct Windows.Devices.Spi.SpiMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [v1_enum, contract] */
                enum SpiMode : int
                {
                    SpiMode_Mode0 = 0,
                    SpiMode_Mode1 = 1,
                    SpiMode_Mode2 = 2,
                    SpiMode_Mode3 = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Spi.SpiSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [v1_enum, contract] */
                enum SpiSharingMode : int
                {
                    SpiSharingMode_Exclusive = 0,
                    SpiSharingMode_Shared = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiBusInfo
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiBusInfo
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiBusInfo[] = L"Windows.Devices.Spi.ISpiBusInfo";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("9929444A-54F2-48C6-B952-9C32FC02C669"), exclusiveto, contract] */
                MIDL_INTERFACE("9929444A-54F2-48C6-B952-9C32FC02C669")
                ISpiBusInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChipSelectLineCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinClockFrequency(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxClockFrequency(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedDataBitLengths(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_int * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiBusInfo=_uuidof(ISpiBusInfo);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiConnectionSettings[] = L"Windows.Devices.Spi.ISpiConnectionSettings";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("5283A37F-F935-4B9F-A7A7-3A7890AFA5CE"), exclusiveto, contract] */
                MIDL_INTERFACE("5283A37F-F935-4B9F-A7A7-3A7890AFA5CE")
                ISpiConnectionSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChipSelectLine(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ChipSelectLine(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Spi::SpiMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Devices::Spi::SpiMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataBitLength(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataBitLength(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClockFrequency(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClockFrequency(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SharingMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Spi::SpiSharingMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SharingMode(
                        /* [in] */ABI::Windows::Devices::Spi::SpiSharingMode value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiConnectionSettings=_uuidof(ISpiConnectionSettings);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiConnectionSettingsFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiConnectionSettingsFactory[] = L"Windows.Devices.Spi.ISpiConnectionSettingsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("FF99081E-10C4-44B7-9FEA-A748B5A46F31"), exclusiveto, contract] */
                MIDL_INTERFACE("FF99081E-10C4-44B7-9FEA-A748B5A46F31")
                ISpiConnectionSettingsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */INT32 chipSelectLine,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Spi::ISpiConnectionSettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiConnectionSettingsFactory=_uuidof(ISpiConnectionSettingsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiController[] = L"Windows.Devices.Spi.ISpiController";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("A8D3C829-9895-4159-A934-8741F1EE6D27"), exclusiveto, contract] */
                MIDL_INTERFACE("A8D3C829-9895-4159-A934-8741F1EE6D27")
                ISpiController : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDevice(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Spi::ISpiConnectionSettings * settings,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Spi::ISpiDevice * * device
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiController=_uuidof(ISpiController);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Spi.ISpiControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiControllerStatics[] = L"Windows.Devices.Spi.ISpiControllerStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("0D5229E2-138B-4E48-B964-4F2F79B9C5A2"), exclusiveto, contract] */
                MIDL_INTERFACE("0D5229E2-138B-4E48-B964-4F2F79B9C5A2")
                ISpiControllerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetControllersAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Spi::Provider::ISpiProvider * provider,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiControllerStatics=_uuidof(ISpiControllerStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Spi.ISpiDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiDevice[] = L"Windows.Devices.Spi.ISpiDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("05D5356D-11B6-4D39-84D5-95DFB4C9F2CE"), exclusiveto, contract] */
                MIDL_INTERFACE("05D5356D-11B6-4D39-84D5-95DFB4C9F2CE")
                ISpiDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionSettings(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Spi::ISpiConnectionSettings * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Write(
                        /* [in] */UINT32 __bufferSize,
                        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Read(
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
                        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TransferSequential(
                        /* [in] */UINT32 __writeBufferSize,
                        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TransferFullDuplex(
                        /* [in] */UINT32 __writeBufferSize,
                        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
                        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
                        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiDevice=_uuidof(ISpiDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiDeviceStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiDeviceStatics[] = L"Windows.Devices.Spi.ISpiDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Spi {
                /* [object, uuid("A278E559-5720-4D3F-BD93-56F5FF5A5879"), contract] */
                MIDL_INTERFACE("A278E559-5720-4D3F-BD93-56F5FF5A5879")
                ISpiDeviceStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromFriendlyName(
                        /* [in] */__RPC__in HSTRING friendlyName,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBusInfo(
                        /* [in] */__RPC__in HSTRING busId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Spi::ISpiBusInfo * * busInfo
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING busId,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Spi::ISpiConnectionSettings * settings,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISpiDeviceStatics=_uuidof(ISpiDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Spi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Spi.SpiBusInfo
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiBusInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiBusInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiBusInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiBusInfo[] = L"Windows.Devices.Spi.SpiBusInfo";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Spi.SpiConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Spi.ISpiConnectionSettingsFactory interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiConnectionSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiConnectionSettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiConnectionSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiConnectionSettings[] = L"Windows.Devices.Spi.SpiConnectionSettings";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Spi.SpiController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Spi.ISpiControllerStatics interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiController[] = L"Windows.Devices.Spi.SpiController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Spi.SpiDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Spi.ISpiDeviceStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiDevice[] = L"Windows.Devices.Spi.SpiDevice";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiController __x_ABI_CWindows_CDevices_CSpi_CISpiController;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiDevice __x_ABI_CWindows_CDevices_CSpi_CISpiDevice;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CSpi__CSpiController __FIIterator_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CSpi__CSpiController;

typedef struct __FIIterator_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSpi_CISpiController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIIterator_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CSpi__CSpiController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CSpi__CSpiController __FIIterable_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CSpi__CSpiController;

typedef  struct __FIIterable_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CSpi__CSpiController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIIterable_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CSpi__CSpiController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

typedef struct __FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CSpi_CISpiController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CSpi_CISpiController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIVectorView_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSpi__CSpiDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CSpi__CSpiController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#if !defined(____FIIterator_1_int_INTERFACE_DEFINED__)
#define ____FIIterator_1_int_INTERFACE_DEFINED__

typedef interface __FIIterator_1_int __FIIterator_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_int;

typedef struct __FIIterator_1_intVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_int * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_int * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_int * This, /* [retval][out] */ __RPC__out int *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_int * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_int * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_int * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) int *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_intVtbl;

interface __FIIterator_1_int
{
    CONST_VTBL struct __FIIterator_1_intVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_int_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_int_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_int_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_int_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_int_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_int_INTERFACE_DEFINED__)
#define ____FIIterable_1_int_INTERFACE_DEFINED__

typedef interface __FIIterable_1_int __FIIterable_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_int;

typedef  struct __FIIterable_1_intVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_int * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_int * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_int * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_int * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_int **first);

    END_INTERFACE
} __FIIterable_1_intVtbl;

interface __FIIterable_1_int
{
    CONST_VTBL struct __FIIterable_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_int_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_int_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_int_INTERFACE_DEFINED__)
#define ____FIVectorView_1_int_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_int __FIVectorView_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_int;

typedef struct __FIVectorView_1_intVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_int * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_int * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_int * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_int * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_int * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_int * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out int *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_int * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_int * This,
            /* [in] */ int item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_int * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) int *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_intVtbl;

interface __FIVectorView_1_int
{
    CONST_VTBL struct __FIVectorView_1_intVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_int_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_int_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_int_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_int_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_int_INTERFACE_DEFINED__






#ifndef ____x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider;

#endif // ____x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CDevices_CSpi_CSpiMode __x_ABI_CWindows_CDevices_CSpi_CSpiMode;


typedef enum __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode;




















/*
 *
 * Struct Windows.Devices.Spi.SpiMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSpi_CSpiMode
{
    SpiMode_Mode0 = 0,
    SpiMode_Mode1 = 1,
    SpiMode_Mode2 = 2,
    SpiMode_Mode3 = 3,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Spi.SpiSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode
{
    SpiSharingMode_Exclusive = 0,
    SpiSharingMode_Shared = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiBusInfo
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiBusInfo
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiBusInfo[] = L"Windows.Devices.Spi.ISpiBusInfo";
/* [object, uuid("9929444A-54F2-48C6-B952-9C32FC02C669"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChipSelectLineCount )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedDataBitLengths )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_int * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfoVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_get_ChipSelectLineCount(This,value) \
    ( (This)->lpVtbl->get_ChipSelectLineCount(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_get_MinClockFrequency(This,value) \
    ( (This)->lpVtbl->get_MinClockFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_get_MaxClockFrequency(This,value) \
    ( (This)->lpVtbl->get_MaxClockFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_get_SupportedDataBitLengths(This,value) \
    ( (This)->lpVtbl->get_SupportedDataBitLengths(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiConnectionSettings[] = L"Windows.Devices.Spi.ISpiConnectionSettings";
/* [object, uuid("5283A37F-F935-4B9F-A7A7-3A7890AFA5CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChipSelectLine )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ChipSelectLine )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSpi_CSpiMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [in] */__x_ABI_CWindows_CDevices_CSpi_CSpiMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataBitLength )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataBitLength )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClockFrequency )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * This,
        /* [in] */__x_ABI_CWindows_CDevices_CSpi_CSpiSharingMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_get_ChipSelectLine(This,value) \
    ( (This)->lpVtbl->get_ChipSelectLine(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_put_ChipSelectLine(This,value) \
    ( (This)->lpVtbl->put_ChipSelectLine(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_get_DataBitLength(This,value) \
    ( (This)->lpVtbl->get_DataBitLength(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_put_DataBitLength(This,value) \
    ( (This)->lpVtbl->put_DataBitLength(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_get_ClockFrequency(This,value) \
    ( (This)->lpVtbl->get_ClockFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_put_ClockFrequency(This,value) \
    ( (This)->lpVtbl->put_ClockFrequency(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_get_SharingMode(This,value) \
    ( (This)->lpVtbl->get_SharingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_put_SharingMode(This,value) \
    ( (This)->lpVtbl->put_SharingMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiConnectionSettingsFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiConnectionSettings
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiConnectionSettingsFactory[] = L"Windows.Devices.Spi.ISpiConnectionSettingsFactory";
/* [object, uuid("FF99081E-10C4-44B7-9FEA-A748B5A46F31"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory * This,
        /* [in] */INT32 chipSelectLine,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_Create(This,chipSelectLine,value) \
    ( (This)->lpVtbl->Create(This,chipSelectLine,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiController[] = L"Windows.Devices.Spi.ISpiController";
/* [object, uuid("A8D3C829-9895-4159-A934-8741F1EE6D27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDevice )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * * device
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiControllerVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiController_GetDevice(This,settings,device) \
    ( (This)->lpVtbl->GetDevice(This,settings,device) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Spi.ISpiControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiControllerStatics[] = L"Windows.Devices.Spi.ISpiControllerStatics";
/* [object, uuid("0D5229E2-138B-4E48-B964-4F2F79B9C5A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CProvider_CISpiProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CSpi__CSpiController * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_GetControllersAsync(This,provider,operation) \
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Spi.ISpiDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Spi.SpiDevice
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiDevice[] = L"Windows.Devices.Spi.ISpiDevice";
/* [object, uuid("05D5356D-11B6-4D39-84D5-95DFB4C9F2CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionSettings )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
        /* [in] */UINT32 __bufferSize,
        /* [size_is(__bufferSize), in] */__RPC__in_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __bufferSize,
        /* [size_is(__bufferSize), out] */__RPC__out_ecount_full(__bufferSize) BYTE * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *TransferSequential )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
        /* [in] */UINT32 __writeBufferSize,
        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *TransferFullDuplex )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDevice * This,
        /* [in] */UINT32 __writeBufferSize,
        /* [size_is(__writeBufferSize), in] */__RPC__in_ecount_full(__writeBufferSize) BYTE * writeBuffer,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __readBufferSize,
        /* [size_is(__readBufferSize), out] */__RPC__out_ecount_full(__readBufferSize) BYTE * readBuffer
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_get_ConnectionSettings(This,value) \
    ( (This)->lpVtbl->get_ConnectionSettings(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_Write(This,__bufferSize,buffer) \
    ( (This)->lpVtbl->Write(This,__bufferSize,buffer) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_Read(This,__bufferSize,buffer) \
    ( (This)->lpVtbl->Read(This,__bufferSize,buffer) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_TransferSequential(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) \
    ( (This)->lpVtbl->TransferSequential(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDevice_TransferFullDuplex(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) \
    ( (This)->lpVtbl->TransferFullDuplex(This,__writeBufferSize,writeBuffer,__readBufferSize,readBuffer) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Spi.ISpiDeviceStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Spi_ISpiDeviceStatics[] = L"Windows.Devices.Spi.ISpiDeviceStatics";
/* [object, uuid("A278E559-5720-4D3F-BD93-56F5FF5A5879"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromFriendlyName )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
        /* [in] */__RPC__in HSTRING friendlyName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBusInfo )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
        /* [in] */__RPC__in HSTRING busId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CSpi_CISpiBusInfo * * busInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics * This,
        /* [in] */__RPC__in HSTRING busId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CSpi_CISpiConnectionSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSpi__CSpiDevice * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_GetDeviceSelectorFromFriendlyName(This,friendlyName,value) \
    ( (This)->lpVtbl->GetDeviceSelectorFromFriendlyName(This,friendlyName,value) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_GetBusInfo(This,busId,busInfo) \
    ( (This)->lpVtbl->GetBusInfo(This,busId,busInfo) )

#define __x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_FromIdAsync(This,busId,settings,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,busId,settings,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CSpi_CISpiDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Spi.SpiBusInfo
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiBusInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiBusInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiBusInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiBusInfo[] = L"Windows.Devices.Spi.SpiBusInfo";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Spi.SpiConnectionSettings
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Spi.ISpiConnectionSettingsFactory interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiConnectionSettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiConnectionSettings_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiConnectionSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiConnectionSettings[] = L"Windows.Devices.Spi.SpiConnectionSettings";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Spi.SpiController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Spi.ISpiControllerStatics interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiController[] = L"Windows.Devices.Spi.SpiController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Spi.SpiDevice
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Spi.ISpiDeviceStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Spi.ISpiDevice ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Spi_SpiDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Spi_SpiDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Spi_SpiDevice[] = L"Windows.Devices.Spi.SpiDevice";
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
#endif // __windows2Edevices2Espi_p_h__

#endif // __windows2Edevices2Espi_h__
