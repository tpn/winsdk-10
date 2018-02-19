/* Header file automatically generated from windows.devices.adc.idl */
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
#ifndef __windows2Edevices2Eadc_h__
#define __windows2Edevices2Eadc_h__
#ifndef __windows2Edevices2Eadc_p_h__
#define __windows2Edevices2Eadc_p_h__


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
#include "Windows.Devices.Adc.Provider.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                interface IAdcChannel;
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel ABI::Windows::Devices::Adc::IAdcChannel

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                interface IAdcController;
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController ABI::Windows::Devices::Adc::IAdcController

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                interface IAdcControllerStatics;
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics ABI::Windows::Devices::Adc::IAdcControllerStatics

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                interface IAdcControllerStatics2;
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 ABI::Windows::Devices::Adc::IAdcControllerStatics2

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                class AdcController;
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIIterator_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a10b62c1-a014-5335-8867-747fcab16005"))
IIterator<ABI::Windows::Devices::Adc::AdcController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Adc::AdcController*, ABI::Windows::Devices::Adc::IAdcController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Adc.AdcController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Adc::AdcController*> __FIIterator_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Adc::IAdcController*>
//#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Adc::IAdcController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIIterable_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4e478aad-4861-5758-b64b-5b4f28d8f86e"))
IIterable<ABI::Windows::Devices::Adc::AdcController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Adc::AdcController*, ABI::Windows::Devices::Adc::IAdcController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Adc.AdcController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Adc::AdcController*> __FIIterable_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Adc::IAdcController*>
//#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Adc::IAdcController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("27547dc1-376e-5ce4-a246-34f210c8443c"))
IVectorView<ABI::Windows::Devices::Adc::AdcController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Adc::AdcController*, ABI::Windows::Devices::Adc::IAdcController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Adc.AdcController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Adc::AdcController*> __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::IAdcController*>
//#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::IAdcController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("baf66488-202f-5d51-b05e-18606c46b808"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Adc::AdcController*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Adc::AdcController*, ABI::Windows::Devices::Adc::IAdcController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Adc.AdcController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Adc::AdcController*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Adc::IAdcController*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Adc::IAdcController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("69420262-35c9-583f-a40e-c2694562c9e2"))
IAsyncOperation<ABI::Windows::Devices::Adc::AdcController*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Adc::AdcController*, ABI::Windows::Devices::Adc::IAdcController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Adc.AdcController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Adc::AdcController*> __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Adc::IAdcController*>
//#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Adc::IAdcController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7c4038c8-d920-53c7-a5d6-a976070d7637"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CAdc__CAdcController*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CAdc__CAdcController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Adc.AdcController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CAdc__CAdcController*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::IAdcController*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::IAdcController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1b0cddfb-d255-5a93-bcb9-de2047a3e4f3"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CAdc__CAdcController*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CAdc__CAdcController*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Adc.AdcController>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CAdc__CAdcController*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::IAdcController*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Adc::IAdcController*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000



#ifndef ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                namespace Provider {
                    interface IAdcProvider;
                } /* Windows */
            } /* Devices */
        } /* Adc */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider ABI::Windows::Devices::Adc::Provider::IAdcProvider

#endif // ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__









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
            namespace Adc {
                
                typedef enum AdcChannelMode : int AdcChannelMode;
                
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                class AdcChannel;
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */











/*
 *
 * Struct Windows.Devices.Adc.AdcChannelMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                /* [v1_enum, contract] */
                enum AdcChannelMode : int
                {
                    AdcChannelMode_SingleEnded = 0,
                    AdcChannelMode_Differential = 1,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcChannel
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcChannel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcChannel[] = L"Windows.Devices.Adc.IAdcChannel";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                /* [object, uuid("040BF414-2588-4A56-ABEF-73A260ACC60A"), exclusiveto, contract] */
                MIDL_INTERFACE("040BF414-2588-4A56-ABEF-73A260ACC60A")
                IAdcChannel : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Controller(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Adc::IAdcController * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadValue(
                        /* [retval, out] */__RPC__out INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReadRatio(
                        /* [retval, out] */__RPC__out DOUBLE * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdcChannel=_uuidof(IAdcChannel);
                
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcChannel;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcController[] = L"Windows.Devices.Adc.IAdcController";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                /* [object, uuid("2A76E4B0-A896-4219-86B6-EA8CDCE98F56"), exclusiveto, contract] */
                MIDL_INTERFACE("2A76E4B0-A896-4219-86B6-EA8CDCE98F56")
                IAdcController : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolutionInBits(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinValue(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxValue(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChannelMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Adc::AdcChannelMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ChannelMode(
                        /* [in] */ABI::Windows::Devices::Adc::AdcChannelMode value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsChannelModeSupported(
                        /* [in] */ABI::Windows::Devices::Adc::AdcChannelMode channelMode,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE OpenChannel(
                        /* [in] */INT32 channelNumber,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Adc::IAdcChannel * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdcController=_uuidof(IAdcController);
                
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcControllerStatics[] = L"Windows.Devices.Adc.IAdcControllerStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                /* [object, uuid("CCE98E0C-01F8-4891-BC3B-BE53EF279CA4"), exclusiveto, contract] */
                MIDL_INTERFACE("CCE98E0C-01F8-4891-BC3B-BE53EF279CA4")
                IAdcControllerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetControllersAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Adc::Provider::IAdcProvider * provider,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdcControllerStatics=_uuidof(IAdcControllerStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcControllerStatics2
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcControllerStatics2[] = L"Windows.Devices.Adc.IAdcControllerStatics2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Adc {
                /* [object, uuid("A2B93B1D-977B-4F5A-A5FE-A6ABAFFE6484"), exclusiveto, contract] */
                MIDL_INTERFACE("A2B93B1D-977B-4F5A-A5FE-A6ABAFFE6484")
                IAdcControllerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAdcControllerStatics2=_uuidof(IAdcControllerStatics2);
                
            } /* Windows */
        } /* Devices */
    } /* Adc */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Adc.AdcChannel
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Adc.IAdcChannel ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Adc_AdcChannel_DEFINED
#define RUNTIMECLASS_Windows_Devices_Adc_AdcChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Adc_AdcChannel[] = L"Windows.Devices.Adc.AdcChannel";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Adc.AdcController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Adc.IAdcControllerStatics2 interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *   Static Methods exist on the Windows.Devices.Adc.IAdcControllerStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Adc.IAdcController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Adc_AdcController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Adc_AdcController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Adc_AdcController[] = L"Windows.Devices.Adc.AdcController";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcController __x_ABI_CWindows_CDevices_CAdc_CIAdcController;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CAdc__CAdcController __FIIterator_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CAdc__CAdcController;

typedef struct __FIIterator_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIIterator_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CAdc__CAdcController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CAdc__CAdcController __FIIterable_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CAdc__CAdcController;

typedef  struct __FIIterable_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CAdc__CAdcController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIIterable_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CAdc__CAdcController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

typedef struct __FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CAdc_CIAdcController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIVectorView_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAdc__CAdcController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAdc_CIAdcController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CAdc__CAdcController * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;

#endif // ____x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode;















/*
 *
 * Struct Windows.Devices.Adc.AdcChannelMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode
{
    AdcChannelMode_SingleEnded = 0,
    AdcChannelMode_Differential = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcChannel
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcChannel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcChannel[] = L"Windows.Devices.Adc.IAdcChannel";
/* [object, uuid("040BF414-2588-4A56-ABEF-73A260ACC60A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAdc_CIAdcController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadValue )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
        /* [retval, out] */__RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReadRatio )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * This,
        /* [retval, out] */__RPC__out DOUBLE * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAdc_CIAdcChannelVtbl;

interface __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_get_Controller(This,value) \
    ( (This)->lpVtbl->get_Controller(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_ReadValue(This,result) \
    ( (This)->lpVtbl->ReadValue(This,result) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_ReadRatio(This,result) \
    ( (This)->lpVtbl->ReadRatio(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcChannel;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcController[] = L"Windows.Devices.Adc.IAdcController";
/* [object, uuid("2A76E4B0-A896-4219-86B6-EA8CDCE98F56"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelCount )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolutionInBits )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [in] */__x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsChannelModeSupported )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [in] */__x_ABI_CWindows_CDevices_CAdc_CAdcChannelMode channelMode,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *OpenChannel )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcController * This,
        /* [in] */INT32 channelNumber,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAdc_CIAdcChannel * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerVtbl;

interface __x_ABI_CWindows_CDevices_CAdc_CIAdcController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_get_ChannelCount(This,value) \
    ( (This)->lpVtbl->get_ChannelCount(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_get_ResolutionInBits(This,value) \
    ( (This)->lpVtbl->get_ResolutionInBits(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_get_MinValue(This,value) \
    ( (This)->lpVtbl->get_MinValue(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_get_MaxValue(This,value) \
    ( (This)->lpVtbl->get_MaxValue(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_get_ChannelMode(This,value) \
    ( (This)->lpVtbl->get_ChannelMode(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_put_ChannelMode(This,value) \
    ( (This)->lpVtbl->put_ChannelMode(This,value) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_IsChannelModeSupported(This,channelMode,result) \
    ( (This)->lpVtbl->IsChannelModeSupported(This,channelMode,result) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcController_OpenChannel(This,channelNumber,result) \
    ( (This)->lpVtbl->OpenChannel(This,channelNumber,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcController_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcControllerStatics
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcControllerStatics[] = L"Windows.Devices.Adc.IAdcControllerStatics";
/* [object, uuid("CCE98E0C-01F8-4891-BC3B-BE53EF279CA4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllersAsync )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CAdc__CAdcController * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_GetControllersAsync(This,provider,operation) \
    ( (This)->lpVtbl->GetControllersAsync(This,provider,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Adc.IAdcControllerStatics2
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Adc.AdcController
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_IAdcControllerStatics2[] = L"Windows.Devices.Adc.IAdcControllerStatics2";
/* [object, uuid("A2B93B1D-977B-4F5A-A5FE-A6ABAFFE6484"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAdc__CAdcController * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2Vtbl;

interface __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAdc_CIAdcControllerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Adc.AdcChannel
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Adc.IAdcChannel ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Adc_AdcChannel_DEFINED
#define RUNTIMECLASS_Windows_Devices_Adc_AdcChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Adc_AdcChannel[] = L"Windows.Devices.Adc.AdcChannel";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Adc.AdcController
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Adc.IAdcControllerStatics2 interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *   Static Methods exist on the Windows.Devices.Adc.IAdcControllerStatics interface starting with version 1.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Adc.IAdcController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Adc_AdcController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Adc_AdcController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Adc_AdcController[] = L"Windows.Devices.Adc.AdcController";
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
#endif // __windows2Edevices2Eadc_p_h__

#endif // __windows2Edevices2Eadc_h__
