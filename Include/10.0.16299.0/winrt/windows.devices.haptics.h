/* Header file automatically generated from windows.devices.haptics.idl */
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
#ifndef __windows2Edevices2Ehaptics_h__
#define __windows2Edevices2Ehaptics_h__
#ifndef __windows2Edevices2Ehaptics_p_h__
#define __windows2Edevices2Ehaptics_p_h__


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
#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                interface IKnownSimpleHapticsControllerWaveformsStatics;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics ABI::Windows::Devices::Haptics::IKnownSimpleHapticsControllerWaveformsStatics

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                interface ISimpleHapticsController;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController ABI::Windows::Devices::Haptics::ISimpleHapticsController

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                interface ISimpleHapticsControllerFeedback;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                interface IVibrationDevice;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice ABI::Windows::Devices::Haptics::IVibrationDevice

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                interface IVibrationDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics ABI::Windows::Devices::Haptics::IVibrationDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                class SimpleHapticsController;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#define DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3c501ba4-eda4-5238-bdb7-d10ba350cd83"))
IIterator<ABI::Windows::Devices::Haptics::SimpleHapticsController*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsController*, ABI::Windows::Devices::Haptics::ISimpleHapticsController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Haptics.SimpleHapticsController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Haptics::SimpleHapticsController*> __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t;
#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
//#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#define DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b50da692-4a2b-5c8a-8e14-0439c0b1dba4"))
IIterable<ABI::Windows::Devices::Haptics::SimpleHapticsController*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsController*, ABI::Windows::Devices::Haptics::ISimpleHapticsController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Haptics.SimpleHapticsController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Haptics::SimpleHapticsController*> __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t;
#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
//#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                class SimpleHapticsControllerFeedback;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE
#define DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b7d297d6-9666-5c9e-9dcc-5c382eae6750"))
IIterator<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*, ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*> __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t;
#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>
//#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE
#define DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8894a0df-33b0-57b0-aa1a-9255eee72dd5"))
IIterable<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*, ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*> __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t;
#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>
//#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                class VibrationDevice;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24e9b323-eef1-533f-ad38-de8fc8ca5692"))
IIterator<ABI::Windows::Devices::Haptics::VibrationDevice*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::VibrationDevice*, ABI::Windows::Devices::Haptics::IVibrationDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Haptics.VibrationDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Haptics::VibrationDevice*> __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::IVibrationDevice*>
//#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Haptics::IVibrationDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1a40c994-8810-5688-9362-c4bb51018552"))
IIterable<ABI::Windows::Devices::Haptics::VibrationDevice*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::VibrationDevice*, ABI::Windows::Devices::Haptics::IVibrationDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Haptics.VibrationDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Haptics::VibrationDevice*> __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::IVibrationDevice*>
//#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Haptics::IVibrationDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5390f01e-c701-5382-97cc-94eaac4b6cbf"))
IVectorView<ABI::Windows::Devices::Haptics::SimpleHapticsController*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsController*, ABI::Windows::Devices::Haptics::ISimpleHapticsController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Haptics::SimpleHapticsController*> __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t;
#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::ISimpleHapticsController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("51f54b04-bb9d-5c7b-8f5f-67f8caf4b003"))
IVectorView<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*, ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Haptics::SimpleHapticsControllerFeedback*> __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t;
#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("485aa8a6-2d29-5d34-b8d9-b0c961c17f7f"))
IVectorView<ABI::Windows::Devices::Haptics::VibrationDevice*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::VibrationDevice*, ABI::Windows::Devices::Haptics::IVibrationDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.VibrationDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Haptics::VibrationDevice*> __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::IVibrationDevice*>
//#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::IVibrationDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                enum VibrationAccessStatus : int;
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a38b59db-4ef1-5bd2-89ef-f1d9f1faca96"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::Haptics::VibrationAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Devices::Haptics::VibrationAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Haptics.VibrationAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Devices::Haptics::VibrationAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Haptics::VibrationAccessStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Haptics::VibrationAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("076b2611-5614-55a5-9c58-f9d17a8f0b79"))
IAsyncOperation<enum ABI::Windows::Devices::Haptics::VibrationAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::Devices::Haptics::VibrationAccessStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Haptics.VibrationAccessStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Devices::Haptics::VibrationAccessStatus> __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_t;
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Haptics::VibrationAccessStatus>
//#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Haptics::VibrationAccessStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4e22a135-f59a-546d-9fcf-82deb833d968"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Haptics::VibrationDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::VibrationDevice*, ABI::Windows::Devices::Haptics::IVibrationDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Haptics.VibrationDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Haptics::VibrationDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Haptics::IVibrationDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Haptics::IVibrationDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44193494-e331-50ca-bb61-6a71bd9b01c4"))
IAsyncOperation<ABI::Windows::Devices::Haptics::VibrationDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Haptics::VibrationDevice*, ABI::Windows::Devices::Haptics::IVibrationDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Haptics.VibrationDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Haptics::VibrationDevice*> __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Haptics::IVibrationDevice*>
//#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Haptics::IVibrationDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("096f6389-6757-56df-af12-cfe1d8f23fc1"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.VibrationDevice>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::IVibrationDevice*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::IVibrationDevice*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bda8b138-7862-59f3-bfd9-5f1cb063df02"))
IAsyncOperation<__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.VibrationDevice>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice*> __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::IVibrationDevice*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Haptics::IVibrationDevice*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                
                typedef enum VibrationAccessStatus : int VibrationAccessStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */


















/*
 *
 * Struct Windows.Devices.Haptics.VibrationAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                /* [v1_enum, contract] */
                enum VibrationAccessStatus : int
                {
                    VibrationAccessStatus_Allowed = 0,
                    VibrationAccessStatus_DeniedByUser = 1,
                    VibrationAccessStatus_DeniedBySystem = 2,
                    VibrationAccessStatus_DeniedByEnergySaver = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics[] = L"Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                /* [object, uuid("3D577EF7-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF7-4CEE-11E6-B535-001BDC06AB3B")
                IKnownSimpleHapticsControllerWaveformsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Click(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BuzzContinuous(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RumbleContinuous(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Press(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Release(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKnownSimpleHapticsControllerWaveformsStatics=_uuidof(IKnownSimpleHapticsControllerWaveformsStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.ISimpleHapticsController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.SimpleHapticsController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_ISimpleHapticsController[] = L"Windows.Devices.Haptics.ISimpleHapticsController";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                /* [object, uuid("3D577EF9-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF9-4CEE-11E6-B535-001BDC06AB3B")
                ISimpleHapticsController : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedFeedback(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsIntensitySupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPlayCountSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPlayDurationSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReplayPauseIntervalSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StopFeedback(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendHapticFeedback(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SendHapticFeedbackWithIntensity(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback,
                        /* [in] */DOUBLE intensity
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendHapticFeedbackForDuration(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback,
                        /* [in] */DOUBLE intensity,
                        /* [in] */ABI::Windows::Foundation::TimeSpan playDuration
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendHapticFeedbackForPlayCount(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * feedback,
                        /* [in] */DOUBLE intensity,
                        /* [in] */INT32 playCount,
                        /* [in] */ABI::Windows::Foundation::TimeSpan replayPauseInterval
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISimpleHapticsController=_uuidof(ISimpleHapticsController);
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.SimpleHapticsControllerFeedback
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback[] = L"Windows.Devices.Haptics.ISimpleHapticsControllerFeedback";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                /* [object, uuid("3D577EF8-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                MIDL_INTERFACE("3D577EF8-4CEE-11E6-B535-001BDC06AB3B")
                ISimpleHapticsControllerFeedback : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Waveform(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISimpleHapticsControllerFeedback=_uuidof(ISimpleHapticsControllerFeedback);
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.IVibrationDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.VibrationDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IVibrationDevice[] = L"Windows.Devices.Haptics.IVibrationDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                /* [object, uuid("40F21A3E-8844-47FF-B312-06185A3844DA"), exclusiveto, contract] */
                MIDL_INTERFACE("40F21A3E-8844-47FF-B312-06185A3844DA")
                IVibrationDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SimpleHapticsController(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Haptics::ISimpleHapticsController * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVibrationDevice=_uuidof(IVibrationDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.IVibrationDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.VibrationDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IVibrationDeviceStatics[] = L"Windows.Devices.Haptics.IVibrationDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Haptics {
                /* [object, uuid("53E2EDED-2290-4AC9-8EB3-1A84122EB71C"), exclusiveto, contract] */
                MIDL_INTERFACE("53E2EDED-2290-4AC9-8EB3-1A84122EB71C")
                IVibrationDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVibrationDeviceStatics=_uuidof(IVibrationDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Haptics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms[] = L"Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.SimpleHapticsController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Haptics.ISimpleHapticsController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_SimpleHapticsController[] = L"Windows.Devices.Haptics.SimpleHapticsController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.SimpleHapticsControllerFeedback
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Haptics.ISimpleHapticsControllerFeedback ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsControllerFeedback_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsControllerFeedback_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_SimpleHapticsControllerFeedback[] = L"Windows.Devices.Haptics.SimpleHapticsControllerFeedback";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.VibrationDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Haptics.IVibrationDeviceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Haptics.IVibrationDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Haptics_VibrationDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_VibrationDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_VibrationDevice[] = L"Windows.Devices.Haptics.VibrationDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;

interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

typedef  struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;

interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;

typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl;

interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;

typedef  struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl;

interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef  struct __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CVibrationDevice **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;

typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;

interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback;

typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl;

interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedbackVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CHaptics__CVibrationDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus;


















/*
 *
 * Struct Windows.Devices.Haptics.VibrationAccessStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CHaptics_CVibrationAccessStatus
{
    VibrationAccessStatus_Allowed = 0,
    VibrationAccessStatus_DeniedByUser = 1,
    VibrationAccessStatus_DeniedBySystem = 2,
    VibrationAccessStatus_DeniedByEnergySaver = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IKnownSimpleHapticsControllerWaveformsStatics[] = L"Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics";
/* [object, uuid("3D577EF7-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Click )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BuzzContinuous )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RumbleContinuous )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Press )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Release )(
        __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_get_Click(This,value) \
    ( (This)->lpVtbl->get_Click(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_get_BuzzContinuous(This,value) \
    ( (This)->lpVtbl->get_BuzzContinuous(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_get_RumbleContinuous(This,value) \
    ( (This)->lpVtbl->get_RumbleContinuous(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_get_Press(This,value) \
    ( (This)->lpVtbl->get_Press(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_get_Release(This,value) \
    ( (This)->lpVtbl->get_Release(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CIKnownSimpleHapticsControllerWaveformsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.ISimpleHapticsController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.SimpleHapticsController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_ISimpleHapticsController[] = L"Windows.Devices.Haptics.ISimpleHapticsController";
/* [object, uuid("3D577EF9-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedFeedback )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerFeedback * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsIntensitySupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPlayCountSupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPlayDurationSupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReplayPauseIntervalSupported )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopFeedback )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendHapticFeedback )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SendHapticFeedbackWithIntensity )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback,
        /* [in] */DOUBLE intensity
        );
    HRESULT ( STDMETHODCALLTYPE *SendHapticFeedbackForDuration )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback,
        /* [in] */DOUBLE intensity,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan playDuration
        );
    HRESULT ( STDMETHODCALLTYPE *SendHapticFeedbackForPlayCount )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * feedback,
        /* [in] */DOUBLE intensity,
        /* [in] */INT32 playCount,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan replayPauseInterval
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerVtbl;

interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_get_SupportedFeedback(This,value) \
    ( (This)->lpVtbl->get_SupportedFeedback(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_get_IsIntensitySupported(This,value) \
    ( (This)->lpVtbl->get_IsIntensitySupported(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_get_IsPlayCountSupported(This,value) \
    ( (This)->lpVtbl->get_IsPlayCountSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_get_IsPlayDurationSupported(This,value) \
    ( (This)->lpVtbl->get_IsPlayDurationSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_get_IsReplayPauseIntervalSupported(This,value) \
    ( (This)->lpVtbl->get_IsReplayPauseIntervalSupported(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_StopFeedback(This) \
    ( (This)->lpVtbl->StopFeedback(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_SendHapticFeedback(This,feedback) \
    ( (This)->lpVtbl->SendHapticFeedback(This,feedback) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_SendHapticFeedbackWithIntensity(This,feedback,intensity) \
    ( (This)->lpVtbl->SendHapticFeedbackWithIntensity(This,feedback,intensity) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_SendHapticFeedbackForDuration(This,feedback,intensity,playDuration) \
    ( (This)->lpVtbl->SendHapticFeedbackForDuration(This,feedback,intensity,playDuration) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_SendHapticFeedbackForPlayCount(This,feedback,intensity,playCount,replayPauseInterval) \
    ( (This)->lpVtbl->SendHapticFeedbackForPlayCount(This,feedback,intensity,playCount,replayPauseInterval) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.SimpleHapticsControllerFeedback
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_ISimpleHapticsControllerFeedback[] = L"Windows.Devices.Haptics.ISimpleHapticsControllerFeedback";
/* [object, uuid("3D577EF8-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Waveform )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedbackVtbl;

interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedbackVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_get_Waveform(This,value) \
    ( (This)->lpVtbl->get_Waveform(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsControllerFeedback_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.IVibrationDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.VibrationDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IVibrationDevice[] = L"Windows.Devices.Haptics.IVibrationDevice";
/* [object, uuid("40F21A3E-8844-47FF-B312-06185A3844DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_get_SimpleHapticsController(This,value) \
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Devices.Haptics.IVibrationDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Haptics.VibrationDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Haptics_IVibrationDeviceStatics[] = L"Windows.Devices.Haptics.IVibrationDeviceStatics";
/* [object, uuid("53E2EDED-2290-4AC9-8EB3-1A84122EB71C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CHaptics__CVibrationDevice * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_RequestAccessAsync(This,operation) \
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_GetDeviceSelector(This,result) \
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )

#define __x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_FindAllAsync(This,operation) \
    ( (This)->lpVtbl->FindAllAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CHaptics_CIVibrationDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Haptics.IKnownSimpleHapticsControllerWaveformsStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_KnownSimpleHapticsControllerWaveforms[] = L"Windows.Devices.Haptics.KnownSimpleHapticsControllerWaveforms";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.SimpleHapticsController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Haptics.ISimpleHapticsController ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsController_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_SimpleHapticsController[] = L"Windows.Devices.Haptics.SimpleHapticsController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.SimpleHapticsControllerFeedback
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Haptics.ISimpleHapticsControllerFeedback ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsControllerFeedback_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_SimpleHapticsControllerFeedback_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_SimpleHapticsControllerFeedback[] = L"Windows.Devices.Haptics.SimpleHapticsControllerFeedback";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Devices.Haptics.VibrationDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Haptics.IVibrationDeviceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Haptics.IVibrationDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Devices_Haptics_VibrationDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Haptics_VibrationDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Haptics_VibrationDevice[] = L"Windows.Devices.Haptics.VibrationDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Ehaptics_p_h__

#endif // __windows2Edevices2Ehaptics_h__
